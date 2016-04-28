/*
 * drivers/net/phy/phy_device.c
 *
 * Framework for finding and configuring PHYs.
 * Also contains generic PHY driver
 *
 * Author: Andy Fleming
 *
 * Copyright (c) 2004 Freescale Semiconductor, Inc.
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 *
 */
#include <linux/kernel.h>
#include <linux/sched.h>
#include <linux/string.h>
#include <linux/errno.h>
#include <linux/unistd.h>
#include <linux/slab.h>
#include <linux/interrupt.h>
#include <linux/init.h>
#include <linux/delay.h>
#include <linux/netdevice.h>
#include <linux/etherdevice.h>
#include <linux/skbuff.h>
#include <linux/spinlock.h>
#include <linux/mm.h>
#include <linux/module.h>
#include <linux/mii.h>
#include <linux/ethtool.h>
#include <linux/phy.h>

#include <asm/io.h>
#include <asm/irq.h>
#include <asm/uaccess.h>

MODULE_DESCRIPTION("PHY library");
MODULE_AUTHOR("Andy Fleming");
MODULE_LICENSE("GPL");

static struct phy_driver genphy_driver;
extern int mdio_bus_init(void);
extern void mdio_bus_exit(void);

struct phy_device* phy_device_create(struct mii_bus *bus, int addr, int phy_id)
{
	struct phy_device *dev;
	/* We allocate the device, and initialize the
	 * default values */
	dev = kcalloc(1, sizeof(*dev), GFP_KERNEL);

	if (NULL == dev)
		return (struct phy_device*) PTR_ERR((void*)-ENOMEM);

	dev->speed = 0;
	dev->duplex = -1;
	dev->pause = dev->asym_pause = 0;
	dev->link = 1;

	dev->autoneg = AUTONEG_ENABLE;

	dev->addr = addr;
	dev->phy_id = phy_id;
	dev->bus = bus;

	dev->state = PHY_DOWN;

	spin_lock_init(&dev->lock);

	return dev;
}
EXPORT_SYMBOL(phy_device_create);

/* get_phy_device
 *
 * description: Reads the ID registers of the PHY at addr on the
 *   bus, then allocates and returns the phy_device to
 *   represent it.
 */
struct phy_device * get_phy_device(struct mii_bus *bus, int addr)
{
	int phy_reg;
	u32 phy_id;
	struct phy_device *dev = NULL;

	/* Grab the bits from PHYIR1, and put them
	 * in the upper half */
	phy_reg = bus->read(bus, addr, MII_PHYSID1);

	if (phy_reg < 0)
		return ERR_PTR(phy_reg);

	phy_id = (phy_reg & 0xffff) << 16;

	/* Grab the bits from PHYIR2, and put them in the lower half */
	phy_reg = bus->read(bus, addr, MII_PHYSID2);

	if (phy_reg < 0)
		return ERR_PTR(phy_reg);

	phy_id |= (phy_reg & 0xffff);

	/* If the phy_id is all Fs, there is no device there */
	if (0xffffffff == phy_id)
		return NULL;

	dev = phy_device_create(bus, addr, phy_id);

	return dev;
}

/* phy_prepare_link:
 *
 * description: Tells the PHY infrastructure to handle the
 *   gory details on monitoring link status (whether through
 *   polling or an interrupt), and to call back to the
 *   connected device driver when the link status changes.
 *   If you want to monitor your own link state, don't call
 *   this function */
void phy_prepare_link(struct phy_device *phydev,
		void (*handler)(struct net_device *))
{
	phydev->adjust_link = handler;
}

/* phy_connect:
 *
 * description: Convenience function for connecting ethernet
 *   devices to PHY devices.  The default behavior is for
 *   the PHY infrastructure to handle everything, and only notify
 *   the connected driver when the link status changes.  If you
 *   don't want, or can't use the provided functionality, you may
 *   choose to call only the subset of functions which provide
 *   the desired functionality.
 */
