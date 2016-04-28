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
 * Date:           Generated on         Fri Mar 20 13:03:24 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_moca_mac_dma0.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 8:50p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_MOCA_MAC_DMA0_H__
#define BCHP_MOCA_MAC_DMA0_H__

/***************************************************************************
 *MOCA_MAC_DMA0 - Channel 0
 ***************************************************************************/
#define BCHP_MOCA_MAC_DMA0_CHDP                  0x00280000 /* Channel Descriptor Pointer */
#define BCHP_MOCA_MAC_DMA0_CHCTL                 0x00280004 /* Channel Control */
#define BCHP_MOCA_MAC_DMA0_CHST                  0x00280008 /* Channel Status */
#define BCHP_MOCA_MAC_DMA0_CHSRV                 0x0028000c /* Channel Descriptor in Service */

/***************************************************************************
 *CHDP - Channel Descriptor Pointer
 ***************************************************************************/
/* MOCA_MAC_DMA0 :: CHDP :: dptr [31:00] */
#define BCHP_MOCA_MAC_DMA0_CHDP_dptr_MASK                          0xffffffff
#define BCHP_MOCA_MAC_DMA0_CHDP_dptr_SHIFT                         0

/***************************************************************************
 *CHCTL - Channel Control
 ***************************************************************************/
/* MOCA_MAC_DMA0 :: CHCTL :: reserved0 [31:20] */
#define BCHP_MOCA_MAC_DMA0_CHCTL_reserved0_MASK                    0xfff00000
#define BCHP_MOCA_MAC_DMA0_CHCTL_reserved0_SHIFT                   20

/* MOCA_MAC_DMA0 :: CHCTL :: ie_cons [19:19] */
#define BCHP_MOCA_MAC_DMA0_CHCTL_ie_cons_MASK                      0x00080000
#define BCHP_MOCA_MAC_DMA0_CHCTL_ie_cons_SHIFT                     19

/* MOCA_MAC_DMA0 :: CHCTL :: ie_berr [18:18] */
#define BCHP_MOCA_MAC_DMA0_CHCTL_ie_berr_MASK                      0x00040000
#define BCHP_MOCA_MAC_DMA0_CHCTL_ie_berr_SHIFT                     18

/* MOCA_MAC_DMA0 :: CHCTL :: ie_null [17:17] */
#define BCHP_MOCA_MAC_DMA0_CHCTL_ie_null_MASK                      0x00020000
#define BCHP_MOCA_MAC_DMA0_CHCTL_ie_null_SHIFT                     17

/* MOCA_MAC_DMA0 :: CHCTL :: ie_last [16:16] */
#define BCHP_MOCA_MAC_DMA0_CHCTL_ie_last_MASK                      0x00010000
#define BCHP_MOCA_MAC_DMA0_CHCTL_ie_last_SHIFT                     16

/* MOCA_MAC_DMA0 :: CHCTL :: ie_user [15:15] */
#define BCHP_MOCA_MAC_DMA0_CHCTL_ie_user_MASK                      0x00008000
#define BCHP_MOCA_MAC_DMA0_CHCTL_ie_user_SHIFT                     15

/* MOCA_MAC_DMA0 :: CHCTL :: ie_udrn [14:14] */
#define BCHP_MOCA_MAC_DMA0_CHCTL_ie_udrn_MASK                      0x00004000
#define BCHP_MOCA_MAC_DMA0_CHCTL_ie_udrn_SHIFT                     14

/* MOCA_MAC_DMA0 :: CHCTL :: ie_ovrn [13:13] */
#define BCHP_MOCA_MAC_DMA0_CHCTL_ie_ovrn_MASK                      0x00002000
#define BCHP_MOCA_MAC_DMA0_CHCTL_ie_ovrn_SHIFT                     13

/* MOCA_MAC_DMA0 :: CHCTL :: ie_ddone [12:12] */
#define BCHP_MOCA_MAC_DMA0_CHCTL_ie_ddone_MASK                     0x00001000
#define BCHP_MOCA_MAC_DMA0_CHCTL_ie_ddone_SHIFT                    12

/* MOCA_MAC_DMA0 :: CHCTL :: reserved1 [11:09] */
#define BCHP_MOCA_MAC_DMA0_CHCTL_reserved1_MASK                    0x00000e00
#define BCHP_MOCA_MAC_DMA0_CHCTL_reserved1_SHIFT                   9

/* MOCA_MAC_DMA0 :: CHCTL :: dir [08:08] */
#define BCHP_MOCA_MAC_DMA0_CHCTL_dir_MASK                          0x00000100
#define BCHP_MOCA_MAC_DMA0_CHCTL_dir_SHIFT                         8

/* MOCA_MAC_DMA0 :: CHCTL :: reserved2 [07:06] */
#define BCHP_MOCA_MAC_DMA0_CHCTL_reserved2_MASK                    0x000000c0
#define BCHP_MOCA_MAC_DMA0_CHCTL_reserved2_SHIFT                   6

/* MOCA_MAC_DMA0 :: CHCTL :: bsize [05:04] */
#define BCHP_MOCA_MAC_DMA0_CHCTL_bsize_MASK                        0x00000030
#define BCHP_MOCA_MAC_DMA0_CHCTL_bsize_SHIFT                       4

/* MOCA_MAC_DMA0 :: CHCTL :: reserved3 [03:03] */
#define BCHP_MOCA_MAC_DMA0_CHCTL_reserved3_MASK                    0x00000008
#define BCHP_MOCA_MAC_DMA0_CHCTL_reserved3_SHIFT                   3

