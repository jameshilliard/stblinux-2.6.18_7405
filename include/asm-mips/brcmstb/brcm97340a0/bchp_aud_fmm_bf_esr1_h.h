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
 * Date:           Generated on         Fri Mar 20 12:52:23 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_aud_fmm_bf_esr1_h.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 7:44p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_AUD_FMM_BF_ESR1_H_H__
#define BCHP_AUD_FMM_BF_ESR1_H_H__

/***************************************************************************
 *AUD_FMM_BF_ESR1_H - FMM-BF Error Status 1 (for Host)
 ***************************************************************************/
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS            0x00611020 /* Error Status Register */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET        0x00611024 /* Error Set Register */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR      0x00611028 /* Error Clear Register */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK              0x0061102c /* Mask Status Register */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET          0x00611030 /* Mask Set Register */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR        0x00611034 /* Mask Clear Register */

/***************************************************************************
 *STATUS - Error Status Register
 ***************************************************************************/
/* AUD_FMM_BF_ESR1_H :: STATUS :: reserved0 [31:14] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_reserved0_MASK               0xffffc000
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_reserved0_SHIFT              14

/* AUD_FMM_BF_ESR1_H :: STATUS :: DEST_RINGBUF_3_OVERFLOW [13:13] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_DEST_RINGBUF_3_OVERFLOW_MASK 0x00002000
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_DEST_RINGBUF_3_OVERFLOW_SHIFT 13

/* AUD_FMM_BF_ESR1_H :: STATUS :: DEST_RINGBUF_2_OVERFLOW [12:12] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_DEST_RINGBUF_2_OVERFLOW_MASK 0x00001000
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_DEST_RINGBUF_2_OVERFLOW_SHIFT 12

/* AUD_FMM_BF_ESR1_H :: STATUS :: DEST_RINGBUF_1_OVERFLOW [11:11] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_DEST_RINGBUF_1_OVERFLOW_MASK 0x00000800
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_DEST_RINGBUF_1_OVERFLOW_SHIFT 11

/* AUD_FMM_BF_ESR1_H :: STATUS :: DEST_RINGBUF_0_OVERFLOW [10:10] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_DEST_RINGBUF_0_OVERFLOW_MASK 0x00000400
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_DEST_RINGBUF_0_OVERFLOW_SHIFT 10

/* AUD_FMM_BF_ESR1_H :: STATUS :: SOURCE_RINGBUF_9_UNDERFLOW [09:09] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SOURCE_RINGBUF_9_UNDERFLOW_MASK 0x00000200
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SOURCE_RINGBUF_9_UNDERFLOW_SHIFT 9

/* AUD_FMM_BF_ESR1_H :: STATUS :: SOURCE_RINGBUF_8_UNDERFLOW [08:08] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SOURCE_RINGBUF_8_UNDERFLOW_MASK 0x00000100
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SOURCE_RINGBUF_8_UNDERFLOW_SHIFT 8

/* AUD_FMM_BF_ESR1_H :: STATUS :: SOURCE_RINGBUF_7_UNDERFLOW [07:07] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SOURCE_RINGBUF_7_UNDERFLOW_MASK 0x00000080
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SOURCE_RINGBUF_7_UNDERFLOW_SHIFT 7

/* AUD_FMM_BF_ESR1_H :: STATUS :: SOURCE_RINGBUF_6_UNDERFLOW [06:06] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SOURCE_RINGBUF_6_UNDERFLOW_MASK 0x00000040
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SOURCE_RINGBUF_6_UNDERFLOW_SHIFT 6

/* AUD_FMM_BF_ESR1_H :: STATUS :: SOURCE_RINGBUF_5_UNDERFLOW [05:05] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SOURCE_RINGBUF_5_UNDERFLOW_MASK 0x00000020
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SOURCE_RINGBUF_5_UNDERFLOW_SHIFT 5

/* AUD_FMM_BF_ESR1_H :: STATUS :: SOURCE_RINGBUF_4_UNDERFLOW [04:04] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SOURCE_RINGBUF_4_UNDERFLOW_MASK 0x00000010
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SOURCE_RINGBUF_4_UNDERFLOW_SHIFT 4

/* AUD_FMM_BF_ESR1_H :: STATUS :: SOURCE_RINGBUF_3_UNDERFLOW [03:03] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SOURCE_RINGBUF_3_UNDERFLOW_MASK 0x00000008
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SOURCE_RINGBUF_3_UNDERFLOW_SHIFT 3

/* AUD_FMM_BF_ESR1_H :: STATUS :: SOURCE_RINGBUF_2_UNDERFLOW [02:02] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SOURCE_RINGBUF_2_UNDERFLOW_MASK 0x00000004
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SOURCE_RINGBUF_2_UNDERFLOW_SHIFT 2

/* AUD_FMM_BF_ESR1_H :: STATUS :: SOURCE_RINGBUF_1_UNDERFLOW [01:01] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SOURCE_RINGBUF_1_UNDERFLOW_MASK 0x00000002
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SOURCE_RINGBUF_1_UNDERFLOW_SHIFT 1

/* AUD_FMM_BF_ESR1_H :: STATUS :: SOURCE_RINGBUF_0_UNDERFLOW [00:00] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SOURCE_RINGBUF_0_UNDERFLOW_MASK 0x00000001
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SOURCE_RINGBUF_0_UNDERFLOW_SHIFT 0

/***************************************************************************
 *STATUS_SET - Error Set Register
 ***************************************************************************/
