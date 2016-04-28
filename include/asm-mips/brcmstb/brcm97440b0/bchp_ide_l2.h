/***************************************************************************
 *     Copyright (c) 1999-2006, Broadcom Corporation
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
 * $brcm_Workfile: bchp_ide_l2.h $
 * $brcm_Revision: Hydra_Software_Devel/2 $
 * $brcm_Date: 4/19/06 11:19a $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Mon Apr 17 15:57:22 2006
 *                 MD5 Checksum         91b8f8aff007e19e2e6981e74310b12e
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.006
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7440/rdb/a0/bchp_ide_l2.h $
 * 
 * Hydra_Software_Devel/2   4/19/06 11:19a jasonh
 * PR 20907: RDB update.
 *
 ***************************************************************************/

#ifndef BCHP_IDE_L2_H__
#define BCHP_IDE_L2_H__

/***************************************************************************
 *IDE_L2 - IDE Level 2 Interrupt Controller Registers
 ***************************************************************************/
#define BCHP_IDE_L2_CPU_STATUS                   0x01710000 /* CPU interrupt Status Register */
#define BCHP_IDE_L2_CPU_SET                      0x01710004 /* CPU interrupt Set Register */
#define BCHP_IDE_L2_CPU_CLEAR                    0x01710008 /* CPU interrupt Clear Register */
#define BCHP_IDE_L2_CPU_MASK_STATUS              0x0171000c /* CPU interrupt Mask Status Register */
#define BCHP_IDE_L2_CPU_MASK_SET                 0x01710010 /* CPU interrupt Mask Set Register */
#define BCHP_IDE_L2_CPU_MASK_CLEAR               0x01710014 /* CPU interrupt Mask Clear Register */
#define BCHP_IDE_L2_PCI_STATUS                   0x01710018 /* PCI interrupt Status Register */
#define BCHP_IDE_L2_PCI_SET                      0x0171001c /* PCI interrupt Set Register */
#define BCHP_IDE_L2_PCI_CLEAR                    0x01710020 /* PCI interrupt Clear Register */
#define BCHP_IDE_L2_PCI_MASK_STATUS              0x01710024 /* PCI interrupt Mask Status Register */
#define BCHP_IDE_L2_PCI_MASK_SET                 0x01710028 /* PCI interrupt Mask Set Register */
#define BCHP_IDE_L2_PCI_MASK_CLEAR               0x0171002c /* PCI interrupt Mask Clear Register */

/***************************************************************************
 *CPU_STATUS - CPU interrupt Status Register
 ***************************************************************************/
/* IDE_L2 :: CPU_STATUS :: GR_BRIDGE_ERROR [31:31] */
#define BCHP_IDE_L2_CPU_STATUS_GR_BRIDGE_ERROR_MASK                0x80000000
#define BCHP_IDE_L2_CPU_STATUS_GR_BRIDGE_ERROR_SHIFT               31

/* IDE_L2 :: CPU_STATUS :: reserved0 [30:01] */
#define BCHP_IDE_L2_CPU_STATUS_reserved0_MASK                      0x7ffffffe
#define BCHP_IDE_L2_CPU_STATUS_reserved0_SHIFT                     1

/* IDE_L2 :: CPU_STATUS :: IDE_PRI_INT [00:00] */
#define BCHP_IDE_L2_CPU_STATUS_IDE_PRI_INT_MASK                    0x00000001
#define BCHP_IDE_L2_CPU_STATUS_IDE_PRI_INT_SHIFT                   0

/***************************************************************************
 *CPU_SET - CPU interrupt Set Register
 ***************************************************************************/
/* IDE_L2 :: CPU_SET :: GR_BRIDGE_ERROR [31:31] */
#define BCHP_IDE_L2_CPU_SET_GR_BRIDGE_ERROR_MASK                   0x80000000
#define BCHP_IDE_L2_CPU_SET_GR_BRIDGE_ERROR_SHIFT                  31