/* MOCA_MAC_DMA0 :: CHCTL :: gstop [02:02] */
#define BCHP_MOCA_MAC_DMA0_CHCTL_gstop_MASK                        0x00000004
#define BCHP_MOCA_MAC_DMA0_CHCTL_gstop_SHIFT                       2

/* MOCA_MAC_DMA0 :: CHCTL :: start [01:01] */
#define BCHP_MOCA_MAC_DMA0_CHCTL_start_MASK                        0x00000002
#define BCHP_MOCA_MAC_DMA0_CHCTL_start_SHIFT                       1

/* MOCA_MAC_DMA0 :: CHCTL :: enable [00:00] */
#define BCHP_MOCA_MAC_DMA0_CHCTL_enable_MASK                       0x00000001
#define BCHP_MOCA_MAC_DMA0_CHCTL_enable_SHIFT                      0

/***************************************************************************
 *CHST - Channel Status
 ***************************************************************************/
/* MOCA_MAC_DMA0 :: CHST :: fifo_av [31:24] */
#define BCHP_MOCA_MAC_DMA0_CHST_fifo_av_MASK                       0xff000000
#define BCHP_MOCA_MAC_DMA0_CHST_fifo_av_SHIFT                      24

/* MOCA_MAC_DMA0 :: CHST :: reserved0 [23:20] */
#define BCHP_MOCA_MAC_DMA0_CHST_reserved0_MASK                     0x00f00000
#define BCHP_MOCA_MAC_DMA0_CHST_reserved0_SHIFT                    20

/* MOCA_MAC_DMA0 :: CHST :: is_cons [19:19] */
#define BCHP_MOCA_MAC_DMA0_CHST_is_cons_MASK                       0x00080000
#define BCHP_MOCA_MAC_DMA0_CHST_is_cons_SHIFT                      19

/* MOCA_MAC_DMA0 :: CHST :: is_berr [18:18] */
#define BCHP_MOCA_MAC_DMA0_CHST_is_berr_MASK                       0x00040000
#define BCHP_MOCA_MAC_DMA0_CHST_is_berr_SHIFT                      18

/* MOCA_MAC_DMA0 :: CHST :: is_null [17:17] */
#define BCHP_MOCA_MAC_DMA0_CHST_is_null_MASK                       0x00020000
#define BCHP_MOCA_MAC_DMA0_CHST_is_null_SHIFT                      17

/* MOCA_MAC_DMA0 :: CHST :: is_last [16:16] */
#define BCHP_MOCA_MAC_DMA0_CHST_is_last_MASK                       0x00010000
#define BCHP_MOCA_MAC_DMA0_CHST_is_last_SHIFT                      16

/* MOCA_MAC_DMA0 :: CHST :: is_user [15:15] */
#define BCHP_MOCA_MAC_DMA0_CHST_is_user_MASK                       0x00008000
#define BCHP_MOCA_MAC_DMA0_CHST_is_user_SHIFT                      15

/* MOCA_MAC_DMA0 :: CHST :: is_udrn [14:14] */
#define BCHP_MOCA_MAC_DMA0_CHST_is_udrn_MASK                       0x00004000
#define BCHP_MOCA_MAC_DMA0_CHST_is_udrn_SHIFT                      14

/* MOCA_MAC_DMA0 :: CHST :: is_ovrn [13:13] */
#define BCHP_MOCA_MAC_DMA0_CHST_is_ovrn_MASK                       0x00002000
#define BCHP_MOCA_MAC_DMA0_CHST_is_ovrn_SHIFT                      13

/* MOCA_MAC_DMA0 :: CHST :: is_ddone [12:12] */
#define BCHP_MOCA_MAC_DMA0_CHST_is_ddone_MASK                      0x00001000
#define BCHP_MOCA_MAC_DMA0_CHST_is_ddone_SHIFT                     12

/* MOCA_MAC_DMA0 :: CHST :: reserved1 [11:08] */
#define BCHP_MOCA_MAC_DMA0_CHST_reserved1_MASK                     0x00000f00
#define BCHP_MOCA_MAC_DMA0_CHST_reserved1_SHIFT                    8

/* MOCA_MAC_DMA0 :: CHST :: fsm [07:04] */
#define BCHP_MOCA_MAC_DMA0_CHST_fsm_MASK                           0x000000f0
#define BCHP_MOCA_MAC_DMA0_CHST_fsm_SHIFT                          4

/* MOCA_MAC_DMA0 :: CHST :: reserved2 [03:01] */
#define BCHP_MOCA_MAC_DMA0_CHST_reserved2_MASK                     0x0000000e
#define BCHP_MOCA_MAC_DMA0_CHST_reserved2_SHIFT                    1

/* MOCA_MAC_DMA0 :: CHST :: busy [00:00] */
#define BCHP_MOCA_MAC_DMA0_CHST_busy_MASK                          0x00000001
#define BCHP_MOCA_MAC_DMA0_CHST_busy_SHIFT                         0

/***************************************************************************
 *CHSRV - Channel Descriptor in Service
 ***************************************************************************/
/* MOCA_MAC_DMA0 :: CHSRV :: dp_srv [31:00] */
#define BCHP_MOCA_MAC_DMA0_CHSRV_dp_srv_MASK                       0xffffffff
#define BCHP_MOCA_MAC_DMA0_CHSRV_dp_srv_SHIFT                      0

#endif /* #ifndef BCHP_MOCA_MAC_DMA0_H__ */

/* End of File */
