/*
 * Flash mapping for BCM7xxx boards
 *
 * Copyright (C) 2001 Broadcom Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 *
 * THT				10-23-2002
 * Steven J. Hill	09-25-2001
 * Mark Huang		09-15-2001
 */

#include <linux/module.h>
#include <linux/types.h>
#include <linux/kernel.h>
#include <asm/io.h>
#include <linux/mtd/mtd.h>
#include <linux/mtd/map.h>
#include <linux/mtd/partitions.h>
#include <linux/config.h>
#include <linux/init.h>
#include <asm/brcmstb/common/brcmstb.h>

/* HUMAX_GENKERNEL */
#include <linux/mtd/humax_gpio.h>

//#define PRINTK(...)
#define PRINTK printk

extern int gFlashSize;

extern unsigned long getPhysFlashBase(void);
#define WINDOW_ADDR getPhysFlashBase()

/* 
 * All other 97XXX boards.  May have 2 flash chips, but we only use 1.
 * and since they are of different sizes, no interleaving.
 */
#define WINDOW_SIZE (0x20000000	 - WINDOW_ADDR)

#define BUSWIDTH 2

static struct mtd_info *bcm9XXXX_mtd;

/* Whether splash screen has been enabled on command line */
extern int gBcmSplash;

#ifdef CONFIG_MTD_COMPLEX_MAPPINGS

static DEFINE_SPINLOCK(bcm9XXXX_lock);

static inline void bcm9XXXX_map_copy_from_16bytes(void *to, unsigned long from, ssize_t len)
{
	unsigned long flags;
	
	spin_lock_irqsave(&bcm9XXXX_lock, flags);
	*(volatile unsigned long*)0xbffff880 = 0xFFFF;
	*(volatile unsigned long*)0xbffff880 = 0xFFFF;
	*(volatile unsigned long*)0xbffff880 = 0xFFFF;
	*(volatile unsigned long*)0xbffff880 = 0xFFFF;
	*(volatile unsigned long*)0xbffff880 = 0xFFFF;
	*(volatile unsigned long*)0xbffff880 = 0xFFFF;
	*(volatile unsigned long*)0xbffff880 = 0xFFFF;
	*(volatile unsigned long*)0xbffff880 = 0xFFFF;
	memcpy_fromio(to, (void *)from, len);
	spin_unlock_irqrestore(&bcm9XXXX_lock, flags);
}

static map_word bcm9XXXX_map_read(struct map_info *map, unsigned long ofs)
{
	/* if it is 7401C0, then we need this workaround */
	if(brcm_ebi_war)
	{
		map_word r;
		unsigned long flags;
	
		spin_lock_irqsave(&bcm9XXXX_lock, flags);
		*(volatile unsigned long*)0xb0400b1c = 0xFFFF;
		*(volatile unsigned long*)0xb0400b1c = 0xFFFF;
		*(volatile unsigned long*)0xb0400b1c = 0xFFFF;
		*(volatile unsigned long*)0xb0400b1c = 0xFFFF;
		*(volatile unsigned long*)0xb0400b1c = 0xFFFF;
		*(volatile unsigned long*)0xb0400b1c = 0xFFFF;
		*(volatile unsigned long*)0xb0400b1c = 0xFFFF;
		*(volatile unsigned long*)0xb0400b1c = 0xFFFF;
		r = inline_map_read(map, ofs);
		spin_unlock_irqrestore(&bcm9XXXX_lock, flags);
		return r;
	}
	else
		return inline_map_read(map, ofs);
}

static void bcm9XXXX_map_copy_from(struct map_info *map, void *to, unsigned long from, ssize_t len)
{
	/* if it is 7401C0, then we need this workaround */
	if(brcm_ebi_war)
	{
		if(len > 16)
		{
			while(len >= 16)
			{
				bcm9XXXX_map_copy_from_16bytes(to,
					(unsigned long) map->virt + from,
					16);
				to += 16;
				from += 16;
				len -= 16;
			}
		}
	
		if(len > 0)
			bcm9XXXX_map_copy_from_16bytes(to, (unsigned long) map->virt + from, len);
	}	
	else	
		memcpy_fromio(to, map->virt + from, len);
}

static void bcm9XXXX_map_write(struct map_info *map, const map_word d, unsigned long ofs)
{
	inline_map_write(map, d, ofs);
}

