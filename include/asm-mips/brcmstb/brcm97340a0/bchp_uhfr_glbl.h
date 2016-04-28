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
 * Date:           Generated on         Fri Mar 20 13:09:01 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_uhfr_glbl.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 9:18p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_UHFR_GLBL_H__
#define BCHP_UHFR_GLBL_H__

/***************************************************************************
 *UHFR_GLBL - UHF Receiver Global Control Registers
 ***************************************************************************/
#define BCHP_UHFR_GLBL_AUTOPD3                   0x0040c1e0 /* UHFR Global Auto Power Down Control Register 3 */
#define BCHP_UHFR_GLBL_AUTOPD4                   0x0040c1e4 /* UHFR Global Auto Power Down Control Register 4 */
#define BCHP_UHFR_GLBL_AUTOPD5                   0x0040c1e8 /* UHFR Global Auto Power Down Control Register 5 */
#define BCHP_UHFR_GLBL_AUTOPD6                   0x0040c1ec /* UHFR Global Auto Power Down Control Register 6 */
#define BCHP_UHFR_GLBL_GLBL1                     0x0040c1f0 /* UHFR Global Control Register 1 */
#define BCHP_UHFR_GLBL_GLBL2                     0x0040c1f4 /* UHFR Global Control Register 2 */
#define BCHP_UHFR_GLBL_AUTOPD1                   0x0040c1f8 /* UHFR Global Auto Power Down Control Register 1 */
#define BCHP_UHFR_GLBL_AUTOPD2                   0x0040c1fc /* UHFR Global Auto Power Down Control Register 2 */

/***************************************************************************
 *AUTOPD3 - UHFR Global Auto Power Down Control Register 3
 ***************************************************************************/
/* UHFR_GLBL :: AUTOPD3 :: LDC_PWM_PD_PERIOD [31:16] */
#define BCHP_UHFR_GLBL_AUTOPD3_LDC_PWM_PD_PERIOD_MASK              0xffff0000
#define BCHP_UHFR_GLBL_AUTOPD3_LDC_PWM_PD_PERIOD_SHIFT             16

/* UHFR_GLBL :: AUTOPD3 :: LDC_PWM_PD_ON_TIME [15:00] */
#define BCHP_UHFR_GLBL_AUTOPD3_LDC_PWM_PD_ON_TIME_MASK             0x0000ffff
#define BCHP_UHFR_GLBL_AUTOPD3_LDC_PWM_PD_ON_TIME_SHIFT            0

/***************************************************************************
 *AUTOPD4 - UHFR Global Auto Power Down Control Register 4
 ***************************************************************************/
/* UHFR_GLBL :: AUTOPD4 :: POWER_ON_PATTERN [31:00] */
#define BCHP_UHFR_GLBL_AUTOPD4_POWER_ON_PATTERN_MASK               0xffffffff
#define BCHP_UHFR_GLBL_AUTOPD4_POWER_ON_PATTERN_SHIFT              0

/***************************************************************************
 *AUTOPD5 - UHFR Global Auto Power Down Control Register 5
 ***************************************************************************/
/* UHFR_GLBL :: AUTOPD5 :: DIS_PKT_FILTER [31:31] */
#define BCHP_UHFR_GLBL_AUTOPD5_DIS_PKT_FILTER_MASK                 0x80000000
#define BCHP_UHFR_GLBL_AUTOPD5_DIS_PKT_FILTER_SHIFT                31

/* UHFR_GLBL :: AUTOPD5 :: EN_REPEAT_EN_INT [30:30] */
#define BCHP_UHFR_GLBL_AUTOPD5_EN_REPEAT_EN_INT_MASK               0x40000000
#define BCHP_UHFR_GLBL_AUTOPD5_EN_REPEAT_EN_INT_SHIFT              30

/* UHFR_GLBL :: AUTOPD5 :: reserved_for_eco0 [29:16] */
#define BCHP_UHFR_GLBL_AUTOPD5_reserved_for_eco0_MASK              0x3fff0000
#define BCHP_UHFR_GLBL_AUTOPD5_reserved_for_eco0_SHIFT             16

