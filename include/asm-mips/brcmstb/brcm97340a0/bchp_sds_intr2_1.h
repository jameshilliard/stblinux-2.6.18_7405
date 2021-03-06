/***************************************************************************
 *     Copyright (c) 1999-2009, Broadcom Corporation
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
 * Date:           Generated on         Fri Mar 20 13:05:08 2009
 *                 MD5 Checksum         4f0509cfa0b8fc4589050694b4a3e234
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_sds_intr2_1.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 9:07p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_SDS_INTR2_1_H__
#define BCHP_SDS_INTR2_1_H__

/***************************************************************************
 *SDS_INTR2_1 - SDS L2 Interrupt Control Registers set 1
 ***************************************************************************/
#define BCHP_SDS_INTR2_1_CPU_STATUS              0x01100d00 /* CPU interrupt Status Register */
#define BCHP_SDS_INTR2_1_CPU_SET                 0x01100d04 /* CPU interrupt Set Register */
#define BCHP_SDS_INTR2_1_CPU_CLEAR               0x01100d08 /* CPU interrupt Clear Register */
#define BCHP_SDS_INTR2_1_CPU_MASK_STATUS         0x01100d0c /* CPU interrupt Mask Status Register */
#define BCHP_SDS_INTR2_1_CPU_MASK_SET            0x01100d10 /* CPU interrupt Mask Set Register */
#define BCHP_SDS_INTR2_1_CPU_MASK_CLEAR          0x01100d14 /* CPU interrupt Mask Clear Register */
#define BCHP_SDS_INTR2_1_PCI_STATUS              0x01100d18 /* PCI interrupt Status Register */
#define BCHP_SDS_INTR2_1_PCI_SET                 0x01100d1c /* PCI interrupt Set Register */
#define BCHP_SDS_INTR2_1_PCI_CLEAR               0x01100d20 /* PCI interrupt Clear Register */
#define BCHP_SDS_INTR2_1_PCI_MASK_STATUS         0x01100d24 /* PCI interrupt Mask Status Register */
#define BCHP_SDS_INTR2_1_PCI_MASK_SET            0x01100d28 /* PCI interrupt Mask Set Register */
#define BCHP_SDS_INTR2_1_PCI_MASK_CLEAR          0x01100d2c /* PCI interrupt Mask Clear Register */

/***************************************************************************
 *CPU_STATUS - CPU interrupt Status Register
 ***************************************************************************/
/* SDS_INTR2_1 :: CPU_STATUS :: reserved0 [31:16] */
#define BCHP_SDS_INTR2_1_CPU_STATUS_reserved0_MASK                 0xffff0000
#define BCHP_SDS_INTR2_1_CPU_STATUS_reserved0_SHIFT                16

/* SDS_INTR2_1 :: CPU_STATUS :: status [15:00] */
#define BCHP_SDS_INTR2_1_CPU_STATUS_status_MASK                    0x0000ffff
#define BCHP_SDS_INTR2_1_CPU_STATUS_status_SHIFT                   0

/***************************************************************************
 *CPU_SET - CPU interrupt Set Register
 ***************************************************************************/
/* SDS_INTR2_1 :: CPU_SET :: reserved0 [31:16] */
#define BCHP_SDS_INTR2_1_CPU_SET_reserved0_MASK                    0xffff0000
#define BCHP_SDS_INTR2_1_CPU_SET_reserved0_SHIFT                   16

/* SDS_INTR2_1 :: CPU_SET :: status [15:00] */
#define BCHP_SDS_INTR2_1_CPU_SET_status_MASK                       0x0000ffff
#define BCHP_SDS_INTR2_1_CPU_SET_status_SHIFT                      0

/***************************************************************************
 *CPU_CLEAR - CPU interrupt Clear Register
 ***************************************************************************/
/* SDS_INTR2_1 :: CPU_CLEAR :: reserved0 [31:16] */
#define BCHP_SDS_INTR2_1_CPU_CLEAR_reserved0_MASK                  0xffff0000
#define BCHP_SDS_INTR2_1_CPU_CLEAR_reserved0_SHIFT                 16

/* SDS_INTR2_1 :: CPU_CLEAR :: status [15:00] */
#define BCHP_SDS_INTR2_1_CPU_CLEAR_status_MASK                     0x0000ffff
#define BCHP_SDS_INTR2_1_CPU_CLEAR_status_SHIFT                    0

/***************************************************************************
 *CPU_MASK_STATUS - CPU interrupt Mask Status Register
 ***************************************************************************/
/* SDS_INTR2_1 :: CPU_MASK_STATUS :: reserved0 [31:16] */
#define BCHP_SDS_INTR2_1_CPU_MASK_STATUS_reserved0_MASK            0xffff0000
#define BCHP_SDS_INTR2_1_CPU_MASK_STATUS_reserved0_SHIFT           16

/* SDS_INTR2_1 :: CPU_MASK_STATUS :: mask [15:00] */
#define BCHP_SDS_INTR2_1_CPU_MASK_STATUS_mask_MASK                 0x0000ffff
#define BCHP_SDS_INTR2_1_CPU_MASK_STATUS_mask_SHIFT                0

/***************************************************************************
 *CPU_MASK_SET - CPU interrupt Mask Set Register
 ***************************************************************************/
/* SDS_INTR2_1 :: CPU_MASK_SET :: reserved0 [31:16] */
#define BCHP_SDS_INTR2_1_CPU_MASK_SET_reserved0_MASK               0xffff0000
#define BCHP_SDS_INTR2_1_CPU_MASK_SET_reserved0_SHIFT              16

