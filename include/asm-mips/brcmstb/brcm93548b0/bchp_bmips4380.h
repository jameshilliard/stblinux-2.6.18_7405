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
 * Date:           Generated on         Thu Jul 17 17:04:23 2008
 *                 MD5 Checksum         9220767de76c9afe7a462b5b55e5d2ff
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/3548/rdb/b0/bchp_bmips4380.h $
 * 
 * Hydra_Software_Devel/1   7/17/08 6:31p maivu
 * PR 44921: Initial B0 files
 *
 ***************************************************************************/

#ifndef BCHP_BMIPS4380_H__
#define BCHP_BMIPS4380_H__

/***************************************************************************
 *BMIPS4380 - BMIPS4380 Internal Core
 ***************************************************************************/
#define BCHP_BMIPS4380_RAC_CONFIG                0x01f00000 /* RAC CONFIGURATION REGISTER */
#define BCHP_BMIPS4380_RAC_ADDR_RANGE            0x01f00004 /* ADDRESS RANGE REGISTER */
#define BCHP_BMIPS4380_RAC_CONFIG1               0x01f00008 /* RAC CONFIGURATION1 REGISTER */
#define BCHP_BMIPS4380_L2_CONFIG                 0x01f0000c /* L2 CONFIGURATION1 REGISTER */
#define BCHP_BMIPS4380_LMB_CONTROL               0x01f0001c /* LMB CONTROL REGISTER */
#define BCHP_BMIPS4380_SYSTEM_BASE               0x01f00020 /* SBR SYSTEM BASE REGISTER */
#define BCHP_BMIPS4380_PERF_GLOBAL_CONTROL       0x01f20000 /* PERFORMANCE GLOBAL CONTROL REGISTER */
#define BCHP_BMIPS4380_PERF_CONTROL_0            0x01f20004 /* PERFORMANCE CONTROL REGISTER 0 */
#define BCHP_BMIPS4380_PERF_CONTROL_1            0x01f20008 /* PERFORMANCE CONTROL REGISTER 1 */
#define BCHP_BMIPS4380_PERF_COUNTER_0            0x01f20010 /* PERFORMANCE COUNTER REGISTER 0 */
#define BCHP_BMIPS4380_PERF_COUNTER_1            0x01f20014 /* PERFORMANCE COUNTER REGISTER 1 */
#define BCHP_BMIPS4380_PERF_COUNTER_2            0x01f20018 /* PERFORMANCE COUNTER REGISTER 2 */
#define BCHP_BMIPS4380_PERF_COUNTER_3            0x01f2001c /* PERFORMANCE COUNTER REGISTER 3 */
#define BCHP_BMIPS4380_MIPS_RESV_BEG             0x01f30000 /* Beginning of CPU reserved area */
#define BCHP_BMIPS4380_MIPS_RESV_END             0x01f7ffff /* End of CPU reserved area */

/***************************************************************************
 *RAC_CONFIG - RAC CONFIGURATION REGISTER
 ***************************************************************************/
/* BMIPS4380 :: RAC_CONFIG :: reserved0 [31:27] */
#define BCHP_BMIPS4380_RAC_CONFIG_reserved0_MASK                   0xf8000000
#define BCHP_BMIPS4380_RAC_CONFIG_reserved0_SHIFT                  27

/* BMIPS4380 :: RAC_CONFIG :: RACS [26:24] */
#define BCHP_BMIPS4380_RAC_CONFIG_RACS_MASK                        0x07000000
#define BCHP_BMIPS4380_RAC_CONFIG_RACS_SHIFT                       24

/* BMIPS4380 :: RAC_CONFIG :: RACB [23:22] */
#define BCHP_BMIPS4380_RAC_CONFIG_RACB_MASK                        0x00c00000
#define BCHP_BMIPS4380_RAC_CONFIG_RACB_SHIFT                       22