/* IDE_L2 :: CPU_SET :: reserved0 [30:01] */
#define BCHP_IDE_L2_CPU_SET_reserved0_MASK                         0x7ffffffe
#define BCHP_IDE_L2_CPU_SET_reserved0_SHIFT                        1

/* IDE_L2 :: CPU_SET :: IDE_PRI_INT [00:00] */
#define BCHP_IDE_L2_CPU_SET_IDE_PRI_INT_MASK                       0x00000001
#define BCHP_IDE_L2_CPU_SET_IDE_PRI_INT_SHIFT                      0

/***************************************************************************
 *CPU_CLEAR - CPU interrupt Clear Register
 ***************************************************************************/
/* IDE_L2 :: CPU_CLEAR :: GR_BRIDGE_ERROR [31:31] */
#define BCHP_IDE_L2_CPU_CLEAR_GR_BRIDGE_ERROR_MASK                 0x80000000
#define BCHP_IDE_L2_CPU_CLEAR_GR_BRIDGE_ERROR_SHIFT                31

/* IDE_L2 :: CPU_CLEAR :: reserved0 [30:01] */
#define BCHP_IDE_L2_CPU_CLEAR_reserved0_MASK                       0x7ffffffe
#define BCHP_IDE_L2_CPU_CLEAR_reserved0_SHIFT                      1

/* IDE_L2 :: CPU_CLEAR :: IDE_PRI_INT [00:00] */
#define BCHP_IDE_L2_CPU_CLEAR_IDE_PRI_INT_MASK                     0x00000001
#define BCHP_IDE_L2_CPU_CLEAR_IDE_PRI_INT_SHIFT                    0

/***************************************************************************
 *CPU_MASK_STATUS - CPU interrupt Mask Status Register
 ***************************************************************************/
/* IDE_L2 :: CPU_MASK_STATUS :: GR_BRIDGE_ERROR [31:31] */
#define BCHP_IDE_L2_CPU_MASK_STATUS_GR_BRIDGE_ERROR_MASK           0x80000000
#define BCHP_IDE_L2_CPU_MASK_STATUS_GR_BRIDGE_ERROR_SHIFT          31

/* IDE_L2 :: CPU_MASK_STATUS :: reserved0 [30:01] */
#define BCHP_IDE_L2_CPU_MASK_STATUS_reserved0_MASK                 0x7ffffffe
#define BCHP_IDE_L2_CPU_MASK_STATUS_reserved0_SHIFT                1

/* IDE_L2 :: CPU_MASK_STATUS :: IDE_PRI_INT [00:00] */
#define BCHP_IDE_L2_CPU_MASK_STATUS_IDE_PRI_INT_MASK               0x00000001
#define BCHP_IDE_L2_CPU_MASK_STATUS_IDE_PRI_INT_SHIFT              0

/***************************************************************************
 *CPU_MASK_SET - CPU interrupt Mask Set Register
 ***************************************************************************/
/* IDE_L2 :: CPU_MASK_SET :: GR_BRIDGE_ERROR [31:31] */
#define BCHP_IDE_L2_CPU_MASK_SET_GR_BRIDGE_ERROR_MASK              0x80000000
#define BCHP_IDE_L2_CPU_MASK_SET_GR_BRIDGE_ERROR_SHIFT             31

/* IDE_L2 :: CPU_MASK_SET :: reserved0 [30:01] */
#define BCHP_IDE_L2_CPU_MASK_SET_reserved0_MASK                    0x7ffffffe
#define BCHP_IDE_L2_CPU_MASK_SET_reserved0_SHIFT                   1

/* IDE_L2 :: CPU_MASK_SET :: IDE_PRI_INT [00:00] */
#define BCHP_IDE_L2_CPU_MASK_SET_IDE_PRI_INT_MASK                  0x00000001
#define BCHP_IDE_L2_CPU_MASK_SET_IDE_PRI_INT_SHIFT                 0