struct phy_device * phy_connect(struct net_device *dev, const char *phy_id,
		void (*handler)(struct net_device *), u32 flags)
{
	struct phy_device *phydev;

	phydev = phy_attach(dev, phy_id, flags);

	if (IS_ERR(phydev))
		return phydev;

	phy_prepare_link(phydev, handler);

	phy_start_machine(phydev, NULL);

	if (phydev->irq > 0)
		phy_start_interrupts(phydev);

	return phydev;
}
EXPORT_SYMBOL(phy_connect);

void phy_disconnect(struct phy_device *phydev)
{
	if (phydev->irq > 0)
		phy_stop_interrupts(phydev);

	phy_stop_machine(phydev);
	
	phydev->adjust_link = NULL;

	phy_detach(phydev);
}
EXPORT_SYMBOL(phy_disconnect);

/* phy_attach:
 *
 *   description: Called by drivers to attach to a particular PHY
 *     device. The phy_device is found, and properly hooked up
 *     to the phy_driver.  If no driver is attached, then the
 *     genphy_driver is used.  The phy_device is given a ptr to
 *     the attaching device, and given a callback for link status
 *     change.  The phy_device is returned to the attaching
 *     driver.
 */
static int phy_compare_id(struct device *dev, void *data)
{
	return strcmp((char *)data, dev->bus_id) ? 0 : 1;
}

struct phy_device *phy_attach(struct net_device *dev,
		const char *phy_id, u32 flags)
{
	struct bus_type *bus = &mdio_bus_type;
	struct phy_device *phydev;
	struct device *d;

	/* Search the list of PHY devices on the mdio bus for the
	 * PHY with the requested name */
	d = bus_find_device(bus, NULL, (void *)phy_id, phy_compare_id);

	if (d) {
		phydev = to_phy_device(d);
	} else {
		printk(KERN_ERR "%s not found\n", phy_id);
		return ERR_PTR(-ENODEV);
	}

	/* Assume that if there is no driver, that it doesn't
	 * exist, and we should use the genphy driver. */
	if (NULL == d->driver) {
		int err;
		down_write(&d->bus->subsys.rwsem);
		d->driver = &genphy_driver.driver;

		err = d->driver->probe(d);

		if (err < 0)
			return ERR_PTR(err);

		device_bind_driver(d);
		up_write(&d->bus->subsys.rwsem);
	}

	if (phydev->attached_dev) {
		printk(KERN_ERR "%s: %s already attached\n",
				dev->name, phy_id);
		return ERR_PTR(-EBUSY);
	}

	phydev->attached_dev = dev;

	phydev->dev_flags = flags;

	return phydev;
}
EXPORT_SYMBOL(phy_attach);

void phy_detach(struct phy_device *phydev)
{
	phydev->attached_dev = NULL;

	/* If the device had no specific driver before (i.e. - it
	 * was using the generic driver), we unbind the device
	 * from the generic driver so that there's a chance a
	 * real driver could be loaded */
	if (phydev->dev.driver == &genphy_driver.driver) {
		down_write(&phydev->dev.bus->subsys.rwsem);
		device_release_driver(&phydev->dev);
		up_write(&phydev->dev.bus->subsys.rwsem);
	}
}
EXPORT_SYMBOL(phy_detach);


/* Generic PHY support and helper functions */

/* genphy_config_advert
 *
 * description: Writes MII_ADVERTISE with the appropriate values,
 *   after sanitizing the values to make sure we only advertise
 *   what is supported
 */
