/*
 *
 *  drivers/mtd/brcmnand/bcm7xxx-nand.c
 *
    Copyright (c) 2005-2006 Broadcom Corporation                 
    
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License version 2 as
 published by the Free Software Foundation.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

    File: bcm7xxx-nand.c

    Description: 
    This is a device driver for the Broadcom NAND flash for bcm97xxx boards.
when	who what
-----	---	----
051011	tht	codings derived from OneNand generic.c implementation.
 */
 
#include <linux/config.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/device.h>
#include <linux/platform_device.h>
#include <linux/err.h>
#include <linux/mtd/mtd.h>

#include <linux/mtd/partitions.h>

// For CFE partitions.
#include <asm/brcmstb/common/brcmstb.h>


#include <asm/io.h>
//#include <asm/mach/flash.h>

#include <linux/mtd/brcmnand.h>
#include "brcmnand_priv.h"

#define PRINTK(...)
//#define PRINTK printk

#define DRIVER_NAME	"bcm7xxx-nand"
#define DRIVER_INFO "Broadcom STB NAND controller"

//#ifdef CONFIG_MTD_PARTITIONS
//static const char *part_probes[] = { "cmdlinepart", NULL,  };
//#endif

/* Size and offset are variable, depending on the size of the chip, but 
 * cfe_kernel always starts at 1FC0_0000 and is 4MB size.
 * Here is the layout of the NAND flash
 *
 *    Physical offset			Size			partition		Owner/comment
 *	<eof-4MB>	<eof>		4MB			BBT			BBT only if fsize > 512MB
 *	2000_0000	<eof - 1MB>	FlSize-256MB	data			Linux File System -- if fsize > 512MB
 *	1ff0_0000	1fff_ffff		1MB=8x128k 	BBT/or res	Linux RW -- if fsize <=512MB
 *	1fe0_0000	1fef_ffff		1MB=8x128k	nvm 		CFE, RO for Linux
 *	1fc0_0000	1fdf_ffff		2MB			CFE			CFE
 *
 *    [Optional] 1MB splash screen image partition carved out from the partition immediately 
 *	preceding the CFE partition when bcmsplash=1
 *    
 *	1f80_0000	1fbf_ffff		4MB			Linux Kernel	CFE
 *	start of flash	1f7f_ffff		flashSize-8MB	rootfs		Linux File System
 */
#define SMALLEST_FLASH_SIZE	(16<<20)
#define DEFAULT_RESERVED_SIZE 	(8<<20) 
#define DEFAULT_SPLASH_SIZE 	(1<<20)
#define DEFAULT_BBT0_SIZE_MB	(1)
#define DEFAULT_BBT1_SIZE_MB	(4)

#ifdef CONFIG_MTD_ECM_PARTITION
#define DEFAULT_OCAP_SIZE	(6<<20)
#define DEFAULT_AVAIL1_SIZE (32<<20)
#define DEFAULT_ECM_SIZE (DEFAULT_OCAP_SIZE+DEFAULT_AVAIL1_SIZE)
#define AVAIL1_PART	(1)
#define OCAP_PART	(2)
#else
#define DEFAULT_ECM_SIZE	(0)
#define DEFAULT_OCAP_SIZE	(0)
#define DEFAULT_AVAIL1_SIZE	(0)
#define AVAIL1_PART	(-1)
#define OCAP_PART	(-1)
#endif
#define DEFAULT_ROOTFS_SIZE (SMALLEST_FLASH_SIZE - DEFAULT_RESERVED_SIZE - DEFAULT_ECM_SIZE)

static struct mtd_partition bcm7XXX_nand_parts[] = 
{
	{name: "FlashHeader", offset: BMTPART_SIZE, size: FLASH_HEADER_SIZE},//last 8MB => for BBT
	{name: "romfs", offset: BMTPART_SIZE+FLASH_HEADER_SIZE+KERNEL_SIZE, size: ROMFS_SIZE},
	{name: "free", offset: MIDDLE_OFFSET, size: FREESPACE_SIZE},
	{name: NULL, offset: 0, size: 0},
	{name: NULL, offset: 0, size: 0}
};