/* SDS_INTR2_1 :: CPU_MASK_SET :: mask [15:00] */
#define BCHP_SDS_INTR2_1_CPU_MASK_SET_mask_MASK                    0x0000ffff
#define BCHP_SDS_INTR2_1_CPU_MASK_SET_mask_SHIFT                   0

/***************************************************************************
 *CPU_MASK_CLEAR - CPU interrupt Mask Clear Register
 ***************************************************************************/
/* SDS_INTR2_1 :: CPU_MASK_CLEAR :: reserved0 [31:16] */
#define BCHP_SDS_INTR2_1_CPU_MASK_CLEAR_reserved0_MASK             0xffff0000
#define BCHP_SDS_INTR2_1_CPU_MASK_CLEAR_reserved0_SHIFT            16

/* SDS_INTR2_1 :: CPU_MASK_CLEAR :: mask [15:00] */
#define BCHP_SDS_INTR2_1_CPU_MASK_CLEAR_mask_MASK                  0x0000ffff
#define BCHP_SDS_INTR2_1_CPU_MASK_CLEAR_mask_SHIFT                 0

/***************************************************************************
 *PCI_STATUS - PCI interrupt Status Register
 ***************************************************************************/
/* SDS_INTR2_1 :: PCI_STATUS :: reserved0 [31:16] */
#define BCHP_SDS_INTR2_1_PCI_STATUS_reserved0_MASK                 0xffff0000
#define BCHP_SDS_INTR2_1_PCI_STATUS_reserved0_SHIFT                16

/* SDS_INTR2_1 :: PCI_STATUS :: status [15:00] */
#define BCHP_SDS_INTR2_1_PCI_STATUS_status_MASK                    0x0000ffff
#define BCHP_SDS_INTR2_1_PCI_STATUS_status_SHIFT                   0

/***************************************************************************
 *PCI_SET - PCI interrupt Set Register
 ***************************************************************************/
/* SDS_INTR2_1 :: PCI_SET :: reserved0 [31:16] */
#define BCHP_SDS_INTR2_1_PCI_SET_reserved0_MASK                    0xffff0000
#define BCHP_SDS_INTR2_1_PCI_SET_reserved0_SHIFT                   16

/* SDS_INTR2_1 :: PCI_SET :: status [15:00] */
#define BCHP_SDS_INTR2_1_PCI_SET_status_MASK                       0x0000ffff
#define BCHP_SDS_INTR2_1_PCI_SET_status_SHIFT                      0

/***************************************************************************
 *PCI_CLEAR - PCI interrupt Clear Register
 ***************************************************************************/
/* SDS_INTR2_1 :: PCI_CLEAR :: reserved0 [31:16] */
#define BCHP_SDS_INTR2_1_PCI_CLEAR_reserved0_MASK                  0xffff0000
#define BCHP_SDS_INTR2_1_PCI_CLEAR_reserved0_SHIFT                 16

/* SDS_INTR2_1 :: PCI_CLEAR :: status [15:00] */
#define BCHP_SDS_INTR2_1_PCI_CLEAR_status_MASK                     0x0000ffff
#define BCHP_SDS_INTR2_1_PCI_CLEAR_status_SHIFT                    0

/***************************************************************************
 *PCI_MASK_STATUS - PCI interrupt Mask Status Register
 ***************************************************************************/
/* SDS_INTR2_1 :: PCI_MASK_STATUS :: reserved0 [31:16] */
#define BCHP_SDS_INTR2_1_PCI_MASK_STATUS_reserved0_MASK            0xffff0000
#define BCHP_SDS_INTR2_1_PCI_MASK_STATUS_reserved0_SHIFT           16

/* SDS_INTR2_1 :: PCI_MASK_STATUS :: mask [15:00] */
#define BCHP_SDS_INTR2_1_PCI_MASK_STATUS_mask_MASK                 0x0000ffff
#define BCHP_SDS_INTR2_1_PCI_MASK_STATUS_mask_SHIFT                0

/***************************************************************************
 *PCI_MASK_SET - PCI interrupt Mask Set Register
 ***************************************************************************/
/* SDS_INTR2_1 :: PCI_MASK_SET :: reserved0 [31:16] */
#define BCHP_SDS_INTR2_1_PCI_MASK_SET_reserved0_MASK               0xffff0000
#define BCHP_SDS_INTR2_1_PCI_MASK_SET_reserved0_SHIFT              16

/* SDS_INTR2_1 :: PCI_MASK_SET :: mask [15:00] */
#define BCHP_SDS_INTR2_1_PCI_MASK_SET_mask_MASK                    0x0000ffff
#define BCHP_SDS_INTR2_1_PCI_MASK_SET_mask_SHIFT                   0

/***************************************************************************
 *PCI_MASK_CLEAR - PCI interrupt Mask Clear Register
 ***************************************************************************/
/* SDS_INTR2_1 :: PCI_MASK_CLEAR :: reserved0 [31:16] */
#define BCHP_SDS_INTR2_1_PCI_MASK_CLEAR_reserved0_MASK             0xffff0000
#define BCHP_SDS_INTR2_1_PCI_MASK_CLEAR_reserved0_SHIFT            16

/* SDS_INTR2_1 :: PCI_MASK_CLEAR :: mask [15:00] */
#define BCHP_SDS_INTR2_1_PCI_MASK_CLEAR_mask_MASK                  0x0000ffff
#define BCHP_SDS_INTR2_1_PCI_MASK_CLEAR_mask_SHIFT                 0

#endif /* #ifndef BCHP_SDS_INTR2_1_H__ */

/* End of File */