/* AUD_FMM_BF_ESR1_H :: STATUS_SET :: reserved0 [31:14] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_reserved0_MASK           0xffffc000
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_reserved0_SHIFT          14

/* AUD_FMM_BF_ESR1_H :: STATUS_SET :: DEST_RINGBUF_3_OVERFLOW [13:13] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_DEST_RINGBUF_3_OVERFLOW_MASK 0x00002000
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_DEST_RINGBUF_3_OVERFLOW_SHIFT 13

/* AUD_FMM_BF_ESR1_H :: STATUS_SET :: DEST_RINGBUF_2_OVERFLOW [12:12] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_DEST_RINGBUF_2_OVERFLOW_MASK 0x00001000
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_DEST_RINGBUF_2_OVERFLOW_SHIFT 12

/* AUD_FMM_BF_ESR1_H :: STATUS_SET :: DEST_RINGBUF_1_OVERFLOW [11:11] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_DEST_RINGBUF_1_OVERFLOW_MASK 0x00000800
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_DEST_RINGBUF_1_OVERFLOW_SHIFT 11

/* AUD_FMM_BF_ESR1_H :: STATUS_SET :: DEST_RINGBUF_0_OVERFLOW [10:10] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_DEST_RINGBUF_0_OVERFLOW_MASK 0x00000400
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_DEST_RINGBUF_0_OVERFLOW_SHIFT 10

/* AUD_FMM_BF_ESR1_H :: STATUS_SET :: SOURCE_RINGBUF_9_UNDERFLOW [09:09] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_SOURCE_RINGBUF_9_UNDERFLOW_MASK 0x00000200
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_SOURCE_RINGBUF_9_UNDERFLOW_SHIFT 9

/* AUD_FMM_BF_ESR1_H :: STATUS_SET :: SOURCE_RINGBUF_8_UNDERFLOW [08:08] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_SOURCE_RINGBUF_8_UNDERFLOW_MASK 0x00000100
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_SOURCE_RINGBUF_8_UNDERFLOW_SHIFT 8

/* AUD_FMM_BF_ESR1_H :: STATUS_SET :: SOURCE_RINGBUF_7_UNDERFLOW [07:07] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_SOURCE_RINGBUF_7_UNDERFLOW_MASK 0x00000080
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_SOURCE_RINGBUF_7_UNDERFLOW_SHIFT 7

/* AUD_FMM_BF_ESR1_H :: STATUS_SET :: SOURCE_RINGBUF_6_UNDERFLOW [06:06] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_SOURCE_RINGBUF_6_UNDERFLOW_MASK 0x00000040
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_SOURCE_RINGBUF_6_UNDERFLOW_SHIFT 6

/* AUD_FMM_BF_ESR1_H :: STATUS_SET :: SOURCE_RINGBUF_5_UNDERFLOW [05:05] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_SOURCE_RINGBUF_5_UNDERFLOW_MASK 0x00000020
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_SOURCE_RINGBUF_5_UNDERFLOW_SHIFT 5

/* AUD_FMM_BF_ESR1_H :: STATUS_SET :: SOURCE_RINGBUF_4_UNDERFLOW [04:04] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_SOURCE_RINGBUF_4_UNDERFLOW_MASK 0x00000010
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_SOURCE_RINGBUF_4_UNDERFLOW_SHIFT 4

/* AUD_FMM_BF_ESR1_H :: STATUS_SET :: SOURCE_RINGBUF_3_UNDERFLOW [03:03] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_SOURCE_RINGBUF_3_UNDERFLOW_MASK 0x00000008
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_SOURCE_RINGBUF_3_UNDERFLOW_SHIFT 3

/* AUD_FMM_BF_ESR1_H :: STATUS_SET :: SOURCE_RINGBUF_2_UNDERFLOW [02:02] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_SOURCE_RINGBUF_2_UNDERFLOW_MASK 0x00000004
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_SOURCE_RINGBUF_2_UNDERFLOW_SHIFT 2

/* AUD_FMM_BF_ESR1_H :: STATUS_SET :: SOURCE_RINGBUF_1_UNDERFLOW [01:01] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_SOURCE_RINGBUF_1_UNDERFLOW_MASK 0x00000002
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_SOURCE_RINGBUF_1_UNDERFLOW_SHIFT 1

/* AUD_FMM_BF_ESR1_H :: STATUS_SET :: SOURCE_RINGBUF_0_UNDERFLOW [00:00] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_SOURCE_RINGBUF_0_UNDERFLOW_MASK 0x00000001
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_SET_SOURCE_RINGBUF_0_UNDERFLOW_SHIFT 0

/***************************************************************************
 *STATUS_CLEAR - Error Clear Register
 ***************************************************************************/