struct brcmnand_info {
	struct mtd_info		mtd;
	struct mtd_partition*	parts;
	struct brcmnand_chip	brcmnand;
};
static struct brcmnand_info *info;

extern int gBcmSplash;

void* get_brcmnand_handle(void)
{
	void* handle = &info->brcmnand;
	return handle;
}
//EXPORT_SYMBOL(get_brcmnand_handle);


static void print_partition(int numParts)
{
	int i;

	for (i=0; i<numParts;i++) {
		PRINTK("i=%d, name=%s, start=%0llx, size=%0llx\n", 
			i, bcm7XXX_nand_parts[i].name, bcm7XXX_nand_parts[i].offset,
			bcm7XXX_nand_parts[i].size);
	}
}


/* 
 * Size and offset are variable, depending on the size of the chip, but 
 * cfe_kernel always starts at 1FC0_0000 and is 4MB size.
 * The entire reserved area (kernel + CFE + BBT) occupies the last 8 MB of the flash.
 */
static void __devinit 
brcmnanddrv_setup_mtd_partitions(struct brcmnand_info* nandinfo, int *numParts)
{
	struct mtd_info* mtd = &nandinfo->mtd;
	int i = 0;
		
	*numParts = ARRAY_SIZE(bcm7XXX_nand_parts)-2; //data + 2 extra partitions 
	nandinfo->parts = bcm7XXX_nand_parts;

	for (i=0; i<(*numParts); i++) {
		//bcm7XXX_nand_parts[i].offset = bcm7XXX_nand_parts[i-1].size + bcm7XXX_nand_parts[i-1].offset;
		//bcm7XXX_nand_parts[i].size = bcm7XXX_nand_parts[i-1].size + bcm7XXX_nand_parts[i-1].offset;
			bcm7XXX_nand_parts[i].ecclayout = mtd->ecclayout;
		printk("Part[%d] name=%s, size=%x, offset=%x\n", i, bcm7XXX_nand_parts[i].name, bcm7XXX_nand_parts[i].size, bcm7XXX_nand_parts[i].offset);
	}
}


static void* gPageBuffer;

static int __devinit brcmnanddrv_probe(struct device *dev)
{
	struct platform_device *pdev = to_platform_device(dev);
	//struct flash_platform_data *pdata = pdev->dev.platform_data;
	//struct resource *res = pdev->resource;
	//unsigned long size = res->end - res->start + 1;
	int err = 0;
	int numParts = 0;

	gPageBuffer = NULL;
	info = kmalloc(sizeof(struct brcmnand_info), GFP_KERNEL);
	if (!info)
		return -ENOMEM;

	memset(info, 0, sizeof(struct brcmnand_info));

#ifndef CONFIG_MTD_BRCMNAND_EDU
	gPageBuffer = kmalloc(sizeof(struct nand_buffers), GFP_KERNEL);
	info->brcmnand.buffers = (struct nand_buffers*) gPageBuffer;
#else
	/* Align on 32B boundary for efficient DMA transfer */
	gPageBuffer = kmalloc(sizeof(struct nand_buffers) + 31, GFP_DMA);
	info->brcmnand.buffers = (struct nand_buffers*) (((unsigned int) gPageBuffer+31) & (~31));
#endif
	if (!info->brcmnand.buffers) {
		kfree(info);
		return -ENOMEM;
	}

	memset(info->brcmnand.buffers, 0, sizeof(struct nand_buffers));

	info->brcmnand.numchips = 1; // For now, we only support 1 chip
	info->brcmnand.chip_shift = 0; // Only 1 chip
	//info->brcmnand.regs = pdev->resource[0].start;
	info->brcmnand.priv = &info->mtd;

	//info->brcmnand.mmcontrol = NULL;  // THT: Sync Burst Read TBD.  pdata->mmcontrol;

	info->mtd.name = pdev->dev.bus_id;
	info->mtd.priv = &info->brcmnand;
	info->mtd.owner = THIS_MODULE;

	/* Enable the following for a flash based bad block table */
	info->brcmnand.options |= NAND_USE_FLASH_BBT;
	

	if (brcmnand_scan(&info->mtd, MAX_NAND_CS)) {
		err = -ENXIO;
		goto out_free_info;
	}

	printk("	numchips=%d, size=%llx\n", info->brcmnand.numchips, device_size(&(info->mtd)));

	brcmnanddrv_setup_mtd_partitions(info, &numParts);

	add_mtd_partitions(&info->mtd, info->parts, numParts);
	dev_set_drvdata(&pdev->dev, info);
	return 0;


out_free_info:

	if (gPageBuffer)
		kfree(gPageBuffer);
	kfree(info);
	return err;
}