/* UHFR_GLBL :: AUTOPD5 :: REPEAT_PKT_TIMEOUT [15:00] */
#define BCHP_UHFR_GLBL_AUTOPD5_REPEAT_PKT_TIMEOUT_MASK             0x0000ffff
#define BCHP_UHFR_GLBL_AUTOPD5_REPEAT_PKT_TIMEOUT_SHIFT            0

/***************************************************************************
 *AUTOPD6 - UHFR Global Auto Power Down Control Register 6
 ***************************************************************************/
/* UHFR_GLBL :: AUTOPD6 :: reserved_for_eco0 [31:00] */
#define BCHP_UHFR_GLBL_AUTOPD6_reserved_for_eco0_MASK              0xffffffff
#define BCHP_UHFR_GLBL_AUTOPD6_reserved_for_eco0_SHIFT             0

/***************************************************************************
 *GLBL1 - UHFR Global Control Register 1
 ***************************************************************************/
/* UHFR_GLBL :: GLBL1 :: reserved_for_eco0 [31:13] */
#define BCHP_UHFR_GLBL_GLBL1_reserved_for_eco0_MASK                0xffffe000
#define BCHP_UHFR_GLBL_GLBL1_reserved_for_eco0_SHIFT               13

/* UHFR_GLBL :: GLBL1 :: ONE_ARF_EN [12:12] */
#define BCHP_UHFR_GLBL_GLBL1_ONE_ARF_EN_MASK                       0x00001000
#define BCHP_UHFR_GLBL_GLBL1_ONE_ARF_EN_SHIFT                      12

/* UHFR_GLBL :: GLBL1 :: TP_IN_SEL [11:11] */
#define BCHP_UHFR_GLBL_GLBL1_TP_IN_SEL_MASK                        0x00000800
#define BCHP_UHFR_GLBL_GLBL1_TP_IN_SEL_SHIFT                       11

/* UHFR_GLBL :: GLBL1 :: TPOUT_XOR [10:10] */
#define BCHP_UHFR_GLBL_GLBL1_TPOUT_XOR_MASK                        0x00000400
#define BCHP_UHFR_GLBL_GLBL1_TPOUT_XOR_SHIFT                       10

/* UHFR_GLBL :: GLBL1 :: TP_OUT_SEL [09:08] */
#define BCHP_UHFR_GLBL_GLBL1_TP_OUT_SEL_MASK                       0x00000300
#define BCHP_UHFR_GLBL_GLBL1_TP_OUT_SEL_SHIFT                      8

/* UHFR_GLBL :: GLBL1 :: reserved_for_eco1 [07:01] */
#define BCHP_UHFR_GLBL_GLBL1_reserved_for_eco1_MASK                0x000000fe
#define BCHP_UHFR_GLBL_GLBL1_reserved_for_eco1_SHIFT               1

/* UHFR_GLBL :: GLBL1 :: BROADCAST [00:00] */
#define BCHP_UHFR_GLBL_GLBL1_BROADCAST_MASK                        0x00000001
#define BCHP_UHFR_GLBL_GLBL1_BROADCAST_SHIFT                       0

/***************************************************************************
 *GLBL2 - UHFR Global Control Register 2
 ***************************************************************************/
/* UHFR_GLBL :: GLBL2 :: reserved_for_eco0 [31:00] */
#define BCHP_UHFR_GLBL_GLBL2_reserved_for_eco0_MASK                0xffffffff
#define BCHP_UHFR_GLBL_GLBL2_reserved_for_eco0_SHIFT               0

/***************************************************************************
 *AUTOPD1 - UHFR Global Auto Power Down Control Register 1
 ***************************************************************************/
/* UHFR_GLBL :: AUTOPD1 :: reserved_for_eco0 [31:25] */
#define BCHP_UHFR_GLBL_AUTOPD1_reserved_for_eco0_MASK              0xfe000000
#define BCHP_UHFR_GLBL_AUTOPD1_reserved_for_eco0_SHIFT             25