/* BMIPS4380 :: RAC_CONFIG :: RACW [21:20] */
#define BCHP_BMIPS4380_RAC_CONFIG_RACW_MASK                        0x00300000
#define BCHP_BMIPS4380_RAC_CONFIG_RACW_SHIFT                       20

/* BMIPS4380 :: RAC_CONFIG :: WRV [19:18] */
#define BCHP_BMIPS4380_RAC_CONFIG_WRV_MASK                         0x000c0000
#define BCHP_BMIPS4380_RAC_CONFIG_WRV_SHIFT                        18

/* BMIPS4380 :: RAC_CONFIG :: JID [17:15] */
#define BCHP_BMIPS4380_RAC_CONFIG_JID_MASK                         0x00038000
#define BCHP_BMIPS4380_RAC_CONFIG_JID_SHIFT                        15

/* BMIPS4380 :: RAC_CONFIG :: reserved1 [14:09] */
#define BCHP_BMIPS4380_RAC_CONFIG_reserved1_MASK                   0x00007e00
#define BCHP_BMIPS4380_RAC_CONFIG_reserved1_SHIFT                  9

/* BMIPS4380 :: RAC_CONFIG :: FLH [08:08] */
#define BCHP_BMIPS4380_RAC_CONFIG_FLH_MASK                         0x00000100
#define BCHP_BMIPS4380_RAC_CONFIG_FLH_SHIFT                        8

/* BMIPS4380 :: RAC_CONFIG :: reserved2 [07:07] */
#define BCHP_BMIPS4380_RAC_CONFIG_reserved2_MASK                   0x00000080
#define BCHP_BMIPS4380_RAC_CONFIG_reserved2_SHIFT                  7

/* BMIPS4380 :: RAC_CONFIG :: DPF [06:06] */
#define BCHP_BMIPS4380_RAC_CONFIG_DPF_MASK                         0x00000040
#define BCHP_BMIPS4380_RAC_CONFIG_DPF_SHIFT                        6

/* BMIPS4380 :: RAC_CONFIG :: NCH [05:05] */
#define BCHP_BMIPS4380_RAC_CONFIG_NCH_MASK                         0x00000020
#define BCHP_BMIPS4380_RAC_CONFIG_NCH_SHIFT                        5

/* BMIPS4380 :: RAC_CONFIG :: C_INV [04:04] */
#define BCHP_BMIPS4380_RAC_CONFIG_C_INV_MASK                       0x00000010
#define BCHP_BMIPS4380_RAC_CONFIG_C_INV_SHIFT                      4

/* BMIPS4380 :: RAC_CONFIG :: PF_D [03:03] */
#define BCHP_BMIPS4380_RAC_CONFIG_PF_D_MASK                        0x00000008
#define BCHP_BMIPS4380_RAC_CONFIG_PF_D_SHIFT                       3

/* BMIPS4380 :: RAC_CONFIG :: PF_I [02:02] */
#define BCHP_BMIPS4380_RAC_CONFIG_PF_I_MASK                        0x00000004
#define BCHP_BMIPS4380_RAC_CONFIG_PF_I_SHIFT                       2

/* BMIPS4380 :: RAC_CONFIG :: RAC_D [01:01] */
#define BCHP_BMIPS4380_RAC_CONFIG_RAC_D_MASK                       0x00000002
#define BCHP_BMIPS4380_RAC_CONFIG_RAC_D_SHIFT                      1

/* BMIPS4380 :: RAC_CONFIG :: RAC_I [00:00] */
#define BCHP_BMIPS4380_RAC_CONFIG_RAC_I_MASK                       0x00000001
#define BCHP_BMIPS4380_RAC_CONFIG_RAC_I_SHIFT                      0

/***************************************************************************
 *RAC_ADDR_RANGE - ADDRESS RANGE REGISTER
 ***************************************************************************/