/* AUD_FMM_BF_ESR1_H :: STATUS_CLEAR :: reserved0 [31:14] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_reserved0_MASK         0xffffc000
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_reserved0_SHIFT        14

/* AUD_FMM_BF_ESR1_H :: STATUS_CLEAR :: DEST_RINGBUF_3_OVERFLOW [13:13] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_DEST_RINGBUF_3_OVERFLOW_MASK 0x00002000
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_DEST_RINGBUF_3_OVERFLOW_SHIFT 13

/* AUD_FMM_BF_ESR1_H :: STATUS_CLEAR :: DEST_RINGBUF_2_OVERFLOW [12:12] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_DEST_RINGBUF_2_OVERFLOW_MASK 0x00001000
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_DEST_RINGBUF_2_OVERFLOW_SHIFT 12

/* AUD_FMM_BF_ESR1_H :: STATUS_CLEAR :: DEST_RINGBUF_1_OVERFLOW [11:11] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_DEST_RINGBUF_1_OVERFLOW_MASK 0x00000800
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_DEST_RINGBUF_1_OVERFLOW_SHIFT 11

/* AUD_FMM_BF_ESR1_H :: STATUS_CLEAR :: DEST_RINGBUF_0_OVERFLOW [10:10] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_DEST_RINGBUF_0_OVERFLOW_MASK 0x00000400
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_DEST_RINGBUF_0_OVERFLOW_SHIFT 10

/* AUD_FMM_BF_ESR1_H :: STATUS_CLEAR :: SOURCE_RINGBUF_9_UNDERFLOW [09:09] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_SOURCE_RINGBUF_9_UNDERFLOW_MASK 0x00000200
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_SOURCE_RINGBUF_9_UNDERFLOW_SHIFT 9

/* AUD_FMM_BF_ESR1_H :: STATUS_CLEAR :: SOURCE_RINGBUF_8_UNDERFLOW [08:08] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_SOURCE_RINGBUF_8_UNDERFLOW_MASK 0x00000100
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_SOURCE_RINGBUF_8_UNDERFLOW_SHIFT 8

/* AUD_FMM_BF_ESR1_H :: STATUS_CLEAR :: SOURCE_RINGBUF_7_UNDERFLOW [07:07] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_SOURCE_RINGBUF_7_UNDERFLOW_MASK 0x00000080
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_SOURCE_RINGBUF_7_UNDERFLOW_SHIFT 7

/* AUD_FMM_BF_ESR1_H :: STATUS_CLEAR :: SOURCE_RINGBUF_6_UNDERFLOW [06:06] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_SOURCE_RINGBUF_6_UNDERFLOW_MASK 0x00000040
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_SOURCE_RINGBUF_6_UNDERFLOW_SHIFT 6

/* AUD_FMM_BF_ESR1_H :: STATUS_CLEAR :: SOURCE_RINGBUF_5_UNDERFLOW [05:05] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_SOURCE_RINGBUF_5_UNDERFLOW_MASK 0x00000020
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_SOURCE_RINGBUF_5_UNDERFLOW_SHIFT 5

/* AUD_FMM_BF_ESR1_H :: STATUS_CLEAR :: SOURCE_RINGBUF_4_UNDERFLOW [04:04] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_SOURCE_RINGBUF_4_UNDERFLOW_MASK 0x00000010
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_SOURCE_RINGBUF_4_UNDERFLOW_SHIFT 4

/* AUD_FMM_BF_ESR1_H :: STATUS_CLEAR :: SOURCE_RINGBUF_3_UNDERFLOW [03:03] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_SOURCE_RINGBUF_3_UNDERFLOW_MASK 0x00000008
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_SOURCE_RINGBUF_3_UNDERFLOW_SHIFT 3

/* AUD_FMM_BF_ESR1_H :: STATUS_CLEAR :: SOURCE_RINGBUF_2_UNDERFLOW [02:02] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_SOURCE_RINGBUF_2_UNDERFLOW_MASK 0x00000004
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_SOURCE_RINGBUF_2_UNDERFLOW_SHIFT 2

/* AUD_FMM_BF_ESR1_H :: STATUS_CLEAR :: SOURCE_RINGBUF_1_UNDERFLOW [01:01] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_SOURCE_RINGBUF_1_UNDERFLOW_MASK 0x00000002
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_SOURCE_RINGBUF_1_UNDERFLOW_SHIFT 1

/* AUD_FMM_BF_ESR1_H :: STATUS_CLEAR :: SOURCE_RINGBUF_0_UNDERFLOW [00:00] */
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_SOURCE_RINGBUF_0_UNDERFLOW_MASK 0x00000001
#define BCHP_AUD_FMM_BF_ESR1_H_STATUS_CLEAR_SOURCE_RINGBUF_0_UNDERFLOW_SHIFT 0