/* UHFR_GLBL :: AUTOPD1 :: FIFO_PD_RST_EN [24:24] */
#define BCHP_UHFR_GLBL_AUTOPD1_FIFO_PD_RST_EN_MASK                 0x01000000
#define BCHP_UHFR_GLBL_AUTOPD1_FIFO_PD_RST_EN_SHIFT                24

/* UHFR_GLBL :: AUTOPD1 :: PHS_IIR_EN_DLY_PD_FRZ [23:23] */
#define BCHP_UHFR_GLBL_AUTOPD1_PHS_IIR_EN_DLY_PD_FRZ_MASK          0x00800000
#define BCHP_UHFR_GLBL_AUTOPD1_PHS_IIR_EN_DLY_PD_FRZ_SHIFT         23

/* UHFR_GLBL :: AUTOPD1 :: DC_IIR_EN_DLY_PD_FRZ [22:22] */
#define BCHP_UHFR_GLBL_AUTOPD1_DC_IIR_EN_DLY_PD_FRZ_MASK           0x00400000
#define BCHP_UHFR_GLBL_AUTOPD1_DC_IIR_EN_DLY_PD_FRZ_SHIFT          22

/* UHFR_GLBL :: AUTOPD1 :: PHS_IIR_EN_PD_FRZ [21:21] */
#define BCHP_UHFR_GLBL_AUTOPD1_PHS_IIR_EN_PD_FRZ_MASK              0x00200000
#define BCHP_UHFR_GLBL_AUTOPD1_PHS_IIR_EN_PD_FRZ_SHIFT             21

/* UHFR_GLBL :: AUTOPD1 :: DC_IIR_EN_PD_FRZ [20:20] */
#define BCHP_UHFR_GLBL_AUTOPD1_DC_IIR_EN_PD_FRZ_MASK               0x00100000
#define BCHP_UHFR_GLBL_AUTOPD1_DC_IIR_EN_PD_FRZ_SHIFT              20

/* UHFR_GLBL :: AUTOPD1 :: SYN_RESET_PD_EN [19:19] */
#define BCHP_UHFR_GLBL_AUTOPD1_SYN_RESET_PD_EN_MASK                0x00080000
#define BCHP_UHFR_GLBL_AUTOPD1_SYN_RESET_PD_EN_SHIFT               19

/* UHFR_GLBL :: AUTOPD1 :: SYN_RESET_DLY [18:16] */
#define BCHP_UHFR_GLBL_AUTOPD1_SYN_RESET_DLY_MASK                  0x00070000
#define BCHP_UHFR_GLBL_AUTOPD1_SYN_RESET_DLY_SHIFT                 16

/* UHFR_GLBL :: AUTOPD1 :: reserved_for_eco1 [15:12] */
#define BCHP_UHFR_GLBL_AUTOPD1_reserved_for_eco1_MASK              0x0000f000
#define BCHP_UHFR_GLBL_AUTOPD1_reserved_for_eco1_SHIFT             12

/* UHFR_GLBL :: AUTOPD1 :: RSSI_SLOW_EN_DLY_PD_FRZ [11:11] */
#define BCHP_UHFR_GLBL_AUTOPD1_RSSI_SLOW_EN_DLY_PD_FRZ_MASK        0x00000800
#define BCHP_UHFR_GLBL_AUTOPD1_RSSI_SLOW_EN_DLY_PD_FRZ_SHIFT       11

/* UHFR_GLBL :: AUTOPD1 :: reserved_for_eco2 [10:10] */
#define BCHP_UHFR_GLBL_AUTOPD1_reserved_for_eco2_MASK              0x00000400
#define BCHP_UHFR_GLBL_AUTOPD1_reserved_for_eco2_SHIFT             10