/* BMIPS4380 :: RAC_ADDR_RANGE :: UPB [31:16] */
#define BCHP_BMIPS4380_RAC_ADDR_RANGE_UPB_MASK                     0xffff0000
#define BCHP_BMIPS4380_RAC_ADDR_RANGE_UPB_SHIFT                    16

/* BMIPS4380 :: RAC_ADDR_RANGE :: LWB [15:00] */
#define BCHP_BMIPS4380_RAC_ADDR_RANGE_LWB_MASK                     0x0000ffff
#define BCHP_BMIPS4380_RAC_ADDR_RANGE_LWB_SHIFT                    0

/***************************************************************************
 *RAC_CONFIG1 - RAC CONFIGURATION1 REGISTER
 ***************************************************************************/
/* BMIPS4380 :: RAC_CONFIG1 :: reserved0 [31:04] */
#define BCHP_BMIPS4380_RAC_CONFIG1_reserved0_MASK                  0xfffffff0
#define BCHP_BMIPS4380_RAC_CONFIG1_reserved0_SHIFT                 4

/* BMIPS4380 :: RAC_CONFIG1 :: PF_D [03:03] */
#define BCHP_BMIPS4380_RAC_CONFIG1_PF_D_MASK                       0x00000008
#define BCHP_BMIPS4380_RAC_CONFIG1_PF_D_SHIFT                      3

/* BMIPS4380 :: RAC_CONFIG1 :: PF_I [02:02] */
#define BCHP_BMIPS4380_RAC_CONFIG1_PF_I_MASK                       0x00000004
#define BCHP_BMIPS4380_RAC_CONFIG1_PF_I_SHIFT                      2

/* BMIPS4380 :: RAC_CONFIG1 :: RAC_D [01:01] */
#define BCHP_BMIPS4380_RAC_CONFIG1_RAC_D_MASK                      0x00000002
#define BCHP_BMIPS4380_RAC_CONFIG1_RAC_D_SHIFT                     1

/* BMIPS4380 :: RAC_CONFIG1 :: RAC_I [00:00] */
#define BCHP_BMIPS4380_RAC_CONFIG1_RAC_I_MASK                      0x00000001
#define BCHP_BMIPS4380_RAC_CONFIG1_RAC_I_SHIFT                     0

/***************************************************************************
 *L2_CONFIG - L2 CONFIGURATION1 REGISTER
 ***************************************************************************/
/* BMIPS4380 :: L2_CONFIG :: L2E [31:28] */
#define BCHP_BMIPS4380_L2_CONFIG_L2E_MASK                          0xf0000000
#define BCHP_BMIPS4380_L2_CONFIG_L2E_SHIFT                         28

/* BMIPS4380 :: L2_CONFIG :: CBG [27:24] */
#define BCHP_BMIPS4380_L2_CONFIG_CBG_MASK                          0x0f000000
#define BCHP_BMIPS4380_L2_CONFIG_CBG_SHIFT                         24

/* BMIPS4380 :: L2_CONFIG :: reserved0 [23:12] */
#define BCHP_BMIPS4380_L2_CONFIG_reserved0_MASK                    0x00fff000
#define BCHP_BMIPS4380_L2_CONFIG_reserved0_SHIFT                   12

/* BMIPS4380 :: L2_CONFIG :: SS [11:08] */
#define BCHP_BMIPS4380_L2_CONFIG_SS_MASK                           0x00000f00
#define BCHP_BMIPS4380_L2_CONFIG_SS_SHIFT                          8

/* BMIPS4380 :: L2_CONFIG :: SL [07:04] */
#define BCHP_BMIPS4380_L2_CONFIG_SL_MASK                           0x000000f0
#define BCHP_BMIPS4380_L2_CONFIG_SL_SHIFT                          4

/* BMIPS4380 :: L2_CONFIG :: SA [03:00] */
#define BCHP_BMIPS4380_L2_CONFIG_SA_MASK                           0x0000000f
#define BCHP_BMIPS4380_L2_CONFIG_SA_SHIFT                          0