static void bcm9XXXX_map_copy_to(struct map_info *map, unsigned long to, const void *from, ssize_t len)
{
	inline_map_copy_to(map, to, from, len);
}
#endif

/* HUMAX_GENKERNEL */
static DEFINE_SPINLOCK(humax_flash_lock);
static void bcm9xxxx_set_vpp(struct map_info *map, int enable)
{
	spin_lock(&humax_flash_lock);
	if (enable)
	{
#if defined(HUMAX_GENKERNEL)	
		GPIO_CONFIG_PIN_OUTPUT(GPIO_FLASH_WP_GIO);
#endif
		GPIO_SET_PIN(GPIO_FLASH_WP_GIO);
	}
	else
	{
		GPIO_CLEAR_PIN(GPIO_FLASH_WP_GIO);
	}
	spin_unlock (&humax_flash_lock);
}

struct map_info bcm9XXXX_map
= {
	name: "Broadcom 9xxxx mapped flash",
	// size: WINDOW_SIZE, // THT: Now a value to be determined at run-time.
	bankwidth: BUSWIDTH,

// jipeng - enable this for 7401C0 & 7118A0
#ifdef	CONFIG_MTD_COMPLEX_MAPPINGS
	read: bcm9XXXX_map_read,
	copy_from: bcm9XXXX_map_copy_from,
	write: bcm9XXXX_map_write,
	copy_to: bcm9XXXX_map_copy_to,
#endif 
	/* HUMAX_GENKERNEL */
	set_vpp: bcm9xxxx_set_vpp
};

/*
 * Don't define DEFAULT_SIZE_MB if the platform does not support a standard partition table.
 * Defining it will allow the user to specify flashsize=nnM at boot time for non-standard flash size, however.
 */

#define SMALLEST_FLASH_SIZE	(16<<20)
#define DEFAULT_RESERVED_SIZE 	(4<<20)  // CFE areas, from 1FC0_0000H to 2000_0000H
#define DEFAULT_SPLASH_SIZE 	(512<<10) // 512KB
#define ROOTFS_PART				(0)

#ifdef CONFIG_MTD_ECM_PARTITION
#define DEFAULT_OCAP_SIZE		(6<<20)
#define DEFAULT_AVAIL1_SIZE 	(32<<20)
#define DEFAULT_ECM_SIZE 		(DEFAULT_OCAP_SIZE+DEFAULT_AVAIL1_SIZE)
#define AVAIL1_PART				(1)
#define OCAP_PART				(2)
#else
#define DEFAULT_ECM_SIZE		(0)
#define DEFAULT_OCAP_SIZE		(0)
#define DEFAULT_AVAIL1_SIZE		(0)
#define AVAIL1_PART				(-1)
#endif
// DEFAULT_SIZE_MB will be defined later based on platforms.
#define DEFAULT_ROOTFS_SIZE (DEFAULT_SIZE_MB - DEFAULT_RESERVED_SIZE - DEFAULT_ECM_SIZE)