int genphy_config_advert(struct phy_device *phydev)
{
	u32 advertise;
	int adv;
	int err;

	/* Only allow advertising what
	 * this PHY supports */
	phydev->advertising &= phydev->supported;
	advertise = phydev->advertising;

	/* Setup standard advertisement */
	adv = phy_read(phydev, MII_ADVERTISE);

	if (adv < 0)
		return adv;

	adv &= ~(ADVERTISE_ALL | ADVERTISE_100BASE4 | ADVERTISE_PAUSE_CAP | 
		 ADVERTISE_PAUSE_ASYM);
	if (advertise & ADVERTISED_10baseT_Half)
		adv |= ADVERTISE_10HALF;
	if (advertise & ADVERTISED_10baseT_Full)
		adv |= ADVERTISE_10FULL;
	if (advertise & ADVERTISED_100baseT_Half)
		adv |= ADVERTISE_100HALF;
	if (advertise & ADVERTISED_100baseT_Full)
		adv |= ADVERTISE_100FULL;
	if (advertise & ADVERTISED_Pause)
		adv |= ADVERTISE_PAUSE_CAP;
	if (advertise & ADVERTISED_Asym_Pause)
		adv |= ADVERTISE_PAUSE_ASYM;

	err = phy_write(phydev, MII_ADVERTISE, adv);

	if (err < 0)
		return err;

	/* Configure gigabit if it's supported */
	if (phydev->supported & (SUPPORTED_1000baseT_Half |
				SUPPORTED_1000baseT_Full)) {
		adv = phy_read(phydev, MII_CTRL1000);

		if (adv < 0)
			return adv;

		adv &= ~(ADVERTISE_1000FULL | ADVERTISE_1000HALF);
		if (advertise & SUPPORTED_1000baseT_Half)
			adv |= ADVERTISE_1000HALF;
		if (advertise & SUPPORTED_1000baseT_Full)
			adv |= ADVERTISE_1000FULL;
		err = phy_write(phydev, MII_CTRL1000, adv);

		if (err < 0)
			return err;
	}

	return adv;
}
EXPORT_SYMBOL(genphy_config_advert);

/* genphy_setup_forced
 *
 * description: Configures MII_BMCR to force speed/duplex
 *   to the values in phydev. Assumes that the values are valid.
 *   Please see phy_sanitize_settings() */
int genphy_setup_forced(struct phy_device *phydev)
{
	int ctl = BMCR_RESET;

	phydev->pause = phydev->asym_pause = 0;

	if (SPEED_1000 == phydev->speed)
		ctl |= BMCR_SPEED1000;
	else if (SPEED_100 == phydev->speed)
		ctl |= BMCR_SPEED100;

	if (DUPLEX_FULL == phydev->duplex)
		ctl |= BMCR_FULLDPLX;
	
	ctl = phy_write(phydev, MII_BMCR, ctl);

	if (ctl < 0)
		return ctl;

	/* We just reset the device, so we'd better configure any
	 * settings the PHY requires to operate */
	if (phydev->drv->config_init)
		ctl = phydev->drv->config_init(phydev);

	return ctl;
}


/* Enable and Restart Autonegotiation */
int genphy_restart_aneg(struct phy_device *phydev)
{
	int ctl;

	ctl = phy_read(phydev, MII_BMCR);

	if (ctl < 0)
		return ctl;

	ctl |= (BMCR_ANENABLE | BMCR_ANRESTART);

	/* Don't isolate the PHY if we're negotiating */
	ctl &= ~(BMCR_ISOLATE);

	ctl = phy_write(phydev, MII_BMCR, ctl);

	return ctl;
}


/* genphy_config_aneg
 *
 * description: If auto-negotiation is enabled, we configure the
 *   advertising, and then restart auto-negotiation.  If it is not
 *   enabled, then we write the BMCR
 */
int genphy_config_aneg(struct phy_device *phydev)
{
	int err = 0;

	if (AUTONEG_ENABLE == phydev->autoneg) {
		err = genphy_config_advert(phydev);

		if (err < 0)
			return err;

		err = genphy_restart_aneg(phydev);
	} else
		err = genphy_setup_forced(phydev);

	return err;
}
EXPORT_SYMBOL(genphy_config_aneg);

/* genphy_update_link
 *
 * description: Update the value in phydev->link to reflect the
 *   current link value.  In order to do this, we need to read
 *   the status register twice, keeping the second value
 */
