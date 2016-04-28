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
 * Date:           Generated on         Fri Mar 20 13:00:15 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_fmisc.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 8:16p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_FMISC_H__
#define BCHP_FMISC_H__

/***************************************************************************
 *FMISC - BVN Front Control Registers
 ***************************************************************************/
#define BCHP_FMISC_SOFT_RESET                    0x00104000 /* BVN Front Soft Reset */
#define BCHP_FMISC_TEST_PORT_SEL                 0x00104004 /* BVN Front Test Port Select */
#define BCHP_FMISC_TEST_PORT_DATA                0x00104008 /* BVN Front Test Port Status */
#define BCHP_FMISC_BVNF_VFD0_MBIST_TM_CTRL       0x0010400c /* BVN Front VFD0 0-1 MBIST TM Control */
#define BCHP_FMISC_BVNF_VFD1_MBIST_TM_CTRL       0x00104010 /* BVN Front VFD1 0-1 MBIST TM Control */
#define BCHP_FMISC_BVN_MFD0_MBIST_TM_CTRL        0x00104014 /* BVN Front MFD0 MBIST TM Control */
#define BCHP_FMISC_BVNF_CLOCK_CTRL               0x00104018 /* BVN Front clock control register */
#define BCHP_FMISC_SCRATCH_0                     0x00104020 /* Scratch Register */

/***************************************************************************
 *SOFT_RESET - BVN Front Soft Reset
 ***************************************************************************/
/* FMISC :: SOFT_RESET :: reserved0 [31:25] */
#define BCHP_FMISC_SOFT_RESET_reserved0_MASK                       0xfe000000
#define BCHP_FMISC_SOFT_RESET_reserved0_SHIFT                      25

/* FMISC :: SOFT_RESET :: RDC [24:24] */
#define BCHP_FMISC_SOFT_RESET_RDC_MASK                             0x01000000
#define BCHP_FMISC_SOFT_RESET_RDC_SHIFT                            24

/* FMISC :: SOFT_RESET :: reserved1 [23:06] */
#define BCHP_FMISC_SOFT_RESET_reserved1_MASK                       0x00ffffc0
#define BCHP_FMISC_SOFT_RESET_reserved1_SHIFT                      6

/* FMISC :: SOFT_RESET :: VFD_1 [05:05] */
#define BCHP_FMISC_SOFT_RESET_VFD_1_MASK                           0x00000020
#define BCHP_FMISC_SOFT_RESET_VFD_1_SHIFT                          5

/* FMISC :: SOFT_RESET :: VFD_0 [04:04] */
#define BCHP_FMISC_SOFT_RESET_VFD_0_MASK                           0x00000010
#define BCHP_FMISC_SOFT_RESET_VFD_0_SHIFT                          4

/* FMISC :: SOFT_RESET :: reserved2 [03:01] */
#define BCHP_FMISC_SOFT_RESET_reserved2_MASK                       0x0000000e
#define BCHP_FMISC_SOFT_RESET_reserved2_SHIFT                      1

/* FMISC :: SOFT_RESET :: MFD_0 [00:00] */
#define BCHP_FMISC_SOFT_RESET_MFD_0_MASK                           0x00000001
#define BCHP_FMISC_SOFT_RESET_MFD_0_SHIFT                          0

/***************************************************************************
 *TEST_PORT_SEL - BVN Front Test Port Select
 ***************************************************************************/
/* FMISC :: TEST_PORT_SEL :: reserved0 [31:01] */
#define BCHP_FMISC_TEST_PORT_SEL_reserved0_MASK                    0xfffffffe
#define BCHP_FMISC_TEST_PORT_SEL_reserved0_SHIFT                   1

/* FMISC :: TEST_PORT_SEL :: TEST_PORT_SEL [00:00] */
#define BCHP_FMISC_TEST_PORT_SEL_TEST_PORT_SEL_MASK                0x00000001
#define BCHP_FMISC_TEST_PORT_SEL_TEST_PORT_SEL_SHIFT               0
#define BCHP_FMISC_TEST_PORT_SEL_TEST_PORT_SEL_TP_OUT_1            1
#define BCHP_FMISC_TEST_PORT_SEL_TEST_PORT_SEL_TP_OUT_0            0

/***************************************************************************
 *TEST_PORT_DATA - BVN Front Test Port Status
 ***************************************************************************/
/* FMISC :: TEST_PORT_DATA :: TEST_PORT_DATA [31:00] */
#define BCHP_FMISC_TEST_PORT_DATA_TEST_PORT_DATA_MASK              0xffffffff
#define BCHP_FMISC_TEST_PORT_DATA_TEST_PORT_DATA_SHIFT             0

/***************************************************************************
 *BVNF_VFD0_MBIST_TM_CTRL - BVN Front VFD0 0-1 MBIST TM Control
 ***************************************************************************/
/* FMISC :: BVNF_VFD0_MBIST_TM_CTRL :: reserved0 [31:04] */
#define BCHP_FMISC_BVNF_VFD0_MBIST_TM_CTRL_reserved0_MASK          0xfffffff0
#define BCHP_FMISC_BVNF_VFD0_MBIST_TM_CTRL_reserved0_SHIFT         4