#if defined(HUMAX_GENKERNEL) || defined(HUMAX_LINUX_HARDENING)
static struct mtd_partition bcm9XXXX_parts[] = {

#if defined(HUMAX_16MB_NOR)
#define DEFAULT_SIZE_MB 16 /* 128MB flash */ 
	{ name: "LA/FGDL",	offset: 0x4000, 	size: 256 },
	{ name: "MFA",			offset: 0x00100000, 	size: 512*1024 },
	{ name: "POSIX",	  offset: 0x00180000, 	size: 768 },
	{ name: "RootFS",		offset: 0x00480000, 	size: 2*1024*1024 },
	{ name: "ROMFS",		offset: 0x00680000, 	size: 9*1024*1024 },
	{ name: "JFFS2",		offset: 0x00F80000,	size: 512*1024 },

#elif defined(HUMAX_32MB_NOR)
#define DEFAULT_SIZE_MB 32 /* 32MB flash */
	{ name: "LA/FGDL",	offset: 0x4000, 	size: 256 },
	{ name: "MFA",			offset: 0x00100000, 	size: 512*1024 },
	{ name: "POSIX",	  offset: 0x00180000, 	size: 768 },
	{ name: "RootFS",		offset: 0x00480000, 	size: 2*1024*1024 },
	{ name: "ROMFS",		offset: 0x00680000, 	size: 19*1024*1024 },
	{ name: "JFFS2",		offset: 0x01980000,	size: 6528*1024 },

#elif defined(HUMAX_64MB_NOR)
#define DEFAULT_SIZE_MB 64 /* 64MB flash */
#if defined(HUMAX_KBW)
/* New Requirement of KERNEL. Support BCA/FlashHeader, RootFF(SquashRFS), no ROMFS, etc */
	{ name: "BCA",			offset: 0x0009FE00, 	size: 256 },
	{ name: "MFA",			offset: 0x000A0000, 	size: 2*1024*1024 },
	{ name: "FlashHeader",	offset: 0x002A0000, 	size: 768 },
	{ name: "RootFS",		offset: 0x005A0000, 	size: (27*1024-640)*1024 },
	{ name: "JFFS2",		offset: 0x02000000, 	size: 32*1024*1024 - 128*1024},	// 32M - 128K : JFFS2 require uniform sector size.
/* following mtd should be hidden to NDS. It is used for Test S/W only. Not for official kernel */		
	{ name: "LA/FGDL",		offset: 0x00000000, 	size: 640*1024 },
	{ name: "Kernel",		offset: 0x002A0000, 	size: 3*1024*1024 }, // to access Kernel Area

#elif defined(HUMAX_SKYD)
/* New Requirement of KERNEL. Support BCA/FlashHeader, RootFF(SquashRFS), no ROMFS, etc */
	{ name: "BSL1",			offset: 0x00000000, 	size: 640*1024 },
	{ name: "BSL2",			offset: 0x000A0000, 	size: 3*1024*1024 - 640*1024 },
	{ name: "Reserved",		offset: 0x00300000, 	size: 256*1024 },
	{ name: "Reserved",		offset: 0x00340000, 	size: 128*1024 },
	{ name: "Reserved",		offset: 0x00360000, 	size: 128*1024},
	{ name: "MFA",			offset: 0x00380000, 	size: 512*1024 },
	{ name: "F/H",			offset: 0x00400000, 	size: 128*1024 }, 
	{ name: "Rootfs",		offset: 0x00920000, 	size: 19*1024*1024 },
	{ name: "FFS",			offset: 0x01C20000, 	size: ((60-5-19)*1024 - 256)*1024},
#else
/* New Requirement of KERNEL. Support BCA/FlashHeader, RootFF(SquashRFS), no ROMFS, etc */
        { name: "LA/FGDL",              offset: 0x00000000,     size: 640*1024 },
        { name: "MFA",                  offset: 0x000A0000,     size: 2*1024*1024 },
        { name: "Kernel",               offset: 0x002A0000,     size: 3*1024*1024 }, // to access Kernel Area
        { name: "RootFS",               offset: 0x005A0000,     size: (27*1024-640)*1024 },
        { name: "JFFS2",                offset: 0x02000000,     size: 32*1024*1024 },
        { name: "BCA",                  offset: 0x00020000,     size: 256 },
        { name: "FlashHeader",  	offset: 0x002A0000,     size: 768 },
        { name: "KernelA",              offset: 0x00300000,     size: 3*1024*1024-384*1024 }, // Linux Kernel
#endif
#else // 4MB nor.
#define DEFAULT_SIZE_MB 4 /* 128MB flash */ 
#if defined(HUMAX_SKYD)
	{ name: "BSL1",			offset: 0x00000000, 	size: 1*1024*1024 + 512*1024 },
	{ name: "BSL2",			offset: 0x000A0000, 	size: 1*1024*1024 + 512*1024 },
	{ name: "Reserved",	offset: 0x00300000, 	size: 256*1024 },
	{ name: "Reserved",	offset: 0x00340000, 	size: 128*1024 },
	{ name: "Reserved",	offset: 0x00360000, 	size: 128*1024},
	{ name: "MFA",			offset: 0x00380000, 	size: 512*1024 },
#elif defined(HUMAX_KDG)
	{ name: "PreLoader",	offset: 0x00000000, 	size: 128*1024 }, //mtd0
	{ name: "UpLoader",	offset: 0x00020000, 	size: 640*1024 }, //mtd1
	{ name: "MFA",		offset: 0x000C0000, 	size: 128*1024 }, //mtd2	
	{ name: "Facloader",	offset: 0x000E0000, 	size: 768*1024 }, //mtd3
	{ name: "EEPROM1",	offset: 0x001A0000, 	size: 128*1024},  //mtd4
	{ name: "EEPROM2",	offset: 0x001C0000, 	size: 128*1024},  //mtd5
	{ name: "Reserved",	offset: 0x001E0000, 	size: (2*1024+128)*1024},  //mtd6
#else
	{ name: "LOADER",		offset: 0x00000000, 	size: 2*1024*1024 },
	{ name: "MFA",			offset: 0x00200000, 	size: 512*1024 },
	{ name: "Reserved",	offset: 0x00280000, 	size: 128*1024 },
	{ name: "Reserved",	offset: 0x002A0000, 	size: 128*1024},
	{ name: "avail0",		offset: 0x002C0000,	size: 1280*1024 },
#endif
#endif
/* Add 1 extra place-holder partition for splash, and a safety guard element */
	{name: NULL, offset: 0, size: 0},
	{name: NULL, offset: 0, size: 0}
};