int genphy_update_link(struct phy_device *phydev)
{
	int status;

	/* Do a fake read */
	status = phy_read(phydev, MII_BMSR);

	if (status < 0)
		return status;

	/* Read link and autonegotiation status */
	status = phy_read(phydev, MII_BMSR);

	if (status < 0)
		return status;

	if ((status & BMSR_LSTATUS) == 0)
		phydev->link = 0;
	else
		phydev->link = 1;

	return 0;
}

/* genphy_read_status
 *
 * description: Check the link, then figure out the current state
 *   by comparing what we advertise with what the link partner
 *   advertises.  Start by checking the gigabit possibilities,
 *   then move on to 10/100.
 */
int genphy_read_status(struct phy_device *phydev)
{
	int adv;
	int err;
	int lpa;
	int lpagb = 0;

	/* Update the link, but return if there
	 * was an error */
	err = genphy_update_link(phydev);
	if (err)
		return err;

	if (AUTONEG_ENABLE == phydev->autoneg) {
		if (phydev->supported & (SUPPORTED_1000baseT_Half
					| SUPPORTED_1000baseT_Full)) {
			lpagb = phy_read(phydev, MII_STAT1000);

			if (lpagb < 0)
				return lpagb;

			adv = phy_read(phydev, MII_CTRL1000);

			if (adv < 0)
				return adv;

			lpagb &= adv << 2;
		}

		lpa = phy_read(phydev, MII_LPA);

		if (lpa < 0)
			return lpa;

		adv = phy_read(phydev, MII_ADVERTISE);

		if (adv < 0)
			return adv;

		lpa &= adv;

		phydev->speed = SPEED_10;
		phydev->duplex = DUPLEX_HALF;
		phydev->pause = phydev->asym_pause = 0;

		if (lpagb & (LPA_1000FULL | LPA_1000HALF)) {
			phydev->speed = SPEED_1000;

			if (lpagb & LPA_1000FULL)
				phydev->duplex = DUPLEX_FULL;
		} else if (lpa & (LPA_100FULL | LPA_100HALF)) {
			phydev->speed = SPEED_100;
			
			if (lpa & LPA_100FULL)
				phydev->duplex = DUPLEX_FULL;
		} else
			if (lpa & LPA_10FULL)
				phydev->duplex = DUPLEX_FULL;

		if (phydev->duplex == DUPLEX_FULL){
			phydev->pause = lpa & LPA_PAUSE_CAP ? 1 : 0;
			phydev->asym_pause = lpa & LPA_PAUSE_ASYM ? 1 : 0;
		}
	} else {
		int bmcr = phy_read(phydev, MII_BMCR);
		if (bmcr < 0)
			return bmcr;

		if (bmcr & BMCR_FULLDPLX)
			phydev->duplex = DUPLEX_FULL;
		else
			phydev->duplex = DUPLEX_HALF;

		if (bmcr & BMCR_SPEED1000)
			phydev->speed = SPEED_1000;
		else if (bmcr & BMCR_SPEED100)
			phydev->speed = SPEED_100;
		else
			phydev->speed = SPEED_10;

		phydev->pause = phydev->asym_pause = 0;
	}

	return 0;
}
EXPORT_SYMBOL(genphy_read_status);

static int genphy_config_init(struct phy_device *phydev)
{
	u32 val;
	u32 features;

	/* For now, I'll claim that the generic driver supports
	 * all possible port types */
	features = (SUPPORTED_TP | SUPPORTED_MII
			| SUPPORTED_AUI | SUPPORTED_FIBRE |
			SUPPORTED_BNC);

	/* Do we support autonegotiation? */
	val = phy_read(phydev, MII_BMSR);

	if (val < 0)
		return val;

	if (val & BMSR_ANEGCAPABLE)
		features |= SUPPORTED_Autoneg;

	if (val & BMSR_100FULL)
		features |= SUPPORTED_100baseT_Full;
	if (val & BMSR_100HALF)
		features |= SUPPORTED_100baseT_Half;
	if (val & BMSR_10FULL)
		features |= SUPPORTED_10baseT_Full;
	if (val & BMSR_10HALF)
		features |= SUPPORTED_10baseT_Half;

	if (val & BMSR_ESTATEN) {
		val = phy_read(phydev, MII_ESTATUS);

		if (val < 0)
			return val;

		if (val & ESTATUS_1000_TFULL)
			features |= SUPPORTED_1000baseT_Full;
		if (val & ESTATUS_1000_THALF)
			features |= SUPPORTED_1000baseT_Half;
	}

	phydev->supported = features;
	phydev->advertising = features;

	return 0;
}