/***************************************************************************
 *MASK - Mask Status Register
 ***************************************************************************/
/* AUD_FMM_BF_ESR1_H :: MASK :: reserved0 [31:14] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_reserved0_MASK                 0xffffc000
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_reserved0_SHIFT                14

/* AUD_FMM_BF_ESR1_H :: MASK :: DEST_RINGBUF_3_OVERFLOW [13:13] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_DEST_RINGBUF_3_OVERFLOW_MASK   0x00002000
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_DEST_RINGBUF_3_OVERFLOW_SHIFT  13

/* AUD_FMM_BF_ESR1_H :: MASK :: DEST_RINGBUF_2_OVERFLOW [12:12] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_DEST_RINGBUF_2_OVERFLOW_MASK   0x00001000
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_DEST_RINGBUF_2_OVERFLOW_SHIFT  12

/* AUD_FMM_BF_ESR1_H :: MASK :: DEST_RINGBUF_1_OVERFLOW [11:11] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_DEST_RINGBUF_1_OVERFLOW_MASK   0x00000800
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_DEST_RINGBUF_1_OVERFLOW_SHIFT  11

/* AUD_FMM_BF_ESR1_H :: MASK :: DEST_RINGBUF_0_OVERFLOW [10:10] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_DEST_RINGBUF_0_OVERFLOW_MASK   0x00000400
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_DEST_RINGBUF_0_OVERFLOW_SHIFT  10

/* AUD_FMM_BF_ESR1_H :: MASK :: SOURCE_RINGBUF_9_UNDERFLOW [09:09] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SOURCE_RINGBUF_9_UNDERFLOW_MASK 0x00000200
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SOURCE_RINGBUF_9_UNDERFLOW_SHIFT 9

/* AUD_FMM_BF_ESR1_H :: MASK :: SOURCE_RINGBUF_8_UNDERFLOW [08:08] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SOURCE_RINGBUF_8_UNDERFLOW_MASK 0x00000100
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SOURCE_RINGBUF_8_UNDERFLOW_SHIFT 8

/* AUD_FMM_BF_ESR1_H :: MASK :: SOURCE_RINGBUF_7_UNDERFLOW [07:07] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SOURCE_RINGBUF_7_UNDERFLOW_MASK 0x00000080
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SOURCE_RINGBUF_7_UNDERFLOW_SHIFT 7

/* AUD_FMM_BF_ESR1_H :: MASK :: SOURCE_RINGBUF_6_UNDERFLOW [06:06] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SOURCE_RINGBUF_6_UNDERFLOW_MASK 0x00000040
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SOURCE_RINGBUF_6_UNDERFLOW_SHIFT 6

/* AUD_FMM_BF_ESR1_H :: MASK :: SOURCE_RINGBUF_5_UNDERFLOW [05:05] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SOURCE_RINGBUF_5_UNDERFLOW_MASK 0x00000020
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SOURCE_RINGBUF_5_UNDERFLOW_SHIFT 5

/* AUD_FMM_BF_ESR1_H :: MASK :: SOURCE_RINGBUF_4_UNDERFLOW [04:04] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SOURCE_RINGBUF_4_UNDERFLOW_MASK 0x00000010
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SOURCE_RINGBUF_4_UNDERFLOW_SHIFT 4

/* AUD_FMM_BF_ESR1_H :: MASK :: SOURCE_RINGBUF_3_UNDERFLOW [03:03] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SOURCE_RINGBUF_3_UNDERFLOW_MASK 0x00000008
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SOURCE_RINGBUF_3_UNDERFLOW_SHIFT 3

/* AUD_FMM_BF_ESR1_H :: MASK :: SOURCE_RINGBUF_2_UNDERFLOW [02:02] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SOURCE_RINGBUF_2_UNDERFLOW_MASK 0x00000004
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SOURCE_RINGBUF_2_UNDERFLOW_SHIFT 2

/* AUD_FMM_BF_ESR1_H :: MASK :: SOURCE_RINGBUF_1_UNDERFLOW [01:01] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SOURCE_RINGBUF_1_UNDERFLOW_MASK 0x00000002
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SOURCE_RINGBUF_1_UNDERFLOW_SHIFT 1

/* AUD_FMM_BF_ESR1_H :: MASK :: SOURCE_RINGBUF_0_UNDERFLOW [00:00] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SOURCE_RINGBUF_0_UNDERFLOW_MASK 0x00000001
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SOURCE_RINGBUF_0_UNDERFLOW_SHIFT 0

/***************************************************************************
 *MASK_SET - Mask Set Register
 ***************************************************************************/