/***************************************************************************
 *CPU_MASK_CLEAR - CPU interrupt Mask Clear Register
 ***************************************************************************/
/* IDE_L2 :: CPU_MASK_CLEAR :: GR_BRIDGE_ERROR [31:31] */
#define BCHP_IDE_L2_CPU_MASK_CLEAR_GR_BRIDGE_ERROR_MASK            0x80000000
#define BCHP_IDE_L2_CPU_MASK_CLEAR_GR_BRIDGE_ERROR_SHIFT           31

/* IDE_L2 :: CPU_MASK_CLEAR :: reserved0 [30:01] */
#define BCHP_IDE_L2_CPU_MASK_CLEAR_reserved0_MASK                  0x7ffffffe
#define BCHP_IDE_L2_CPU_MASK_CLEAR_reserved0_SHIFT                 1

/* IDE_L2 :: CPU_MASK_CLEAR :: IDE_PRI_INT [00:00] */
#define BCHP_IDE_L2_CPU_MASK_CLEAR_IDE_PRI_INT_MASK                0x00000001
#define BCHP_IDE_L2_CPU_MASK_CLEAR_IDE_PRI_INT_SHIFT               0

/***************************************************************************
 *PCI_STATUS - PCI interrupt Status Register
 ***************************************************************************/
/* IDE_L2 :: PCI_STATUS :: GR_BRIDGE_ERROR [31:31] */
#define BCHP_IDE_L2_PCI_STATUS_GR_BRIDGE_ERROR_MASK                0x80000000
#define BCHP_IDE_L2_PCI_STATUS_GR_BRIDGE_ERROR_SHIFT               31

/* IDE_L2 :: PCI_STATUS :: reserved0 [30:01] */
#define BCHP_IDE_L2_PCI_STATUS_reserved0_MASK                      0x7ffffffe
#define BCHP_IDE_L2_PCI_STATUS_reserved0_SHIFT                     1

/* IDE_L2 :: PCI_STATUS :: IDE_PRI_INT [00:00] */
#define BCHP_IDE_L2_PCI_STATUS_IDE_PRI_INT_MASK                    0x00000001
#define BCHP_IDE_L2_PCI_STATUS_IDE_PRI_INT_SHIFT                   0

/***************************************************************************
 *PCI_SET - PCI interrupt Set Register
 ***************************************************************************/
/* IDE_L2 :: PCI_SET :: GR_BRIDGE_ERROR [31:31] */
#define BCHP_IDE_L2_PCI_SET_GR_BRIDGE_ERROR_MASK                   0x80000000
#define BCHP_IDE_L2_PCI_SET_GR_BRIDGE_ERROR_SHIFT                  31

/* IDE_L2 :: PCI_SET :: reserved0 [30:01] */
#define BCHP_IDE_L2_PCI_SET_reserved0_MASK                         0x7ffffffe
#define BCHP_IDE_L2_PCI_SET_reserved0_SHIFT                        1

/* IDE_L2 :: PCI_SET :: IDE_PRI_INT [00:00] */
#define BCHP_IDE_L2_PCI_SET_IDE_PRI_INT_MASK                       0x00000001
#define BCHP_IDE_L2_PCI_SET_IDE_PRI_INT_SHIFT                      0

/***************************************************************************
 *PCI_CLEAR - PCI interrupt Clear Register
 ***************************************************************************/
/* IDE_L2 :: PCI_CLEAR :: GR_BRIDGE_ERROR [31:31] */
#define BCHP_IDE_L2_PCI_CLEAR_GR_BRIDGE_ERROR_MASK                 0x80000000
#define BCHP_IDE_L2_PCI_CLEAR_GR_BRIDGE_ERROR_SHIFT                31

/* IDE_L2 :: PCI_CLEAR :: reserved0 [30:01] */
#define BCHP_IDE_L2_PCI_CLEAR_reserved0_MASK                       0x7ffffffe
#define BCHP_IDE_L2_PCI_CLEAR_reserved0_SHIFT                      1