/* phy_probe
 *
 * description: Take care of setting up the phy_device structure,
 *   set the state to READY (the driver's init function should
 *   set it to STARTING if needed).
 */
static int phy_probe(struct device *dev)
{
	struct phy_device *phydev;
	struct phy_driver *phydrv;
	struct device_driver *drv;
	int err = 0;

	phydev = to_phy_device(dev);

	/* Make sure the driver is held.
	 * XXX -- Is this correct? */
	drv = get_driver(phydev->dev.driver);
	phydrv = to_phy_driver(drv);
	phydev->drv = phydrv;

	/* Disable the interrupt if the PHY doesn't support it */
	if (!(phydrv->flags & PHY_HAS_INTERRUPT))
		phydev->irq = PHY_POLL;

	spin_lock(&phydev->lock);

	/* Start out supporting everything. Eventually,
	 * a controller will attach, and may modify one
	 * or both of these values */
	phydev->supported = phydrv->features;
	phydev->advertising = phydrv->features;

	/* Set the state to READY by default */
	phydev->state = PHY_READY;

	if (phydev->drv->probe)
		err = phydev->drv->probe(phydev);

	spin_unlock(&phydev->lock);

	if (err < 0)
		return err;

	if (phydev->drv->config_init)
		err = phydev->drv->config_init(phydev);

	return err;
}

static int phy_remove(struct device *dev)
{
	struct phy_device *phydev;

	phydev = to_phy_device(dev);

	spin_lock(&phydev->lock);
	phydev->state = PHY_DOWN;
	spin_unlock(&phydev->lock);

	if (phydev->drv->remove)
		phydev->drv->remove(phydev);

	put_driver(dev->driver);
	phydev->drv = NULL;

	return 0;
}

int phy_driver_register(struct phy_driver *new_driver)
{
	int retval;

	memset(&new_driver->driver, 0, sizeof(new_driver->driver));
	new_driver->driver.name = new_driver->name;
	new_driver->driver.bus = &mdio_bus_type;
	new_driver->driver.probe = phy_probe;
	new_driver->driver.remove = phy_remove;

	retval = driver_register(&new_driver->driver);

	if (retval) {
		printk(KERN_ERR "%s: Error %d in registering driver\n",
				new_driver->name, retval);

		return retval;
	}

	pr_info("%s: Registered new driver\n", new_driver->name);

	return 0;
}
EXPORT_SYMBOL(phy_driver_register);

void phy_driver_unregister(struct phy_driver *drv)
{
	driver_unregister(&drv->driver);
}
EXPORT_SYMBOL(phy_driver_unregister);

static struct phy_driver genphy_driver = {
	.phy_id		= 0xffffffff,
	.phy_id_mask	= 0xffffffff,
	.name		= "Generic PHY",
	.config_init	= genphy_config_init,
	.features	= 0,
	.config_aneg	= genphy_config_aneg,
	.read_status	= genphy_read_status,
	.driver		= {.owner= THIS_MODULE, },
};

static int __init phy_init(void)
{
	int rc;

	rc = mdio_bus_init();
	if (rc)
		return rc;

	rc = phy_driver_register(&genphy_driver);
	if (rc)
		mdio_bus_exit();

	return rc;
}

static void __exit phy_exit(void)
{
	phy_driver_unregister(&genphy_driver);
	mdio_bus_exit();
}

subsys_initcall(phy_init);
module_exit(phy_exit);