/***************************************************************************
 *LMB_CONTROL - LMB CONTROL REGISTER
 ***************************************************************************/
/* BMIPS4380 :: LMB_CONTROL :: reserved0 [31:01] */
#define BCHP_BMIPS4380_LMB_CONTROL_reserved0_MASK                  0xfffffffe
#define BCHP_BMIPS4380_LMB_CONTROL_reserved0_SHIFT                 1

/* BMIPS4380 :: LMB_CONTROL :: LMBE [00:00] */
#define BCHP_BMIPS4380_LMB_CONTROL_LMBE_MASK                       0x00000001
#define BCHP_BMIPS4380_LMB_CONTROL_LMBE_SHIFT                      0

/***************************************************************************
 *SYSTEM_BASE - SBR SYSTEM BASE REGISTER
 ***************************************************************************/
/* BMIPS4380 :: SYSTEM_BASE :: SBA [31:19] */
#define BCHP_BMIPS4380_SYSTEM_BASE_SBA_MASK                        0xfff80000
#define BCHP_BMIPS4380_SYSTEM_BASE_SBA_SHIFT                       19

/* BMIPS4380 :: SYSTEM_BASE :: reserved0 [18:12] */
#define BCHP_BMIPS4380_SYSTEM_BASE_reserved0_MASK                  0x0007f000
#define BCHP_BMIPS4380_SYSTEM_BASE_reserved0_SHIFT                 12

/* BMIPS4380 :: SYSTEM_BASE :: SRSZ [11:03] */
#define BCHP_BMIPS4380_SYSTEM_BASE_SRSZ_MASK                       0x00000ff8
#define BCHP_BMIPS4380_SYSTEM_BASE_SRSZ_SHIFT                      3

/* BMIPS4380 :: SYSTEM_BASE :: reserved1 [02:01] */
#define BCHP_BMIPS4380_SYSTEM_BASE_reserved1_MASK                  0x00000006
#define BCHP_BMIPS4380_SYSTEM_BASE_reserved1_SHIFT                 1

/* BMIPS4380 :: SYSTEM_BASE :: SBAE [00:00] */
#define BCHP_BMIPS4380_SYSTEM_BASE_SBAE_MASK                       0x00000001
#define BCHP_BMIPS4380_SYSTEM_BASE_SBAE_SHIFT                      0

/***************************************************************************
 *PERF_GLOBAL_CONTROL - PERFORMANCE GLOBAL CONTROL REGISTER
 ***************************************************************************/
/* BMIPS4380 :: PERF_GLOBAL_CONTROL :: PCE [31:31] */
#define BCHP_BMIPS4380_PERF_GLOBAL_CONTROL_PCE_MASK                0x80000000
#define BCHP_BMIPS4380_PERF_GLOBAL_CONTROL_PCE_SHIFT               31

/* BMIPS4380 :: PERF_GLOBAL_CONTROL :: reserved0 [30:26] */
#define BCHP_BMIPS4380_PERF_GLOBAL_CONTROL_reserved0_MASK          0x7c000000
#define BCHP_BMIPS4380_PERF_GLOBAL_CONTROL_reserved0_SHIFT         26

/* BMIPS4380 :: PERF_GLOBAL_CONTROL :: OVF [25:22] */
#define BCHP_BMIPS4380_PERF_GLOBAL_CONTROL_OVF_MASK                0x03c00000
#define BCHP_BMIPS4380_PERF_GLOBAL_CONTROL_OVF_SHIFT               22

/* BMIPS4380 :: PERF_GLOBAL_CONTROL :: reserved1 [21:09] */
#define BCHP_BMIPS4380_PERF_GLOBAL_CONTROL_reserved1_MASK          0x003ffe00
#define BCHP_BMIPS4380_PERF_GLOBAL_CONTROL_reserved1_SHIFT         9