#else

static struct mtd_partition bcm9XXXX_parts[] = {

#if defined( CONFIG_MTD_BRCMNAND ) 
#define DEFAULT_SIZE_MB ( BRCM_FLASH_SIZE >> 20)

	/* In a NOR+NAND configuration, the NOR flash is only 4MB or less */
	 { name: "nor",		offset: 0,		size: DEFAULT_SIZE_MB*1024*1024 },
	 
#elif defined( CONFIG_MIPS_BCM7440 ) || defined(CONFIG_MIPS_BCM7601) || defined(CONFIG_MIPS_BCM7635) 

#define DEFAULT_SIZE_MB 64 /* 64MB flash */

	{ name: "rootfs",		offset: 0,		size: 60*1024*1024 },
	{ name: "cfe",		offset: 0x03C00000, size: 512*1024 },
	{ name: "vmlinux",      offset: 0x03C80000, size: 3454*1024 },
	{ name: "drmregion",    offset: 0x03FDF800, size:  128*1024 },
	{ name: "config",		offset: 0x03FFF800,	size: 144 },
	{ name: "nvram",		offset: 0x03FFF890,	size: 1904 },

#elif BRCM_FLASH_SIZE == 0x1000000

/* 3563 */
#define DEFAULT_SIZE_MB 16
	{ name: "rootfs",	offset: 0,		    size: 12*1024*1024 },
	{ name: "cfe",	        offset: 0x00C00000, size: 512*1024 },
	{ name: "vmlinux",	offset: 0x00C80000, size: 3582*1024 },
	{ name: "config",	offset: 0x00FFF800,	size: 144 },
	{ name: "nvram",	offset: 0x00FFF890,	size: 1904 },

#else

/* default for 32MB+ platforms */

#define DEFAULT_SIZE_MB 32 /* 32MB flash */  
  #if defined( CONFIG_MTD_ECM_PARTITION)
	{ name: "rootfs",		offset: 0,		    		size: DEFAULT_ROOTFS_SIZE },
	{ name: "avail1",		offset: DEFAULT_ROOTFS_SIZE,	size: DEFAULT_AVAIL1_SIZE },
	{ name: "ocap",		offset: DEFAULT_ROOTFS_SIZE+DEFAULT_AVAIL1_SIZE,	size: DEFAULT_OCAP_SIZE },
  #else
	{ name: "rootfs",		offset: 0,			size: 28*1024*1024 },
  #endif
	{ name: "cfe",	        offset: 0x01C00000, size: 512*1024 },
	{ name: "vmlinux",	offset: 0x01C80000, size: 3582*1024 },
	{ name: "config",	offset: 0x01FFF800,	size: 144 },
	{ name: "nvram",	offset: 0x01FFF890,	size: 1904 },

#endif
/* Add 1 extra place-holder partition for splash, and a safety guard element */
	{name: NULL, offset: 0, size: 0},
	{name: NULL, offset: 0, size: 0}
};

#endif // HUMAX_GENKERNEL || HUMAX_LINUX_HARDENING


#ifdef CONFIG_MTD_BRCMNAND
static void bcm_add_nor_partition(void)
{
	printk(KERN_INFO "Mapped %dMB NOR flash at virtual address %08X\n", DEFAULT_SIZE_MB, bcm9XXXX_map.virt );
	add_mtd_partitions(bcm9XXXX_mtd, bcm9XXXX_parts, 1);
}

void (*gInitialize_Nor_Partition)(void) = (void (*)(void)) 0;
EXPORT_SYMBOL(gInitialize_Nor_Partition);
#endif

