/*
 * YAFFS: Yet Another Flash File System. A NAND-flash specific file system.
 *
 * Copyright (C) 2002-2007 Aleph One Ltd.
 *   for Toby Churchill Ltd and Brightstar Engineering
 *
 * Created by Charles Manning <charles@aleph1.co.uk>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

const char *yaffs_mtdif_c_version =
    "$Id: yaffs_mtdif.c,v 1.19 2007/02/14 01:09:06 wookey Exp $";

#include "yportenv.h"


#include "yaffs_mtdif.h"

#include "linux/mtd/mtd.h"
#include "linux/types.h"
#include "linux/time.h"
#include "linux/mtd/nand.h"



#if (LINUX_VERSION_CODE < KERNEL_VERSION(2,6,18))
  #ifdef CONFIG_MTD_BRCMNAND

  static struct nand_oobinfo yaffs1_oobinfo = {
	.useecc		= MTD_NANDECC_PLACEONLY,
	.eccbytes	= 3,
	.eccpos		= {
		6,7,8
		},
	.oobfree	= { {0, 4}, {9,7}, /* Byte 5 (6th byte) used for BI, byte 4 used */
				{0, 0}
			   }
			/* THT Bytes offset 4&5 are used by BBT.  Actually only byte 5 is used, but in order to accomodate
			 * for 16 bit bus width, byte 4 is also not used.  If we only use byte-width chip, (We did)
			 * then we can also use byte 4 as free bytes.
			 * THT YAFFS1 uses byte 4 to mark the Block Status.
			 */
  };

  extern int gdebug;
  
  #else
static struct nand_oobinfo yaffs_oobinfo = {
	.useecc = 1,
	.eccbytes = 6,
	.eccpos = {8, 9, 10, 13, 14, 15}
};
 

static struct nand_oobinfo yaffs_noeccinfo = {
	.useecc = 0,
};
 #endif
#endif

#if (LINUX_VERSION_CODE > KERNEL_VERSION(2,6,17))
static inline void translate_spare2oob(const yaffs_Spare *spare, __u8 *oob)
{
	oob[0] = spare->tagByte0;
	oob[1] = spare->tagByte1;
	oob[2] = spare->tagByte2;
	oob[3] = spare->tagByte3;
	oob[4] = spare->tagByte4;
	oob[5] = spare->tagByte5 & 0x3f;
	oob[5] |= spare->blockStatus == 'Y' ? 0: 0x80;
	oob[5] |= spare->pageStatus == 0 ? 0: 0x40;
	oob[6] = spare->tagByte6;
	oob[7] = spare->tagByte7;
}

static inline void translate_oob2spare(yaffs_Spare *spare, __u8 *oob)
{
	struct yaffs_NANDSpare *nspare = (struct yaffs_NANDSpare *)spare;
	spare->tagByte0 = oob[0];
	spare->tagByte1 = oob[1];
	spare->tagByte2 = oob[2];
	spare->tagByte3 = oob[3];
	spare->tagByte4 = oob[4];
	spare->tagByte5 = oob[5] == 0xff ? 0xff : oob[5] & 0x3f;
	spare->blockStatus = oob[5] & 0x80 ? 0xff : 'Y';
	spare->pageStatus = oob[5] & 0x40 ? 0xff : 0;
	spare->ecc1[0] = spare->ecc1[1] = spare->ecc1[2] = 0xff;
	spare->tagByte6 = oob[6];
	spare->tagByte7 = oob[7];
	spare->ecc2[0] = spare->ecc2[1] = spare->ecc2[2] = 0xff;

	nspare->eccres1 = nspare->eccres2 = 0; /* FIXME */
}

#elif defined (CONFIG_MTD_BRCMNAND)
/*
 * BrcmNAND use byte 5 (6th byte) as page status, and byte 4 as block status
 */
static inline void translate_spare2oob(const yaffs_Spare *spare, __u8 *oob)
{
	oob[0] = spare->tagByte0;
	oob[1] = spare->tagByte1;
	oob[2] = spare->tagByte2;
	oob[3] = spare->tagByte3;
	oob[4] = spare->tagByte4;
	
	//oob[5] = spare->tagByte5 & 0x3f;
	//oob[5] = spare->blockStatus == 'Y' || spare->pageStatus == 0 ? 0 : 0xff;
	oob[5] = 0xff;  // BI bits do not set
	
	oob[6] = oob[7] = oob[8] = 0xff; // BrcmNAND ECC bytes
	
	oob[9] = spare->tagByte5 & 0x3f;  // Remember this byte also holds the page & block status.
	oob[9] |= spare->blockStatus == 'Y' ? 0: 0x80;
	oob[9] |= spare->pageStatus == 0 ? 0: 0x40;		
	
	oob[10] = spare->tagByte6;
	oob[11] = spare->tagByte7;
	oob[12] = oob[13] = oob[14] = oob[15] = 0xff; // Unused
}