/* UHFR_GLBL :: AUTOPD1 :: RSSI_SLOW_EN_PD_FRZ [09:09] */
#define BCHP_UHFR_GLBL_AUTOPD1_RSSI_SLOW_EN_PD_FRZ_MASK            0x00000200
#define BCHP_UHFR_GLBL_AUTOPD1_RSSI_SLOW_EN_PD_FRZ_SHIFT           9

/* UHFR_GLBL :: AUTOPD1 :: reserved_for_eco3 [08:06] */
#define BCHP_UHFR_GLBL_AUTOPD1_reserved_for_eco3_MASK              0x000001c0
#define BCHP_UHFR_GLBL_AUTOPD1_reserved_for_eco3_SHIFT             6

/* UHFR_GLBL :: AUTOPD1 :: RSSI_SLOW_EN_AUTO_PD [05:05] */
#define BCHP_UHFR_GLBL_AUTOPD1_RSSI_SLOW_EN_AUTO_PD_MASK           0x00000020
#define BCHP_UHFR_GLBL_AUTOPD1_RSSI_SLOW_EN_AUTO_PD_SHIFT          5

/* UHFR_GLBL :: AUTOPD1 :: reserved_for_eco4 [04:03] */
#define BCHP_UHFR_GLBL_AUTOPD1_reserved_for_eco4_MASK              0x00000018
#define BCHP_UHFR_GLBL_AUTOPD1_reserved_for_eco4_SHIFT             3

/* UHFR_GLBL :: AUTOPD1 :: LDC_EN_AUTO_PD [02:02] */
#define BCHP_UHFR_GLBL_AUTOPD1_LDC_EN_AUTO_PD_MASK                 0x00000004
#define BCHP_UHFR_GLBL_AUTOPD1_LDC_EN_AUTO_PD_SHIFT                2

/* UHFR_GLBL :: AUTOPD1 :: AUTO_PD_EN [01:01] */
#define BCHP_UHFR_GLBL_AUTOPD1_AUTO_PD_EN_MASK                     0x00000002
#define BCHP_UHFR_GLBL_AUTOPD1_AUTO_PD_EN_SHIFT                    1

/* UHFR_GLBL :: AUTOPD1 :: MANUAL_PD [00:00] */
#define BCHP_UHFR_GLBL_AUTOPD1_MANUAL_PD_MASK                      0x00000001
#define BCHP_UHFR_GLBL_AUTOPD1_MANUAL_PD_SHIFT                     0

/***************************************************************************
 *AUTOPD2 - UHFR Global Auto Power Down Control Register 2
 ***************************************************************************/
/* UHFR_GLBL :: AUTOPD2 :: RSSI_PWM_PD_ON_TIME [31:24] */
#define BCHP_UHFR_GLBL_AUTOPD2_RSSI_PWM_PD_ON_TIME_MASK            0xff000000
#define BCHP_UHFR_GLBL_AUTOPD2_RSSI_PWM_PD_ON_TIME_SHIFT           24

/* UHFR_GLBL :: AUTOPD2 :: RSSI_PWM_PD_PERIOD [23:16] */
#define BCHP_UHFR_GLBL_AUTOPD2_RSSI_PWM_PD_PERIOD_MASK             0x00ff0000
#define BCHP_UHFR_GLBL_AUTOPD2_RSSI_PWM_PD_PERIOD_SHIFT            16

/* UHFR_GLBL :: AUTOPD2 :: AMP_PD_FRZ_DLY [15:08] */
#define BCHP_UHFR_GLBL_AUTOPD2_AMP_PD_FRZ_DLY_MASK                 0x0000ff00
#define BCHP_UHFR_GLBL_AUTOPD2_AMP_PD_FRZ_DLY_SHIFT                8

/* UHFR_GLBL :: AUTOPD2 :: ADC_PD_FRZ_DLY [07:00] */
#define BCHP_UHFR_GLBL_AUTOPD2_ADC_PD_FRZ_DLY_MASK                 0x000000ff
#define BCHP_UHFR_GLBL_AUTOPD2_ADC_PD_FRZ_DLY_SHIFT                0

#endif /* #ifndef BCHP_UHFR_GLBL_H__ */

/* End of File */