int __init init_bcm9XXXX_map(void)
{
	unsigned int avail1_size = DEFAULT_AVAIL1_SIZE;
	int i, numparts;

#ifdef CONFIG_MTD_ECM_PARTITION
	unsigned int ecm_size = DEFAULT_ECM_SIZE;
	unsigned int ocap_size = DEFAULT_OCAP_SIZE;
#endif
	
	printk(KERN_NOTICE "BCM97XXX flash device: 0x%08lx @ 0x%08lx\n", WINDOW_SIZE, WINDOW_ADDR);
	bcm9XXXX_map.size = WINDOW_SIZE;
	numparts = ARRAY_SIZE(bcm9XXXX_parts) - 2; /* Minus the 2 extra place holders */

	/* Adjust partition table */
#ifdef CONFIG_MTD_ECM_PARTITION
	if (WINDOW_SIZE < (64<<20)) {
		ecm_size = DEFAULT_OCAP_SIZE;
		avail1_size = 0;
		bcm9XXXX_parts[AVAIL1_PART].size = avail1_size;
		numparts--;
	}
	else {
		int factor = WINDOW_SIZE / (64 << 20);
		
		bcm9XXXX_parts[OCAP_PART].size = ocap_size = factor*DEFAULT_OCAP_SIZE;
		bcm9XXXX_parts[AVAIL1_PART].size = avail1_size = factor*DEFAULT_AVAIL1_SIZE;
		ecm_size = ocap_size + avail1_size;
	}

	bcm9XXXX_parts[0].size = WINDOW_SIZE - (DEFAULT_RESERVED_SIZE + ecm_size);
PRINTK("Part[0] name=%s, size=%x, offset=%x\n", bcm9XXXX_parts[0].name, bcm9XXXX_parts[0].size, bcm9XXXX_parts[0].offset);
	for (i=1; i<ARRAY_SIZE(bcm9XXXX_parts); i++) {
		
		/* Skip avail1 if 0 size */
		if (0 == bcm9XXXX_parts[i].size && i == AVAIL1_PART) {
			bcm9XXXX_parts[i].offset = bcm9XXXX_parts[i-1].size + bcm9XXXX_parts[i-1].offset;
			continue;
		}
	
		bcm9XXXX_parts[i].offset = bcm9XXXX_parts[i-1].size + bcm9XXXX_parts[i-1].offset;
		
PRINTK("Part[%d] name=%s, size=%x, offset=%x\n", avail1_size ? i : i-1, 
bcm9XXXX_parts[i].name, bcm9XXXX_parts[i].size, bcm9XXXX_parts[i].offset);
	}

	/* Shift partitions 1 up if avail1_size is 0 */
	if (0 == avail1_size) {
		for (i=AVAIL1_PART; i < numparts; i++) {
			bcm9XXXX_parts[i].offset = bcm9XXXX_parts[i+1].offset;
			bcm9XXXX_parts[i].size = bcm9XXXX_parts[i+1].size;
		}
		bcm9XXXX_parts[numparts].offset = 0;
		bcm9XXXX_parts[numparts].size = 0;
	}

		
#elif defined( DEFAULT_SIZE_MB )
	if (WINDOW_SIZE != (DEFAULT_SIZE_MB << 20)) {
		
		bcm9XXXX_parts[0].size += WINDOW_SIZE - (DEFAULT_SIZE_MB << 20);
PRINTK("Part[0] name=%s, size=%x, offset=%x\n", bcm9XXXX_parts[0].name, bcm9XXXX_parts[0].size, bcm9XXXX_parts[0].offset);
		for (i=1; i<ARRAY_SIZE(bcm9XXXX_parts); i++) {
			bcm9XXXX_parts[i].offset += WINDOW_SIZE - (DEFAULT_SIZE_MB << 20);
PRINTK("Part[%d] name=%s, size=%x, offset=%x\n", i, bcm9XXXX_parts[i].name, bcm9XXXX_parts[i].size, bcm9XXXX_parts[i].offset);
		}
	}
#endif


	if (gBcmSplash) {		
PRINTK("In bcmSplash, numParts=%d\n", numparts);
		for (i=0; i<numparts; i++) {
PRINTK("bcm9xxxx-flash.c: i=%d\n", i);
PRINTK("B4 Part[%d] name=%s, size=%x, offset=%x\n",  i, 
	bcm9XXXX_parts[i].name, bcm9XXXX_parts[i].size, bcm9XXXX_parts[i].offset);
			

			/* we will carve out 512KB from avail1 partition if it exists, or rootfs otherwise */
			if ((avail1_size && i == AVAIL1_PART) || (avail1_size == 0 && i == ROOTFS_PART)) {
				int j;

				/* i now points to the avail1 and/or rootfs partition */
				bcm9XXXX_parts[i].size -= DEFAULT_SPLASH_SIZE;
				if (i > 0) {
					bcm9XXXX_parts[i].offset = bcm9XXXX_parts[i-1].size + bcm9XXXX_parts[i-1].offset;
				}
				else {
					bcm9XXXX_parts[i].offset = 0;
				}
				
				/* Move all partitions that follow one down */
				for (j=numparts - 1; j > i; j--) {
					bcm9XXXX_parts[j+1] = bcm9XXXX_parts[j];
	PRINTK("Moved partition[%d] down to [%d], name=%s\n", j, j+1, bcm9XXXX_parts[j+1].name);
				}	
				numparts++;
				
	PRINTK("original: #parts=%d, Part[%d] name=%s, size=%x, offset=%x\n", numparts,  i, 
bcm9XXXX_parts[i].name, bcm9XXXX_parts[i].size, bcm9XXXX_parts[i].offset);

				i++;
				/* i now points to the newly created splash partition */

				bcm9XXXX_parts[i].offset = bcm9XXXX_parts[i-1].size + bcm9XXXX_parts[i-1].offset;
				bcm9XXXX_parts[i].size = DEFAULT_SPLASH_SIZE;
				bcm9XXXX_parts[i].name = "splash";
	PRINTK("splash: #parts=%d, Part[%d] name=%s, size=%x, offset=%x\n", numparts,  i, 
bcm9XXXX_parts[i].name, bcm9XXXX_parts[i].size, bcm9XXXX_parts[i].offset);
			}

		}
	}

	
	bcm9XXXX_map.virt = ioremap((unsigned long)WINDOW_ADDR, WINDOW_SIZE);

	

	if (!bcm9XXXX_map.virt) {
		printk("Failed to ioremap\n");
		return -EIO;
	}
	
	bcm9XXXX_mtd = do_map_probe("cfi_probe", &bcm9XXXX_map);
	if (!bcm9XXXX_mtd) {

		iounmap((void *)bcm9XXXX_map.virt);
		return -ENXIO;
	}
#if defined(HUMAX_GENKERNEL) || defined(HUMAX_LINUX_HARDENING)

	add_mtd_partitions(bcm9XXXX_mtd, bcm9XXXX_parts, numparts);

#else
	
#if defined(CONFIG_MTD_BRCMNAND)
  #if defined(CONFIG_MTD_BRCMNAND_NOR_ACCESS)
	// Delay calling add_partition, since we want NAND to get assigned mtd0.
	if (!gInitialize_Nor_Partition) {
		// Nor is loaded before Nand
		gInitialize_Nor_Partition = bcm_add_nor_partition;
	}
	else {
		// Nand is loaded before Nor
		//gInitialize_Nor_Partition = bcm_add_nor_partition;
		add_mtd_partitions(bcm9XXXX_mtd, bcm9XXXX_parts, numparts);
	}
	
  #else
  	// Brcmnand but access to NOR is turned off: Do nothing
  	;
  #endif
  
#else
	// Regular Nor access
	add_mtd_partitions(bcm9XXXX_mtd, bcm9XXXX_parts, numparts);
#endif

#endif // HUMAX_GENKERNEL

	bcm9XXXX_mtd->owner = THIS_MODULE;

	return 0;
}

void __exit cleanup_bcm9XXXX_map(void)
{
	if (bcm9XXXX_mtd) {
		del_mtd_partitions(bcm9XXXX_mtd);
		map_destroy(bcm9XXXX_mtd);
	}
	if (bcm9XXXX_map.virt) {
		iounmap((void *)bcm9XXXX_map.virt);
		bcm9XXXX_map.virt = 0;
	}
}

module_init(init_bcm9XXXX_map);
module_exit(cleanup_bcm9XXXX_map);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Steven J. Hill <shill@broadcom.com>");
MODULE_DESCRIPTION("Broadcom 7xxx MTD map driver");