/* BMIPS4380 :: PERF_GLOBAL_CONTROL :: PCSD [08:08] */
#define BCHP_BMIPS4380_PERF_GLOBAL_CONTROL_PCSD_MASK               0x00000100
#define BCHP_BMIPS4380_PERF_GLOBAL_CONTROL_PCSD_SHIFT              8

/* BMIPS4380 :: PERF_GLOBAL_CONTROL :: reserved2 [07:06] */
#define BCHP_BMIPS4380_PERF_GLOBAL_CONTROL_reserved2_MASK          0x000000c0
#define BCHP_BMIPS4380_PERF_GLOBAL_CONTROL_reserved2_SHIFT         6

/* BMIPS4380 :: PERF_GLOBAL_CONTROL :: ModID [05:02] */
#define BCHP_BMIPS4380_PERF_GLOBAL_CONTROL_ModID_MASK              0x0000003c
#define BCHP_BMIPS4380_PERF_GLOBAL_CONTROL_ModID_SHIFT             2

/* BMIPS4380 :: PERF_GLOBAL_CONTROL :: SetID [01:00] */
#define BCHP_BMIPS4380_PERF_GLOBAL_CONTROL_SetID_MASK              0x00000003
#define BCHP_BMIPS4380_PERF_GLOBAL_CONTROL_SetID_SHIFT             0

/***************************************************************************
 *PERF_CONTROL_0 - PERFORMANCE CONTROL REGISTER 0
 ***************************************************************************/
/* BMIPS4380 :: PERF_CONTROL_0 :: PCE_1 [31:31] */
#define BCHP_BMIPS4380_PERF_CONTROL_0_PCE_1_MASK                   0x80000000
#define BCHP_BMIPS4380_PERF_CONTROL_0_PCE_1_SHIFT                  31

/* BMIPS4380 :: PERF_CONTROL_0 :: TPID_1 [30:29] */
#define BCHP_BMIPS4380_PERF_CONTROL_0_TPID_1_MASK                  0x60000000
#define BCHP_BMIPS4380_PERF_CONTROL_0_TPID_1_SHIFT                 29

/* BMIPS4380 :: PERF_CONTROL_0 :: reserved0 [28:25] */
#define BCHP_BMIPS4380_PERF_CONTROL_0_reserved0_MASK               0x1e000000
#define BCHP_BMIPS4380_PERF_CONTROL_0_reserved0_SHIFT              25

/* BMIPS4380 :: PERF_CONTROL_0 :: EVT_1 [24:18] */
#define BCHP_BMIPS4380_PERF_CONTROL_0_EVT_1_MASK                   0x01fc0000
#define BCHP_BMIPS4380_PERF_CONTROL_0_EVT_1_SHIFT                  18

/* BMIPS4380 :: PERF_CONTROL_0 :: reserved1 [17:17] */
#define BCHP_BMIPS4380_PERF_CONTROL_0_reserved1_MASK               0x00020000
#define BCHP_BMIPS4380_PERF_CONTROL_0_reserved1_SHIFT              17

/* BMIPS4380 :: PERF_CONTROL_0 :: TIE_1 [16:16] */
#define BCHP_BMIPS4380_PERF_CONTROL_0_TIE_1_MASK                   0x00010000
#define BCHP_BMIPS4380_PERF_CONTROL_0_TIE_1_SHIFT                  16

/* BMIPS4380 :: PERF_CONTROL_0 :: PCE_0 [15:15] */
#define BCHP_BMIPS4380_PERF_CONTROL_0_PCE_0_MASK                   0x00008000
#define BCHP_BMIPS4380_PERF_CONTROL_0_PCE_0_SHIFT                  15

/* BMIPS4380 :: PERF_CONTROL_0 :: TPID_0 [14:13] */
#define BCHP_BMIPS4380_PERF_CONTROL_0_TPID_0_MASK                  0x00006000
#define BCHP_BMIPS4380_PERF_CONTROL_0_TPID_0_SHIFT                 13