/* AUD_FMM_BF_ESR1_H :: MASK_SET :: reserved0 [31:14] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_reserved0_MASK             0xffffc000
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_reserved0_SHIFT            14

/* AUD_FMM_BF_ESR1_H :: MASK_SET :: DEST_RINGBUF_3_OVERFLOW [13:13] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_DEST_RINGBUF_3_OVERFLOW_MASK 0x00002000
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_DEST_RINGBUF_3_OVERFLOW_SHIFT 13

/* AUD_FMM_BF_ESR1_H :: MASK_SET :: DEST_RINGBUF_2_OVERFLOW [12:12] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_DEST_RINGBUF_2_OVERFLOW_MASK 0x00001000
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_DEST_RINGBUF_2_OVERFLOW_SHIFT 12

/* AUD_FMM_BF_ESR1_H :: MASK_SET :: DEST_RINGBUF_1_OVERFLOW [11:11] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_DEST_RINGBUF_1_OVERFLOW_MASK 0x00000800
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_DEST_RINGBUF_1_OVERFLOW_SHIFT 11

/* AUD_FMM_BF_ESR1_H :: MASK_SET :: DEST_RINGBUF_0_OVERFLOW [10:10] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_DEST_RINGBUF_0_OVERFLOW_MASK 0x00000400
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_DEST_RINGBUF_0_OVERFLOW_SHIFT 10

/* AUD_FMM_BF_ESR1_H :: MASK_SET :: SOURCE_RINGBUF_9_UNDERFLOW [09:09] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_SOURCE_RINGBUF_9_UNDERFLOW_MASK 0x00000200
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_SOURCE_RINGBUF_9_UNDERFLOW_SHIFT 9

/* AUD_FMM_BF_ESR1_H :: MASK_SET :: SOURCE_RINGBUF_8_UNDERFLOW [08:08] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_SOURCE_RINGBUF_8_UNDERFLOW_MASK 0x00000100
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_SOURCE_RINGBUF_8_UNDERFLOW_SHIFT 8

/* AUD_FMM_BF_ESR1_H :: MASK_SET :: SOURCE_RINGBUF_7_UNDERFLOW [07:07] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_SOURCE_RINGBUF_7_UNDERFLOW_MASK 0x00000080
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_SOURCE_RINGBUF_7_UNDERFLOW_SHIFT 7

/* AUD_FMM_BF_ESR1_H :: MASK_SET :: SOURCE_RINGBUF_6_UNDERFLOW [06:06] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_SOURCE_RINGBUF_6_UNDERFLOW_MASK 0x00000040
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_SOURCE_RINGBUF_6_UNDERFLOW_SHIFT 6

/* AUD_FMM_BF_ESR1_H :: MASK_SET :: SOURCE_RINGBUF_5_UNDERFLOW [05:05] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_SOURCE_RINGBUF_5_UNDERFLOW_MASK 0x00000020
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_SOURCE_RINGBUF_5_UNDERFLOW_SHIFT 5

/* AUD_FMM_BF_ESR1_H :: MASK_SET :: SOURCE_RINGBUF_4_UNDERFLOW [04:04] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_SOURCE_RINGBUF_4_UNDERFLOW_MASK 0x00000010
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_SOURCE_RINGBUF_4_UNDERFLOW_SHIFT 4

/* AUD_FMM_BF_ESR1_H :: MASK_SET :: SOURCE_RINGBUF_3_UNDERFLOW [03:03] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_SOURCE_RINGBUF_3_UNDERFLOW_MASK 0x00000008
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_SOURCE_RINGBUF_3_UNDERFLOW_SHIFT 3

/* AUD_FMM_BF_ESR1_H :: MASK_SET :: SOURCE_RINGBUF_2_UNDERFLOW [02:02] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_SOURCE_RINGBUF_2_UNDERFLOW_MASK 0x00000004
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_SOURCE_RINGBUF_2_UNDERFLOW_SHIFT 2

/* AUD_FMM_BF_ESR1_H :: MASK_SET :: SOURCE_RINGBUF_1_UNDERFLOW [01:01] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_SOURCE_RINGBUF_1_UNDERFLOW_MASK 0x00000002
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_SOURCE_RINGBUF_1_UNDERFLOW_SHIFT 1

/* AUD_FMM_BF_ESR1_H :: MASK_SET :: SOURCE_RINGBUF_0_UNDERFLOW [00:00] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_SOURCE_RINGBUF_0_UNDERFLOW_MASK 0x00000001
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_SET_SOURCE_RINGBUF_0_UNDERFLOW_SHIFT 0

/***************************************************************************
 *MASK_CLEAR - Mask Clear Register
 ***************************************************************************/