static inline void translate_oob2spare(yaffs_Spare *spare, __u8 *oob)
{
	//struct yaffs_NANDSpare *nspare = (struct yaffs_NANDSpare *)spare;
	spare->tagByte0 = oob[0];
	spare->tagByte1 = oob[1];
	spare->tagByte2 = oob[2];
	spare->tagByte3 = oob[3];
	spare->tagByte4 = oob[4];
	//
	// Here since the BBT writes to it, we can't assume it has any useful pattern
	//spare->tagByte5 = oob[5];
	//spare->blockStatus = oob[5] == 0xff ? 0 : 'Y';
	//spare->pageStatus = oob[5] == 0xff ?  0xff : 0;
	spare->tagByte5 = oob[9] == 0xff ? 0xff : oob[9] & 0x3f;
	spare->blockStatus = oob[9] & 0x80 ? 0xff : 'Y';
	spare->pageStatus = oob[9] & 0x40 ? 0xff : 0;

	// HW calculated ECC
	spare->ecc1[0] = 0xff; //oob[6];
	spare->ecc1[1] = 0xff; //oob[7];
	spare->ecc1[2] = 0xff; //oob[8];
	
	spare->tagByte6 = oob[10];
	spare->tagByte7 = oob[11];
	spare->ecc2[0] = spare->ecc2[1] = spare->ecc2[2] = 0xff;

if (gdebug) {printk("Spare\n");
print_oobbuf(spare, sizeof(yaffs_Spare));

printk("oob\n");
print_oobbuf(oob, 16);
}

	//nspare->eccres1 = nspare->eccres2 = 0; /* FIXME */
}
#endif

int nandmtd_WriteChunkToNAND(yaffs_Device * dev, int chunkInNAND,
			     const __u8 * data, const yaffs_Spare * spare)
{
	struct mtd_info *mtd = (struct mtd_info *)(dev->genericDevice);
#if (LINUX_VERSION_CODE > KERNEL_VERSION(2,6,17))
	struct mtd_oob_ops ops;
#endif
	size_t dummy;
	int retval = 0;

	loff_t addr = ((loff_t) chunkInNAND) * dev->nDataBytesPerChunk;
#if (LINUX_VERSION_CODE > KERNEL_VERSION(2,6,17))
	__u8 spareAsBytes[8]; /* OOB */

	if (data && !spare)
		retval = mtd->write(mtd, addr, dev->nDataBytesPerChunk,
				&dummy, data);
	else if (spare) {
		if (dev->useNANDECC) {
			translate_spare2oob(spare, spareAsBytes);
			ops.mode = MTD_OOB_AUTO;
			ops.ooblen = 8; /* temp hack */
		} else {
			ops.mode = MTD_OOB_RAW;
			ops.ooblen = YAFFS_BYTES_PER_SPARE;
		}
		ops.len = data ? dev->nDataBytesPerChunk : ops.ooblen;
		ops.datbuf = (u8 *)data;
		ops.ooboffs = 0;
		ops.oobbuf = spareAsBytes;
		retval = mtd->write_oob(mtd, addr, &ops);
	}
#elif defined( CONFIG_MTD_BRCMNAND )
	__u8 oob[YAFFS_BYTES_PER_SPARE];

  	if (spare) {
		translate_spare2oob(spare, oob);
  	}

	if (data && spare) {
			retval =
			    mtd->write_ecc(mtd, addr, dev->nDataBytesPerChunk,
					   &dummy, data, oob,
					   &yaffs1_oobinfo);
	} else {
		if (data)
			retval =
			    mtd->write(mtd, addr, dev->nDataBytesPerChunk, &dummy,
				       data);
		if (spare)
			retval =
			    mtd->write_oob(mtd, addr, YAFFS_BYTES_PER_SPARE,
					   &dummy, oob);
	}


#else
	__u8 *spareAsBytes = (__u8 *) spare;

	if (data && spare) {
		if (dev->useNANDECC)
			retval =
			    mtd->write_ecc(mtd, addr, dev->nDataBytesPerChunk,
					   &dummy, data, spareAsBytes,
					   &yaffs_oobinfo);
		else
			retval =
			    mtd->write_ecc(mtd, addr, dev->nDataBytesPerChunk,
					   &dummy, data, spareAsBytes,
					   &yaffs_noeccinfo);
	} else {
		if (data)
			retval =
			    mtd->write(mtd, addr, dev->nDataBytesPerChunk, &dummy,
				       data);
		if (spare)
			retval =
			    mtd->write_oob(mtd, addr, YAFFS_BYTES_PER_SPARE,
					   &dummy, spareAsBytes);
	}
#endif

	if (retval == 0)
		return YAFFS_OK;
	else
		return YAFFS_FAIL;
}