/* BMIPS4380 :: PERF_CONTROL_0 :: reserved2 [12:09] */
#define BCHP_BMIPS4380_PERF_CONTROL_0_reserved2_MASK               0x00001e00
#define BCHP_BMIPS4380_PERF_CONTROL_0_reserved2_SHIFT              9

/* BMIPS4380 :: PERF_CONTROL_0 :: EVT_0 [08:02] */
#define BCHP_BMIPS4380_PERF_CONTROL_0_EVT_0_MASK                   0x000001fc
#define BCHP_BMIPS4380_PERF_CONTROL_0_EVT_0_SHIFT                  2

/* BMIPS4380 :: PERF_CONTROL_0 :: reserved3 [01:01] */
#define BCHP_BMIPS4380_PERF_CONTROL_0_reserved3_MASK               0x00000002
#define BCHP_BMIPS4380_PERF_CONTROL_0_reserved3_SHIFT              1

/* BMIPS4380 :: PERF_CONTROL_0 :: TIE_0 [00:00] */
#define BCHP_BMIPS4380_PERF_CONTROL_0_TIE_0_MASK                   0x00000001
#define BCHP_BMIPS4380_PERF_CONTROL_0_TIE_0_SHIFT                  0

/***************************************************************************
 *PERF_CONTROL_1 - PERFORMANCE CONTROL REGISTER 1
 ***************************************************************************/
/* BMIPS4380 :: PERF_CONTROL_1 :: PCE_3 [31:31] */
#define BCHP_BMIPS4380_PERF_CONTROL_1_PCE_3_MASK                   0x80000000
#define BCHP_BMIPS4380_PERF_CONTROL_1_PCE_3_SHIFT                  31

/* BMIPS4380 :: PERF_CONTROL_1 :: TPID_3 [30:29] */
#define BCHP_BMIPS4380_PERF_CONTROL_1_TPID_3_MASK                  0x60000000
#define BCHP_BMIPS4380_PERF_CONTROL_1_TPID_3_SHIFT                 29

/* BMIPS4380 :: PERF_CONTROL_1 :: reserved0 [28:25] */
#define BCHP_BMIPS4380_PERF_CONTROL_1_reserved0_MASK               0x1e000000
#define BCHP_BMIPS4380_PERF_CONTROL_1_reserved0_SHIFT              25

/* BMIPS4380 :: PERF_CONTROL_1 :: EVT_3 [24:18] */
#define BCHP_BMIPS4380_PERF_CONTROL_1_EVT_3_MASK                   0x01fc0000
#define BCHP_BMIPS4380_PERF_CONTROL_1_EVT_3_SHIFT                  18

/* BMIPS4380 :: PERF_CONTROL_1 :: reserved1 [17:17] */
#define BCHP_BMIPS4380_PERF_CONTROL_1_reserved1_MASK               0x00020000
#define BCHP_BMIPS4380_PERF_CONTROL_1_reserved1_SHIFT              17

/* BMIPS4380 :: PERF_CONTROL_1 :: TIE_3 [16:16] */
#define BCHP_BMIPS4380_PERF_CONTROL_1_TIE_3_MASK                   0x00010000
#define BCHP_BMIPS4380_PERF_CONTROL_1_TIE_3_SHIFT                  16

/* BMIPS4380 :: PERF_CONTROL_1 :: PCE_2 [15:15] */
#define BCHP_BMIPS4380_PERF_CONTROL_1_PCE_2_MASK                   0x00008000
#define BCHP_BMIPS4380_PERF_CONTROL_1_PCE_2_SHIFT                  15

/* BMIPS4380 :: PERF_CONTROL_1 :: TPID_2 [14:13] */
#define BCHP_BMIPS4380_PERF_CONTROL_1_TPID_2_MASK                  0x00006000
#define BCHP_BMIPS4380_PERF_CONTROL_1_TPID_2_SHIFT                 13