/* AUD_FMM_BF_ESR1_H :: MASK_CLEAR :: reserved0 [31:14] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_reserved0_MASK           0xffffc000
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_reserved0_SHIFT          14

/* AUD_FMM_BF_ESR1_H :: MASK_CLEAR :: DEST_RINGBUF_3_OVERFLOW [13:13] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_DEST_RINGBUF_3_OVERFLOW_MASK 0x00002000
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_DEST_RINGBUF_3_OVERFLOW_SHIFT 13

/* AUD_FMM_BF_ESR1_H :: MASK_CLEAR :: DEST_RINGBUF_2_OVERFLOW [12:12] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_DEST_RINGBUF_2_OVERFLOW_MASK 0x00001000
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_DEST_RINGBUF_2_OVERFLOW_SHIFT 12

/* AUD_FMM_BF_ESR1_H :: MASK_CLEAR :: DEST_RINGBUF_1_OVERFLOW [11:11] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_DEST_RINGBUF_1_OVERFLOW_MASK 0x00000800
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_DEST_RINGBUF_1_OVERFLOW_SHIFT 11

/* AUD_FMM_BF_ESR1_H :: MASK_CLEAR :: DEST_RINGBUF_0_OVERFLOW [10:10] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_DEST_RINGBUF_0_OVERFLOW_MASK 0x00000400
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_DEST_RINGBUF_0_OVERFLOW_SHIFT 10

/* AUD_FMM_BF_ESR1_H :: MASK_CLEAR :: SOURCE_RINGBUF_9_UNDERFLOW [09:09] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_SOURCE_RINGBUF_9_UNDERFLOW_MASK 0x00000200
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_SOURCE_RINGBUF_9_UNDERFLOW_SHIFT 9

/* AUD_FMM_BF_ESR1_H :: MASK_CLEAR :: SOURCE_RINGBUF_8_UNDERFLOW [08:08] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_SOURCE_RINGBUF_8_UNDERFLOW_MASK 0x00000100
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_SOURCE_RINGBUF_8_UNDERFLOW_SHIFT 8

/* AUD_FMM_BF_ESR1_H :: MASK_CLEAR :: SOURCE_RINGBUF_7_UNDERFLOW [07:07] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_SOURCE_RINGBUF_7_UNDERFLOW_MASK 0x00000080
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_SOURCE_RINGBUF_7_UNDERFLOW_SHIFT 7

/* AUD_FMM_BF_ESR1_H :: MASK_CLEAR :: SOURCE_RINGBUF_6_UNDERFLOW [06:06] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_SOURCE_RINGBUF_6_UNDERFLOW_MASK 0x00000040
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_SOURCE_RINGBUF_6_UNDERFLOW_SHIFT 6

/* AUD_FMM_BF_ESR1_H :: MASK_CLEAR :: SOURCE_RINGBUF_5_UNDERFLOW [05:05] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_SOURCE_RINGBUF_5_UNDERFLOW_MASK 0x00000020
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_SOURCE_RINGBUF_5_UNDERFLOW_SHIFT 5

/* AUD_FMM_BF_ESR1_H :: MASK_CLEAR :: SOURCE_RINGBUF_4_UNDERFLOW [04:04] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_SOURCE_RINGBUF_4_UNDERFLOW_MASK 0x00000010
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_SOURCE_RINGBUF_4_UNDERFLOW_SHIFT 4

/* AUD_FMM_BF_ESR1_H :: MASK_CLEAR :: SOURCE_RINGBUF_3_UNDERFLOW [03:03] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_SOURCE_RINGBUF_3_UNDERFLOW_MASK 0x00000008
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_SOURCE_RINGBUF_3_UNDERFLOW_SHIFT 3

/* AUD_FMM_BF_ESR1_H :: MASK_CLEAR :: SOURCE_RINGBUF_2_UNDERFLOW [02:02] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_SOURCE_RINGBUF_2_UNDERFLOW_MASK 0x00000004
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_SOURCE_RINGBUF_2_UNDERFLOW_SHIFT 2

/* AUD_FMM_BF_ESR1_H :: MASK_CLEAR :: SOURCE_RINGBUF_1_UNDERFLOW [01:01] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_SOURCE_RINGBUF_1_UNDERFLOW_MASK 0x00000002
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_SOURCE_RINGBUF_1_UNDERFLOW_SHIFT 1

/* AUD_FMM_BF_ESR1_H :: MASK_CLEAR :: SOURCE_RINGBUF_0_UNDERFLOW [00:00] */
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_SOURCE_RINGBUF_0_UNDERFLOW_MASK 0x00000001
#define BCHP_AUD_FMM_BF_ESR1_H_MASK_CLEAR_SOURCE_RINGBUF_0_UNDERFLOW_SHIFT 0

#endif /* #ifndef BCHP_AUD_FMM_BF_ESR1_H_H__ */

/* End of File */