/* IDE_L2 :: PCI_CLEAR :: IDE_PRI_INT [00:00] */
#define BCHP_IDE_L2_PCI_CLEAR_IDE_PRI_INT_MASK                     0x00000001
#define BCHP_IDE_L2_PCI_CLEAR_IDE_PRI_INT_SHIFT                    0

/***************************************************************************
 *PCI_MASK_STATUS - PCI interrupt Mask Status Register
 ***************************************************************************/
/* IDE_L2 :: PCI_MASK_STATUS :: GR_BRIDGE_ERROR [31:31] */
#define BCHP_IDE_L2_PCI_MASK_STATUS_GR_BRIDGE_ERROR_MASK           0x80000000
#define BCHP_IDE_L2_PCI_MASK_STATUS_GR_BRIDGE_ERROR_SHIFT          31

/* IDE_L2 :: PCI_MASK_STATUS :: reserved0 [30:01] */
#define BCHP_IDE_L2_PCI_MASK_STATUS_reserved0_MASK                 0x7ffffffe
#define BCHP_IDE_L2_PCI_MASK_STATUS_reserved0_SHIFT                1

/* IDE_L2 :: PCI_MASK_STATUS :: IDE_PRI_INT [00:00] */
#define BCHP_IDE_L2_PCI_MASK_STATUS_IDE_PRI_INT_MASK               0x00000001
#define BCHP_IDE_L2_PCI_MASK_STATUS_IDE_PRI_INT_SHIFT              0

/***************************************************************************
 *PCI_MASK_SET - PCI interrupt Mask Set Register
 ***************************************************************************/
/* IDE_L2 :: PCI_MASK_SET :: GR_BRIDGE_ERROR [31:31] */
#define BCHP_IDE_L2_PCI_MASK_SET_GR_BRIDGE_ERROR_MASK              0x80000000
#define BCHP_IDE_L2_PCI_MASK_SET_GR_BRIDGE_ERROR_SHIFT             31

/* IDE_L2 :: PCI_MASK_SET :: reserved0 [30:01] */
#define BCHP_IDE_L2_PCI_MASK_SET_reserved0_MASK                    0x7ffffffe
#define BCHP_IDE_L2_PCI_MASK_SET_reserved0_SHIFT                   1

/* IDE_L2 :: PCI_MASK_SET :: IDE_PRI_INT [00:00] */
#define BCHP_IDE_L2_PCI_MASK_SET_IDE_PRI_INT_MASK                  0x00000001
#define BCHP_IDE_L2_PCI_MASK_SET_IDE_PRI_INT_SHIFT                 0

/***************************************************************************
 *PCI_MASK_CLEAR - PCI interrupt Mask Clear Register
 ***************************************************************************/
/* IDE_L2 :: PCI_MASK_CLEAR :: GR_BRIDGE_ERROR [31:31] */
#define BCHP_IDE_L2_PCI_MASK_CLEAR_GR_BRIDGE_ERROR_MASK            0x80000000
#define BCHP_IDE_L2_PCI_MASK_CLEAR_GR_BRIDGE_ERROR_SHIFT           31

/* IDE_L2 :: PCI_MASK_CLEAR :: reserved0 [30:01] */
#define BCHP_IDE_L2_PCI_MASK_CLEAR_reserved0_MASK                  0x7ffffffe
#define BCHP_IDE_L2_PCI_MASK_CLEAR_reserved0_SHIFT                 1

/* IDE_L2 :: PCI_MASK_CLEAR :: IDE_PRI_INT [00:00] */
#define BCHP_IDE_L2_PCI_MASK_CLEAR_IDE_PRI_INT_MASK                0x00000001
#define BCHP_IDE_L2_PCI_MASK_CLEAR_IDE_PRI_INT_SHIFT               0

#endif /* #ifndef BCHP_IDE_L2_H__ */

/* End of File */