int nandmtd_ReadChunkFromNAND(yaffs_Device * dev, int chunkInNAND, __u8 * data,
			      yaffs_Spare * spare)
{
	struct mtd_info *mtd = (struct mtd_info *)(dev->genericDevice);
#if (LINUX_VERSION_CODE > KERNEL_VERSION(2,6,17))
	struct mtd_oob_ops ops;
#endif
	size_t dummy;
	int retval = 0;

	loff_t addr = ((loff_t) chunkInNAND) * dev->nDataBytesPerChunk;
#if (LINUX_VERSION_CODE > KERNEL_VERSION(2,6,17))
	__u8 spareAsBytes[8]; /* OOB */

	if (data && !spare)
		retval = mtd->read(mtd, addr, dev->nDataBytesPerChunk,
				&dummy, data);
	else if (spare) {
		if (dev->useNANDECC) {
			ops.mode = MTD_OOB_AUTO;
			ops.ooblen = 8; /* temp hack */
		} else {
			ops.mode = MTD_OOB_RAW;
			ops.ooblen = YAFFS_BYTES_PER_SPARE;
		}
		ops.len = data ? dev->nDataBytesPerChunk : ops.ooblen;
		ops.datbuf = data;
		ops.ooboffs = 0;
		ops.oobbuf = spareAsBytes;
		retval = mtd->read_oob(mtd, addr, &ops);
		if (dev->useNANDECC)
			translate_oob2spare(spare, spareAsBytes);
	}
#elif defined( CONFIG_MTD_BRCMNAND )
	__u8 oob[YAFFS_BYTES_PER_SPARE];

	if (data && spare) {
	
if (gdebug) 
	printk("%s: Caling read_ecc\n", __FUNCTION__);
			retval =
			    mtd->read_ecc(mtd, addr, dev->nDataBytesPerChunk,
					  &dummy, data, oob, &yaffs1_oobinfo);
if (gdebug) 
	print_oobbuf(oob, 16);
	} else {
		if (data) {
			retval =
			    mtd->read(mtd, addr, dev->nDataBytesPerChunk, &dummy,
				      data);
		}
		if (spare) {
if (gdebug) 
printk("%s: Caling read_oob(%08x)\n", __FUNCTION__, (unsigned int) addr);
			retval =
			    mtd->read_oob(mtd, addr, YAFFS_BYTES_PER_SPARE,
					  &dummy, oob);
if (gdebug) 
	{printk("Afrer read_oob:\n"); print_oobbuf(oob, 16);}
		}
	}
	if (spare)
		translate_oob2spare(spare,oob);
#else
	__u8 *spareAsBytes = (__u8 *) spare;

	if (data && spare) {
		if (dev->useNANDECC) {	
			/* Careful, this call adds 2 ints */
			/* to the end of the spare data.  Calling function */
			/* should allocate enough memory for spare, */
			/* i.e. [YAFFS_BYTES_PER_SPARE+2*sizeof(int)]. */
			retval =
			    mtd->read_ecc(mtd, addr, dev->nDataBytesPerChunk,
					  &dummy, data, spareAsBytes,
					  &yaffs_oobinfo);
		} else {
			retval =
			    mtd->read_ecc(mtd, addr, dev->nDataBytesPerChunk,
					  &dummy, data, spareAsBytes,
					  &yaffs_noeccinfo);
		}
	} else {
		if (data)
			retval =
			    mtd->read(mtd, addr, dev->nDataBytesPerChunk, &dummy,
				      data);
		if (spare)
			retval =
			    mtd->read_oob(mtd, addr, YAFFS_BYTES_PER_SPARE,
					  &dummy, spareAsBytes);
	}
#endif

	if (retval == 0)
		return YAFFS_OK;
	else
		return YAFFS_FAIL;
}

int nandmtd_EraseBlockInNAND(yaffs_Device * dev, int blockNumber)
{
	struct mtd_info *mtd = (struct mtd_info *)(dev->genericDevice);
	__u32 addr =
	    ((loff_t) blockNumber) * dev->nDataBytesPerChunk
		* dev->nChunksPerBlock;
	struct erase_info ei;
	int retval = 0;

	ei.mtd = mtd;
	ei.addr = addr;
	ei.len = dev->nDataBytesPerChunk * dev->nChunksPerBlock;
	ei.time = 1000;
	ei.retries = 2;
	ei.callback = NULL;
	ei.priv = (u_long) dev;

	/* Todo finish off the ei if required */

	sema_init(&dev->sem, 0);

	retval = mtd->erase(mtd, &ei);

	if (retval == 0)
		return YAFFS_OK;
	else
		return YAFFS_FAIL;
}

int nandmtd_InitialiseNAND(yaffs_Device * dev)
{
	return YAFFS_OK;
}

