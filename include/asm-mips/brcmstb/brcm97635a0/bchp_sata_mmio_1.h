/***************************************************************************
 *     Copyright (c) 1999-2008, Broadcom Corporation
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
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Tue Dec  2 13:59:54 2008
 *                 MD5 Checksum         90975bbcdf76045bb6bd092e6bdf481b
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7635/rdb/a0/bchp_sata_mmio_1.h $
 * 
 * Hydra_Software_Devel/1   12/2/08 7:28p albertl
 * PR48688: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_SATA_MMIO_1_H__
#define BCHP_SATA_MMIO_1_H__

/***************************************************************************
 *SATA_MMIO_1 - MMI/O Address mapping 1
 ***************************************************************************/
#define BCHP_SATA_MMIO_1_SATA_STATUS             0x005a0440 /* SATA Status Register(SCR0) */
#define BCHP_SATA_MMIO_1_SATA_ERROR              0x005a0444 /* SATA Error Register(SCR1) */
#define BCHP_SATA_MMIO_1_SATA_CONTROL            0x005a0448 /* SATA Control Register(SCR2) */
#define BCHP_SATA_MMIO_1_SATA_CONTROL1           0x005a0480 /* SATA Internal Control 1(FIFO Control) */
#define BCHP_SATA_MMIO_1_SATA_CONTROL2           0x005a0484 /* SATA Internal Control 2 (Debug Control) */
#define BCHP_SATA_MMIO_1_SATA_MASK               0x005a0488 /* SerialATA Interrupt Mask Register(SIMR) */
#define BCHP_SATA_MMIO_1_SATA_MDIO               0x005a048c /* SATA MDIO Access Register */
#define BCHP_SATA_MMIO_1_SATA_BIST               0x005a0490 /* SerialATA BIST FIS Control Register(SBCR) */

#endif /* #ifndef BCHP_SATA_MMIO_1_H__ */

/* End of File */