static int __devexit brcmnanddrv_remove(struct device *dev)
{
	struct platform_device *pdev = to_platform_device(dev);
	struct brcmnand_info *info = dev_get_drvdata(&pdev->dev);
	//struct resource *res = pdev->resource;
	//unsigned long size = res->end - res->start + 1;

	dev_set_drvdata(&pdev->dev, NULL);

	if (info) {
		if (info->parts)
			del_mtd_partitions(&info->mtd);
		//else
			//del_mtd_device(&info->mtd);

		brcmnand_release(&info->mtd);
		//release_mem_region(res->start, size);
		//iounmap(info->brcmnand.base);
		kfree(gPageBuffer);
		kfree(info);
	}

	return 0;
}

static struct device_driver bcm7xxx_nand_driver = {
	.name		= DRIVER_NAME,
	.bus		= &platform_bus_type,
	.probe		= brcmnanddrv_probe,
	.remove		= __devexit_p(brcmnanddrv_remove),
};

MODULE_ALIAS(DRIVER_NAME);




MODULE_ALIAS(DRIVER_NAME);

static int __init brcmnanddrv_init(void)
{
	int err = 0;
	struct resource devRes[1];
	struct platform_device* pdev;
	unsigned long get_RAM_size(void);

#if 0 //def CONFIG_MIPS_BCM3548
	printk("brcmnand: not supported for 3548 in this release, exiting\n");
	return(-ENODEV);
#endif
	
	printk (DRIVER_INFO " (BrcmNand Controller)\n");

	memset(devRes, 0, sizeof(devRes));
	devRes[0].name = "brcmnand-base";
	devRes[0].start = BRCMNAND_CTRL_REGS;
	devRes[0].end = BRCMNAND_CTRL_REGS_END;
	devRes[0].flags = IORESOURCE_MEM;

	// Will need this whenever we use interrupt to look at the flash status
	//devRes[1].name ="brcmNand-irq";
	//devRes[1].start = tbd;
	//devRes[1].end = tbd;
	//devRes[1].flags = IORESOURCE_IRQ;

	// Before we register the driver, add a simple device matching our driver
	pdev = platform_device_register_simple(
		(char*) bcm7xxx_nand_driver.name,
		0, /* ID */
		devRes,
		ARRAY_SIZE(devRes));
	if (IS_ERR(pdev)) {
		printk("brcmnanddrv_init: device register failed, err=%d\n", err);
		return PTR_ERR(pdev);
	}

	// Set up dma_mask for our platform device
	// Overwrite whatever value it was set to.
	if (1 /*!pdev->dev.dma_mask*/) {
		//dma_set_mask(&pdev->dev, (u64) ((unsigned long) upper_memory - 1UL)); // default is 32MB 0x01ffffff;
		//dma_set_mask(&pdev->dev, 0x01ffffff);
		//pdev->dev.dma_mask = (u64*) 0x01ffffff;  
		pdev->dev.dma_mask = &pdev->dev.coherent_dma_mask; 
		pdev->dev.coherent_dma_mask = (u64)  ( get_RAM_size() - 1UL);
	}
		

	err = driver_register(&bcm7xxx_nand_driver);
	if (err) {
		printk("brcmnanddrv_init: driver_register failed, err=%d\n", err);
		return err;
	}
	return 0;
}

static void __exit brcmnanddrv_exit(void)
{
	driver_unregister(&bcm7xxx_nand_driver);
}

module_init(brcmnanddrv_init);
module_exit(brcmnanddrv_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ton Truong <ttruong@broadcom.com>");
MODULE_DESCRIPTION("Broadcom NAND flash driver");