/* BMIPS4380 :: PERF_CONTROL_1 :: reserved2 [12:09] */
#define BCHP_BMIPS4380_PERF_CONTROL_1_reserved2_MASK               0x00001e00
#define BCHP_BMIPS4380_PERF_CONTROL_1_reserved2_SHIFT              9

/* BMIPS4380 :: PERF_CONTROL_1 :: EVT_2 [08:02] */
#define BCHP_BMIPS4380_PERF_CONTROL_1_EVT_2_MASK                   0x000001fc
#define BCHP_BMIPS4380_PERF_CONTROL_1_EVT_2_SHIFT                  2

/* BMIPS4380 :: PERF_CONTROL_1 :: reserved3 [01:01] */
#define BCHP_BMIPS4380_PERF_CONTROL_1_reserved3_MASK               0x00000002
#define BCHP_BMIPS4380_PERF_CONTROL_1_reserved3_SHIFT              1

/* BMIPS4380 :: PERF_CONTROL_1 :: TIE_2 [00:00] */
#define BCHP_BMIPS4380_PERF_CONTROL_1_TIE_2_MASK                   0x00000001
#define BCHP_BMIPS4380_PERF_CONTROL_1_TIE_2_SHIFT                  0

/***************************************************************************
 *PERF_COUNTER_0 - PERFORMANCE COUNTER REGISTER 0
 ***************************************************************************/
/* BMIPS4380 :: PERF_COUNTER_0 :: Count [31:00] */
#define BCHP_BMIPS4380_PERF_COUNTER_0_Count_MASK                   0xffffffff
#define BCHP_BMIPS4380_PERF_COUNTER_0_Count_SHIFT                  0

/***************************************************************************
 *PERF_COUNTER_1 - PERFORMANCE COUNTER REGISTER 1
 ***************************************************************************/
/* BMIPS4380 :: PERF_COUNTER_1 :: Count [31:00] */
#define BCHP_BMIPS4380_PERF_COUNTER_1_Count_MASK                   0xffffffff
#define BCHP_BMIPS4380_PERF_COUNTER_1_Count_SHIFT                  0

/***************************************************************************
 *PERF_COUNTER_2 - PERFORMANCE COUNTER REGISTER 2
 ***************************************************************************/
/* BMIPS4380 :: PERF_COUNTER_2 :: Count [31:00] */
#define BCHP_BMIPS4380_PERF_COUNTER_2_Count_MASK                   0xffffffff
#define BCHP_BMIPS4380_PERF_COUNTER_2_Count_SHIFT                  0

/***************************************************************************
 *PERF_COUNTER_3 - PERFORMANCE COUNTER REGISTER 3
 ***************************************************************************/
/* BMIPS4380 :: PERF_COUNTER_3 :: Count [31:00] */
#define BCHP_BMIPS4380_PERF_COUNTER_3_Count_MASK                   0xffffffff
#define BCHP_BMIPS4380_PERF_COUNTER_3_Count_SHIFT                  0

/***************************************************************************
 *MIPS_RESV_BEG - Beginning of CPU reserved area
 ***************************************************************************/
/* BMIPS4380 :: MIPS_RESV_BEG :: reserved0 [31:00] */
#define BCHP_BMIPS4380_MIPS_RESV_BEG_reserved0_MASK                0xffffffff
#define BCHP_BMIPS4380_MIPS_RESV_BEG_reserved0_SHIFT               0

/***************************************************************************
 *MIPS_RESV_END - End of CPU reserved area
 ***************************************************************************/
/* BMIPS4380 :: MIPS_RESV_END :: reserved0 [31:00] */
#define BCHP_BMIPS4380_MIPS_RESV_END_reserved0_MASK                0xffffffff
#define BCHP_BMIPS4380_MIPS_RESV_END_reserved0_SHIFT               0

#endif /* #ifndef BCHP_BMIPS4380_H__ */

/* End of File */