/* FMISC :: BVNF_VFD0_MBIST_TM_CTRL :: VFD_MBIST_TM_1 [03:02] */
#define BCHP_FMISC_BVNF_VFD0_MBIST_TM_CTRL_VFD_MBIST_TM_1_MASK     0x0000000c
#define BCHP_FMISC_BVNF_VFD0_MBIST_TM_CTRL_VFD_MBIST_TM_1_SHIFT    2

/* FMISC :: BVNF_VFD0_MBIST_TM_CTRL :: VFD_MBIST_TM_0 [01:00] */
#define BCHP_FMISC_BVNF_VFD0_MBIST_TM_CTRL_VFD_MBIST_TM_0_MASK     0x00000003
#define BCHP_FMISC_BVNF_VFD0_MBIST_TM_CTRL_VFD_MBIST_TM_0_SHIFT    0

/***************************************************************************
 *BVNF_VFD1_MBIST_TM_CTRL - BVN Front VFD1 0-1 MBIST TM Control
 ***************************************************************************/
/* FMISC :: BVNF_VFD1_MBIST_TM_CTRL :: reserved0 [31:04] */
#define BCHP_FMISC_BVNF_VFD1_MBIST_TM_CTRL_reserved0_MASK          0xfffffff0
#define BCHP_FMISC_BVNF_VFD1_MBIST_TM_CTRL_reserved0_SHIFT         4

/* FMISC :: BVNF_VFD1_MBIST_TM_CTRL :: VFD_MBIST_TM_1 [03:02] */
#define BCHP_FMISC_BVNF_VFD1_MBIST_TM_CTRL_VFD_MBIST_TM_1_MASK     0x0000000c
#define BCHP_FMISC_BVNF_VFD1_MBIST_TM_CTRL_VFD_MBIST_TM_1_SHIFT    2

/* FMISC :: BVNF_VFD1_MBIST_TM_CTRL :: VFD_MBIST_TM_0 [01:00] */
#define BCHP_FMISC_BVNF_VFD1_MBIST_TM_CTRL_VFD_MBIST_TM_0_MASK     0x00000003
#define BCHP_FMISC_BVNF_VFD1_MBIST_TM_CTRL_VFD_MBIST_TM_0_SHIFT    0

/***************************************************************************
 *BVN_MFD0_MBIST_TM_CTRL - BVN Front MFD0 MBIST TM Control
 ***************************************************************************/
/* FMISC :: BVN_MFD0_MBIST_TM_CTRL :: reserved0 [31:12] */
#define BCHP_FMISC_BVN_MFD0_MBIST_TM_CTRL_reserved0_MASK           0xfffff000
#define BCHP_FMISC_BVN_MFD0_MBIST_TM_CTRL_reserved0_SHIFT          12

/* FMISC :: BVN_MFD0_MBIST_TM_CTRL :: MFD0_SCB_BUF_1 [11:10] */
#define BCHP_FMISC_BVN_MFD0_MBIST_TM_CTRL_MFD0_SCB_BUF_1_MASK      0x00000c00
#define BCHP_FMISC_BVN_MFD0_MBIST_TM_CTRL_MFD0_SCB_BUF_1_SHIFT     10

/* FMISC :: BVN_MFD0_MBIST_TM_CTRL :: MFD0_SCB_BUF_0 [09:08] */
#define BCHP_FMISC_BVN_MFD0_MBIST_TM_CTRL_MFD0_SCB_BUF_0_MASK      0x00000300
#define BCHP_FMISC_BVN_MFD0_MBIST_TM_CTRL_MFD0_SCB_BUF_0_SHIFT     8

/* FMISC :: BVN_MFD0_MBIST_TM_CTRL :: MFD0_CLB [07:00] */
#define BCHP_FMISC_BVN_MFD0_MBIST_TM_CTRL_MFD0_CLB_MASK            0x000000ff
#define BCHP_FMISC_BVN_MFD0_MBIST_TM_CTRL_MFD0_CLB_SHIFT           0

/***************************************************************************
 *BVNF_CLOCK_CTRL - BVN Front clock control register
 ***************************************************************************/
/* FMISC :: BVNF_CLOCK_CTRL :: reserved0 [31:01] */
#define BCHP_FMISC_BVNF_CLOCK_CTRL_reserved0_MASK                  0xfffffffe
#define BCHP_FMISC_BVNF_CLOCK_CTRL_reserved0_SHIFT                 1

/* FMISC :: BVNF_CLOCK_CTRL :: CLK_FREE_RUN_MODE [00:00] */
#define BCHP_FMISC_BVNF_CLOCK_CTRL_CLK_FREE_RUN_MODE_MASK          0x00000001
#define BCHP_FMISC_BVNF_CLOCK_CTRL_CLK_FREE_RUN_MODE_SHIFT         0

/***************************************************************************
 *SCRATCH_0 - Scratch Register
 ***************************************************************************/
/* FMISC :: SCRATCH_0 :: VALUE [31:00] */
#define BCHP_FMISC_SCRATCH_0_VALUE_MASK                            0xffffffff
#define BCHP_FMISC_SCRATCH_0_VALUE_SHIFT                           0

#endif /* #ifndef BCHP_FMISC_H__ */

/* End of File */