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
 * Date:           Generated on         Fri Mar 20 12:54:45 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_hifidac_ctrl0.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 8:30p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_HIFIDAC_CTRL0_H__
#define BCHP_HIFIDAC_CTRL0_H__

/***************************************************************************
 *HIFIDAC_CTRL0 - HiFiDAC Control Registers 0
 ***************************************************************************/
#define BCHP_HIFIDAC_CTRL0_REVISION              0x0061b000 /* Hifidac Revision Register */
#define BCHP_HIFIDAC_CTRL0_RESET                 0x0061b004 /* Reset */
#define BCHP_HIFIDAC_CTRL0_CONFIG                0x0061b008 /* Audio ASRC/DAC Configuration */
#define BCHP_HIFIDAC_CTRL0_RANGE                 0x0061b00c /* Range Select */
#define BCHP_HIFIDAC_CTRL0_SCALECFG              0x0061b010 /* Audio scale configuration */
#define BCHP_HIFIDAC_CTRL0_SCALE                 0x0061b014 /* Audio ASRC scale */
#define BCHP_HIFIDAC_CTRL0_DAC_VOLUMECFG         0x0061b018 /* Audio DAC volume configuration */
#define BCHP_HIFIDAC_CTRL0_DAC_VOLUME            0x0061b01c /* Audio DAC volume */
#define BCHP_HIFIDAC_CTRL0_PEAK_CONFIG           0x0061b020 /* Peaking filter configuration */
#define BCHP_HIFIDAC_CTRL0_PEAK_GAIN             0x0061b024 /* Peaking filter gain */
#define BCHP_HIFIDAC_CTRL0_PEAK_A1               0x0061b028 /* Peaking filter a1 coefficient */
#define BCHP_HIFIDAC_CTRL0_PEAK_A2               0x0061b02c /* Peaking filter a2 coefficient */
#define BCHP_HIFIDAC_CTRL0_MOD_CONTROL           0x0061b030 /* Digital modulator control */
#define BCHP_HIFIDAC_CTRL0_MOD_DITHER            0x0061b034 /* Digital modulator dither control */
#define BCHP_HIFIDAC_CTRL0_MOD_SAT_CNT_L         0x0061b038 /* Left digital modulator saturation count status */
#define BCHP_HIFIDAC_CTRL0_MOD_SAT_CNT_R         0x0061b03c /* Right digital modulator saturation count status */
#define BCHP_HIFIDAC_CTRL0_RATEMGRCFG            0x0061b040 /* Rate Manager Oversample Rate */
#define BCHP_HIFIDAC_CTRL0_STATUS                0x0061b044 /* Hifidac status */
#define BCHP_HIFIDAC_CTRL0_MUTECTRL              0x0061b048 /* RFMOD and DAC mute control */
#define BCHP_HIFIDAC_CTRL0_MUTECTRL_DACONLY      0x0061b04c /* DAC only mute control */
#define BCHP_HIFIDAC_CTRL0_CURRDAC_CTRL          0x0061b050 /* Current DAC control */
#define BCHP_HIFIDAC_CTRL0_DAC_CONST_VAL         0x0061b054 /* DAC constant value */
#define BCHP_HIFIDAC_CTRL0_TEST                  0x0061b0fc /* Test mode */

/***************************************************************************
 *REVISION - Hifidac Revision Register
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: REVISION :: reserved0 [31:16] */
#define BCHP_HIFIDAC_CTRL0_REVISION_reserved0_MASK                 0xffff0000
#define BCHP_HIFIDAC_CTRL0_REVISION_reserved0_SHIFT                16

/* HIFIDAC_CTRL0 :: REVISION :: MAJOR [15:08] */
#define BCHP_HIFIDAC_CTRL0_REVISION_MAJOR_MASK                     0x0000ff00
#define BCHP_HIFIDAC_CTRL0_REVISION_MAJOR_SHIFT                    8

/* HIFIDAC_CTRL0 :: REVISION :: MINOR [07:00] */
#define BCHP_HIFIDAC_CTRL0_REVISION_MINOR_MASK                     0x000000ff
#define BCHP_HIFIDAC_CTRL0_REVISION_MINOR_SHIFT                    0

/***************************************************************************
 *RESET - Reset
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: RESET :: reserved0 [31:09] */
#define BCHP_HIFIDAC_CTRL0_RESET_reserved0_MASK                    0xfffffe00
#define BCHP_HIFIDAC_CTRL0_RESET_reserved0_SHIFT                   9

/* HIFIDAC_CTRL0 :: RESET :: INIT_FIFO_PTRS [08:08] */
#define BCHP_HIFIDAC_CTRL0_RESET_INIT_FIFO_PTRS_MASK               0x00000100
#define BCHP_HIFIDAC_CTRL0_RESET_INIT_FIFO_PTRS_SHIFT              8
#define BCHP_HIFIDAC_CTRL0_RESET_INIT_FIFO_PTRS_Initialize         1
#define BCHP_HIFIDAC_CTRL0_RESET_INIT_FIFO_PTRS_Normal_operation   0

/* HIFIDAC_CTRL0 :: RESET :: reserved1 [07:04] */
#define BCHP_HIFIDAC_CTRL0_RESET_reserved1_MASK                    0x000000f0
#define BCHP_HIFIDAC_CTRL0_RESET_reserved1_SHIFT                   4

/* HIFIDAC_CTRL0 :: RESET :: SYNC_RESET_RATEMGR [03:03] */
#define BCHP_HIFIDAC_CTRL0_RESET_SYNC_RESET_RATEMGR_MASK           0x00000008
#define BCHP_HIFIDAC_CTRL0_RESET_SYNC_RESET_RATEMGR_SHIFT          3
#define BCHP_HIFIDAC_CTRL0_RESET_SYNC_RESET_RATEMGR_Reset          1
#define BCHP_HIFIDAC_CTRL0_RESET_SYNC_RESET_RATEMGR_Normal_operation 0

/* HIFIDAC_CTRL0 :: RESET :: SYNC_RESET_MOD [02:02] */
#define BCHP_HIFIDAC_CTRL0_RESET_SYNC_RESET_MOD_MASK               0x00000004
#define BCHP_HIFIDAC_CTRL0_RESET_SYNC_RESET_MOD_SHIFT              2
#define BCHP_HIFIDAC_CTRL0_RESET_SYNC_RESET_MOD_Reset              1
#define BCHP_HIFIDAC_CTRL0_RESET_SYNC_RESET_MOD_Normal_operation   0

/* HIFIDAC_CTRL0 :: RESET :: SYNC_RESET_CIC [01:01] */
#define BCHP_HIFIDAC_CTRL0_RESET_SYNC_RESET_CIC_MASK               0x00000002
#define BCHP_HIFIDAC_CTRL0_RESET_SYNC_RESET_CIC_SHIFT              1
#define BCHP_HIFIDAC_CTRL0_RESET_SYNC_RESET_CIC_Reset              1
#define BCHP_HIFIDAC_CTRL0_RESET_SYNC_RESET_CIC_Normal_operation   0

/* HIFIDAC_CTRL0 :: RESET :: SYNC_RESET [00:00] */
#define BCHP_HIFIDAC_CTRL0_RESET_SYNC_RESET_MASK                   0x00000001
#define BCHP_HIFIDAC_CTRL0_RESET_SYNC_RESET_SHIFT                  0
#define BCHP_HIFIDAC_CTRL0_RESET_SYNC_RESET_Reset                  1
#define BCHP_HIFIDAC_CTRL0_RESET_SYNC_RESET_Normal_operation       0

/***************************************************************************
 *CONFIG - Audio ASRC/DAC Configuration
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: CONFIG :: reserved0 [31:26] */
#define BCHP_HIFIDAC_CTRL0_CONFIG_reserved0_MASK                   0xfc000000
#define BCHP_HIFIDAC_CTRL0_CONFIG_reserved0_SHIFT                  26

/* HIFIDAC_CTRL0 :: CONFIG :: FIR_MODE [25:24] */
#define BCHP_HIFIDAC_CTRL0_CONFIG_FIR_MODE_MASK                    0x03000000
#define BCHP_HIFIDAC_CTRL0_CONFIG_FIR_MODE_SHIFT                   24
#define BCHP_HIFIDAC_CTRL0_CONFIG_FIR_MODE_BTSC_bypass             3
#define BCHP_HIFIDAC_CTRL0_CONFIG_FIR_MODE_Mode_reserved           2
#define BCHP_HIFIDAC_CTRL0_CONFIG_FIR_MODE_Audio_over100kHz        1
#define BCHP_HIFIDAC_CTRL0_CONFIG_FIR_MODE_Audio_under100kHz       0

/* HIFIDAC_CTRL0 :: CONFIG :: reserved_for_eco1 [23:22] */
#define BCHP_HIFIDAC_CTRL0_CONFIG_reserved_for_eco1_MASK           0x00c00000
#define BCHP_HIFIDAC_CTRL0_CONFIG_reserved_for_eco1_SHIFT          22

/* HIFIDAC_CTRL0 :: CONFIG :: MAPPER_MUTETYPE [21:20] */
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_MUTETYPE_MASK             0x00300000
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_MUTETYPE_SHIFT            20
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_MUTETYPE_Reserved         3
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_MUTETYPE_Use_reg_val      2
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_MUTETYPE_Drive_5555       1
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_MUTETYPE_Drive_aaaa       0

/* HIFIDAC_CTRL0 :: CONFIG :: MAPPER_SOFTMUTE_RIGHT [19:19] */
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_SOFTMUTE_RIGHT_MASK       0x00080000
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_SOFTMUTE_RIGHT_SHIFT      19
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_SOFTMUTE_RIGHT_Mute       1
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_SOFTMUTE_RIGHT_Normal_operation 0

/* HIFIDAC_CTRL0 :: CONFIG :: MAPPER_SOFTMUTE_LEFT [18:18] */
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_SOFTMUTE_LEFT_MASK        0x00040000
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_SOFTMUTE_LEFT_SHIFT       18
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_SOFTMUTE_LEFT_Mute        1
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_SOFTMUTE_LEFT_Normal_operation 0

/* HIFIDAC_CTRL0 :: CONFIG :: MAPPER_SELECT_RIGHT [17:17] */
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_SELECT_RIGHT_MASK         0x00020000
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_SELECT_RIGHT_SHIFT        17
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_SELECT_RIGHT_Right        1
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_SELECT_RIGHT_Left         0

/* HIFIDAC_CTRL0 :: CONFIG :: MAPPER_SELECT_LEFT [16:16] */
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_SELECT_LEFT_MASK          0x00010000
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_SELECT_LEFT_SHIFT         16
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_SELECT_LEFT_Right         1
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_SELECT_LEFT_Left          0

/* HIFIDAC_CTRL0 :: CONFIG :: reserved_for_eco2 [15:15] */
#define BCHP_HIFIDAC_CTRL0_CONFIG_reserved_for_eco2_MASK           0x00008000
#define BCHP_HIFIDAC_CTRL0_CONFIG_reserved_for_eco2_SHIFT          15

/* HIFIDAC_CTRL0 :: CONFIG :: MUTE_ON_MAX_ATTEN [14:14] */
#define BCHP_HIFIDAC_CTRL0_CONFIG_MUTE_ON_MAX_ATTEN_MASK           0x00004000
#define BCHP_HIFIDAC_CTRL0_CONFIG_MUTE_ON_MAX_ATTEN_SHIFT          14
#define BCHP_HIFIDAC_CTRL0_CONFIG_MUTE_ON_MAX_ATTEN_Enable         1
#define BCHP_HIFIDAC_CTRL0_CONFIG_MUTE_ON_MAX_ATTEN_Disable        0

/* HIFIDAC_CTRL0 :: CONFIG :: AUTOMUTE_ON_ZERO_ENA [13:13] */
#define BCHP_HIFIDAC_CTRL0_CONFIG_AUTOMUTE_ON_ZERO_ENA_MASK        0x00002000
#define BCHP_HIFIDAC_CTRL0_CONFIG_AUTOMUTE_ON_ZERO_ENA_SHIFT       13
#define BCHP_HIFIDAC_CTRL0_CONFIG_AUTOMUTE_ON_ZERO_ENA_Enable      1
#define BCHP_HIFIDAC_CTRL0_CONFIG_AUTOMUTE_ON_ZERO_ENA_Disable     0

/* HIFIDAC_CTRL0 :: CONFIG :: AMUTE_THRESHOLD [12:08] */
#define BCHP_HIFIDAC_CTRL0_CONFIG_AMUTE_THRESHOLD_MASK             0x00001f00
#define BCHP_HIFIDAC_CTRL0_CONFIG_AMUTE_THRESHOLD_SHIFT            8

/* HIFIDAC_CTRL0 :: CONFIG :: AMUTE_NUM_ZEROS [07:04] */
#define BCHP_HIFIDAC_CTRL0_CONFIG_AMUTE_NUM_ZEROS_MASK             0x000000f0
#define BCHP_HIFIDAC_CTRL0_CONFIG_AMUTE_NUM_ZEROS_SHIFT            4

/* HIFIDAC_CTRL0 :: CONFIG :: AUTO_INIT_FIFO [03:03] */
#define BCHP_HIFIDAC_CTRL0_CONFIG_AUTO_INIT_FIFO_MASK              0x00000008
#define BCHP_HIFIDAC_CTRL0_CONFIG_AUTO_INIT_FIFO_SHIFT             3
#define BCHP_HIFIDAC_CTRL0_CONFIG_AUTO_INIT_FIFO_Allow_auto_init   1
#define BCHP_HIFIDAC_CTRL0_CONFIG_AUTO_INIT_FIFO_Manual_only       0

/* HIFIDAC_CTRL0 :: CONFIG :: MAPPER_SOFTMUTE [02:02] */
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_SOFTMUTE_MASK             0x00000004
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_SOFTMUTE_SHIFT            2
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_SOFTMUTE_Mute             1
#define BCHP_HIFIDAC_CTRL0_CONFIG_MAPPER_SOFTMUTE_Normal_operation 0

/* HIFIDAC_CTRL0 :: CONFIG :: RFMOD_MUTE [01:01] */
#define BCHP_HIFIDAC_CTRL0_CONFIG_RFMOD_MUTE_MASK                  0x00000002
#define BCHP_HIFIDAC_CTRL0_CONFIG_RFMOD_MUTE_SHIFT                 1
#define BCHP_HIFIDAC_CTRL0_CONFIG_RFMOD_MUTE_Mute                  1
#define BCHP_HIFIDAC_CTRL0_CONFIG_RFMOD_MUTE_Normal_operation      0

/* HIFIDAC_CTRL0 :: CONFIG :: CIC_ORDER [00:00] */
#define BCHP_HIFIDAC_CTRL0_CONFIG_CIC_ORDER_MASK                   0x00000001
#define BCHP_HIFIDAC_CTRL0_CONFIG_CIC_ORDER_SHIFT                  0
#define BCHP_HIFIDAC_CTRL0_CONFIG_CIC_ORDER_First_order            1
#define BCHP_HIFIDAC_CTRL0_CONFIG_CIC_ORDER_Second_order           0

/***************************************************************************
 *RANGE - Range Select
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: RANGE :: reserved0 [31:15] */
#define BCHP_HIFIDAC_CTRL0_RANGE_reserved0_MASK                    0xffff8000
#define BCHP_HIFIDAC_CTRL0_RANGE_reserved0_SHIFT                   15

/* HIFIDAC_CTRL0 :: RANGE :: CIC [14:12] */
#define BCHP_HIFIDAC_CTRL0_RANGE_CIC_MASK                          0x00007000
#define BCHP_HIFIDAC_CTRL0_RANGE_CIC_SHIFT                         12

/* HIFIDAC_CTRL0 :: RANGE :: ASRCOUT [11:08] */
#define BCHP_HIFIDAC_CTRL0_RANGE_ASRCOUT_MASK                      0x00000f00
#define BCHP_HIFIDAC_CTRL0_RANGE_ASRCOUT_SHIFT                     8

/* HIFIDAC_CTRL0 :: RANGE :: RFMOD [07:04] */
#define BCHP_HIFIDAC_CTRL0_RANGE_RFMOD_MASK                        0x000000f0
#define BCHP_HIFIDAC_CTRL0_RANGE_RFMOD_SHIFT                       4

/* HIFIDAC_CTRL0 :: RANGE :: reserved1 [03:03] */
#define BCHP_HIFIDAC_CTRL0_RANGE_reserved1_MASK                    0x00000008
#define BCHP_HIFIDAC_CTRL0_RANGE_reserved1_SHIFT                   3

/* HIFIDAC_CTRL0 :: RANGE :: TAYLOR [02:00] */
#define BCHP_HIFIDAC_CTRL0_RANGE_TAYLOR_MASK                       0x00000007
#define BCHP_HIFIDAC_CTRL0_RANGE_TAYLOR_SHIFT                      0

/***************************************************************************
 *SCALECFG - Audio scale configuration
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: SCALECFG :: reserved0 [31:21] */
#define BCHP_HIFIDAC_CTRL0_SCALECFG_reserved0_MASK                 0xffe00000
#define BCHP_HIFIDAC_CTRL0_SCALECFG_reserved0_SHIFT                21

/* HIFIDAC_CTRL0 :: SCALECFG :: SAMPS_PER_STEP [20:16] */
#define BCHP_HIFIDAC_CTRL0_SCALECFG_SAMPS_PER_STEP_MASK            0x001f0000
#define BCHP_HIFIDAC_CTRL0_SCALECFG_SAMPS_PER_STEP_SHIFT           16

/* HIFIDAC_CTRL0 :: SCALECFG :: reserved1 [15:12] */
#define BCHP_HIFIDAC_CTRL0_SCALECFG_reserved1_MASK                 0x0000f000
#define BCHP_HIFIDAC_CTRL0_SCALECFG_reserved1_SHIFT                12

/* HIFIDAC_CTRL0 :: SCALECFG :: STEPSIZE [11:00] */
#define BCHP_HIFIDAC_CTRL0_SCALECFG_STEPSIZE_MASK                  0x00000fff
#define BCHP_HIFIDAC_CTRL0_SCALECFG_STEPSIZE_SHIFT                 0

/***************************************************************************
 *SCALE - Audio ASRC scale
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: SCALE :: reserved0 [31:17] */
#define BCHP_HIFIDAC_CTRL0_SCALE_reserved0_MASK                    0xfffe0000
#define BCHP_HIFIDAC_CTRL0_SCALE_reserved0_SHIFT                   17

/* HIFIDAC_CTRL0 :: SCALE :: SCALE [16:00] */
#define BCHP_HIFIDAC_CTRL0_SCALE_SCALE_MASK                        0x0001ffff
#define BCHP_HIFIDAC_CTRL0_SCALE_SCALE_SHIFT                       0

/***************************************************************************
 *DAC_VOLUMECFG - Audio DAC volume configuration
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: DAC_VOLUMECFG :: reserved0 [31:21] */
#define BCHP_HIFIDAC_CTRL0_DAC_VOLUMECFG_reserved0_MASK            0xffe00000
#define BCHP_HIFIDAC_CTRL0_DAC_VOLUMECFG_reserved0_SHIFT           21

/* HIFIDAC_CTRL0 :: DAC_VOLUMECFG :: SAMPS_PER_STEP [20:16] */
#define BCHP_HIFIDAC_CTRL0_DAC_VOLUMECFG_SAMPS_PER_STEP_MASK       0x001f0000
#define BCHP_HIFIDAC_CTRL0_DAC_VOLUMECFG_SAMPS_PER_STEP_SHIFT      16

/* HIFIDAC_CTRL0 :: DAC_VOLUMECFG :: reserved1 [15:12] */
#define BCHP_HIFIDAC_CTRL0_DAC_VOLUMECFG_reserved1_MASK            0x0000f000
#define BCHP_HIFIDAC_CTRL0_DAC_VOLUMECFG_reserved1_SHIFT           12

/* HIFIDAC_CTRL0 :: DAC_VOLUMECFG :: STEPSIZE [11:00] */
#define BCHP_HIFIDAC_CTRL0_DAC_VOLUMECFG_STEPSIZE_MASK             0x00000fff
#define BCHP_HIFIDAC_CTRL0_DAC_VOLUMECFG_STEPSIZE_SHIFT            0

/***************************************************************************
 *DAC_VOLUME - Audio DAC volume
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: DAC_VOLUME :: reserved0 [31:17] */
#define BCHP_HIFIDAC_CTRL0_DAC_VOLUME_reserved0_MASK               0xfffe0000
#define BCHP_HIFIDAC_CTRL0_DAC_VOLUME_reserved0_SHIFT              17

/* HIFIDAC_CTRL0 :: DAC_VOLUME :: DAC_VOL [16:00] */
#define BCHP_HIFIDAC_CTRL0_DAC_VOLUME_DAC_VOL_MASK                 0x0001ffff
#define BCHP_HIFIDAC_CTRL0_DAC_VOLUME_DAC_VOL_SHIFT                0

/***************************************************************************
 *PEAK_CONFIG - Peaking filter configuration
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: PEAK_CONFIG :: reserved0 [31:02] */
#define BCHP_HIFIDAC_CTRL0_PEAK_CONFIG_reserved0_MASK              0xfffffffc
#define BCHP_HIFIDAC_CTRL0_PEAK_CONFIG_reserved0_SHIFT             2

/* HIFIDAC_CTRL0 :: PEAK_CONFIG :: PEAK_ROUND_TYPE [01:01] */
#define BCHP_HIFIDAC_CTRL0_PEAK_CONFIG_PEAK_ROUND_TYPE_MASK        0x00000002
#define BCHP_HIFIDAC_CTRL0_PEAK_CONFIG_PEAK_ROUND_TYPE_SHIFT       1
#define BCHP_HIFIDAC_CTRL0_PEAK_CONFIG_PEAK_ROUND_TYPE_Magnitude_truncate 1
#define BCHP_HIFIDAC_CTRL0_PEAK_CONFIG_PEAK_ROUND_TYPE_Plus_point5_truncate 0

/* HIFIDAC_CTRL0 :: PEAK_CONFIG :: PEAK_ENABLE [00:00] */
#define BCHP_HIFIDAC_CTRL0_PEAK_CONFIG_PEAK_ENABLE_MASK            0x00000001
#define BCHP_HIFIDAC_CTRL0_PEAK_CONFIG_PEAK_ENABLE_SHIFT           0
#define BCHP_HIFIDAC_CTRL0_PEAK_CONFIG_PEAK_ENABLE_Enable          1
#define BCHP_HIFIDAC_CTRL0_PEAK_CONFIG_PEAK_ENABLE_Disable         0

/***************************************************************************
 *PEAK_GAIN - Peaking filter gain
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: PEAK_GAIN :: reserved0 [31:18] */
#define BCHP_HIFIDAC_CTRL0_PEAK_GAIN_reserved0_MASK                0xfffc0000
#define BCHP_HIFIDAC_CTRL0_PEAK_GAIN_reserved0_SHIFT               18

/* HIFIDAC_CTRL0 :: PEAK_GAIN :: PEAK_GAIN [17:00] */
#define BCHP_HIFIDAC_CTRL0_PEAK_GAIN_PEAK_GAIN_MASK                0x0003ffff
#define BCHP_HIFIDAC_CTRL0_PEAK_GAIN_PEAK_GAIN_SHIFT               0

/***************************************************************************
 *PEAK_A1 - Peaking filter a1 coefficient
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: PEAK_A1 :: reserved0 [31:18] */
#define BCHP_HIFIDAC_CTRL0_PEAK_A1_reserved0_MASK                  0xfffc0000
#define BCHP_HIFIDAC_CTRL0_PEAK_A1_reserved0_SHIFT                 18

/* HIFIDAC_CTRL0 :: PEAK_A1 :: PEAK_A1 [17:00] */
#define BCHP_HIFIDAC_CTRL0_PEAK_A1_PEAK_A1_MASK                    0x0003ffff
#define BCHP_HIFIDAC_CTRL0_PEAK_A1_PEAK_A1_SHIFT                   0

/***************************************************************************
 *PEAK_A2 - Peaking filter a2 coefficient
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: PEAK_A2 :: reserved0 [31:18] */
#define BCHP_HIFIDAC_CTRL0_PEAK_A2_reserved0_MASK                  0xfffc0000
#define BCHP_HIFIDAC_CTRL0_PEAK_A2_reserved0_SHIFT                 18

/* HIFIDAC_CTRL0 :: PEAK_A2 :: PEAK_A2 [17:00] */
#define BCHP_HIFIDAC_CTRL0_PEAK_A2_PEAK_A2_MASK                    0x0003ffff
#define BCHP_HIFIDAC_CTRL0_PEAK_A2_PEAK_A2_SHIFT                   0

/***************************************************************************
 *MOD_CONTROL - Digital modulator control
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: MOD_CONTROL :: reserved0 [31:02] */
#define BCHP_HIFIDAC_CTRL0_MOD_CONTROL_reserved0_MASK              0xfffffffc
#define BCHP_HIFIDAC_CTRL0_MOD_CONTROL_reserved0_SHIFT             2

/* HIFIDAC_CTRL0 :: MOD_CONTROL :: USE_BAL [01:01] */
#define BCHP_HIFIDAC_CTRL0_MOD_CONTROL_USE_BAL_MASK                0x00000002
#define BCHP_HIFIDAC_CTRL0_MOD_CONTROL_USE_BAL_SHIFT               1
#define BCHP_HIFIDAC_CTRL0_MOD_CONTROL_USE_BAL_Enable              1
#define BCHP_HIFIDAC_CTRL0_MOD_CONTROL_USE_BAL_Disable             0

/* HIFIDAC_CTRL0 :: MOD_CONTROL :: DEM_TONE [00:00] */
#define BCHP_HIFIDAC_CTRL0_MOD_CONTROL_DEM_TONE_MASK               0x00000001
#define BCHP_HIFIDAC_CTRL0_MOD_CONTROL_DEM_TONE_SHIFT              0
#define BCHP_HIFIDAC_CTRL0_MOD_CONTROL_DEM_TONE_Enable             1
#define BCHP_HIFIDAC_CTRL0_MOD_CONTROL_DEM_TONE_Disable            0

/***************************************************************************
 *MOD_DITHER - Digital modulator dither control
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: MOD_DITHER :: reserved0 [31:16] */
#define BCHP_HIFIDAC_CTRL0_MOD_DITHER_reserved0_MASK               0xffff0000
#define BCHP_HIFIDAC_CTRL0_MOD_DITHER_reserved0_SHIFT              16

/* HIFIDAC_CTRL0 :: MOD_DITHER :: SCALE [15:08] */
#define BCHP_HIFIDAC_CTRL0_MOD_DITHER_SCALE_MASK                   0x0000ff00
#define BCHP_HIFIDAC_CTRL0_MOD_DITHER_SCALE_SHIFT                  8

/* HIFIDAC_CTRL0 :: MOD_DITHER :: reserved1 [07:01] */
#define BCHP_HIFIDAC_CTRL0_MOD_DITHER_reserved1_MASK               0x000000fe
#define BCHP_HIFIDAC_CTRL0_MOD_DITHER_reserved1_SHIFT              1

/* HIFIDAC_CTRL0 :: MOD_DITHER :: reserved_for_eco2 [00:00] */
#define BCHP_HIFIDAC_CTRL0_MOD_DITHER_reserved_for_eco2_MASK       0x00000001
#define BCHP_HIFIDAC_CTRL0_MOD_DITHER_reserved_for_eco2_SHIFT      0

/***************************************************************************
 *MOD_SAT_CNT_L - Left digital modulator saturation count status
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: MOD_SAT_CNT_L :: reserved0 [31:24] */
#define BCHP_HIFIDAC_CTRL0_MOD_SAT_CNT_L_reserved0_MASK            0xff000000
#define BCHP_HIFIDAC_CTRL0_MOD_SAT_CNT_L_reserved0_SHIFT           24

/* HIFIDAC_CTRL0 :: MOD_SAT_CNT_L :: QUANT [23:16] */
#define BCHP_HIFIDAC_CTRL0_MOD_SAT_CNT_L_QUANT_MASK                0x00ff0000
#define BCHP_HIFIDAC_CTRL0_MOD_SAT_CNT_L_QUANT_SHIFT               16

/* HIFIDAC_CTRL0 :: MOD_SAT_CNT_L :: INTEG1 [15:08] */
#define BCHP_HIFIDAC_CTRL0_MOD_SAT_CNT_L_INTEG1_MASK               0x0000ff00
#define BCHP_HIFIDAC_CTRL0_MOD_SAT_CNT_L_INTEG1_SHIFT              8

/* HIFIDAC_CTRL0 :: MOD_SAT_CNT_L :: INTEG0 [07:00] */
#define BCHP_HIFIDAC_CTRL0_MOD_SAT_CNT_L_INTEG0_MASK               0x000000ff
#define BCHP_HIFIDAC_CTRL0_MOD_SAT_CNT_L_INTEG0_SHIFT              0

/***************************************************************************
 *MOD_SAT_CNT_R - Right digital modulator saturation count status
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: MOD_SAT_CNT_R :: reserved0 [31:24] */
#define BCHP_HIFIDAC_CTRL0_MOD_SAT_CNT_R_reserved0_MASK            0xff000000
#define BCHP_HIFIDAC_CTRL0_MOD_SAT_CNT_R_reserved0_SHIFT           24

/* HIFIDAC_CTRL0 :: MOD_SAT_CNT_R :: QUANT [23:16] */
#define BCHP_HIFIDAC_CTRL0_MOD_SAT_CNT_R_QUANT_MASK                0x00ff0000
#define BCHP_HIFIDAC_CTRL0_MOD_SAT_CNT_R_QUANT_SHIFT               16

/* HIFIDAC_CTRL0 :: MOD_SAT_CNT_R :: INTEG1 [15:08] */
#define BCHP_HIFIDAC_CTRL0_MOD_SAT_CNT_R_INTEG1_MASK               0x0000ff00
#define BCHP_HIFIDAC_CTRL0_MOD_SAT_CNT_R_INTEG1_SHIFT              8

/* HIFIDAC_CTRL0 :: MOD_SAT_CNT_R :: INTEG0 [07:00] */
#define BCHP_HIFIDAC_CTRL0_MOD_SAT_CNT_R_INTEG0_MASK               0x000000ff
#define BCHP_HIFIDAC_CTRL0_MOD_SAT_CNT_R_INTEG0_SHIFT              0

/***************************************************************************
 *RATEMGRCFG - Rate Manager Oversample Rate
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: RATEMGRCFG :: reserved0 [31:05] */
#define BCHP_HIFIDAC_CTRL0_RATEMGRCFG_reserved0_MASK               0xffffffe0
#define BCHP_HIFIDAC_CTRL0_RATEMGRCFG_reserved0_SHIFT              5

/* HIFIDAC_CTRL0 :: RATEMGRCFG :: TIMEBASE3_SEL [04:04] */
#define BCHP_HIFIDAC_CTRL0_RATEMGRCFG_TIMEBASE3_SEL_MASK           0x00000010
#define BCHP_HIFIDAC_CTRL0_RATEMGRCFG_TIMEBASE3_SEL_SHIFT          4
#define BCHP_HIFIDAC_CTRL0_RATEMGRCFG_TIMEBASE3_SEL_Normal         1
#define BCHP_HIFIDAC_CTRL0_RATEMGRCFG_TIMEBASE3_SEL_Test           0

/* HIFIDAC_CTRL0 :: RATEMGRCFG :: reserved1 [03:01] */
#define BCHP_HIFIDAC_CTRL0_RATEMGRCFG_reserved1_MASK               0x0000000e
#define BCHP_HIFIDAC_CTRL0_RATEMGRCFG_reserved1_SHIFT              1

/* HIFIDAC_CTRL0 :: RATEMGRCFG :: OVERSAMPLE [00:00] */
#define BCHP_HIFIDAC_CTRL0_RATEMGRCFG_OVERSAMPLE_MASK              0x00000001
#define BCHP_HIFIDAC_CTRL0_RATEMGRCFG_OVERSAMPLE_SHIFT             0
#define BCHP_HIFIDAC_CTRL0_RATEMGRCFG_OVERSAMPLE_Fs256             1
#define BCHP_HIFIDAC_CTRL0_RATEMGRCFG_OVERSAMPLE_Fs64              0

/***************************************************************************
 *STATUS - Hifidac status
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: STATUS :: reserved0 [31:02] */
#define BCHP_HIFIDAC_CTRL0_STATUS_reserved0_MASK                   0xfffffffc
#define BCHP_HIFIDAC_CTRL0_STATUS_reserved0_SHIFT                  2

/* HIFIDAC_CTRL0 :: STATUS :: SCALE_AT_TARGET [01:01] */
#define BCHP_HIFIDAC_CTRL0_STATUS_SCALE_AT_TARGET_MASK             0x00000002
#define BCHP_HIFIDAC_CTRL0_STATUS_SCALE_AT_TARGET_SHIFT            1

/* HIFIDAC_CTRL0 :: STATUS :: VOLUME_AT_TARGET [00:00] */
#define BCHP_HIFIDAC_CTRL0_STATUS_VOLUME_AT_TARGET_MASK            0x00000001
#define BCHP_HIFIDAC_CTRL0_STATUS_VOLUME_AT_TARGET_SHIFT           0

/***************************************************************************
 *MUTECTRL - RFMOD and DAC mute control
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: MUTECTRL :: reserved0 [31:26] */
#define BCHP_HIFIDAC_CTRL0_MUTECTRL_reserved0_MASK                 0xfc000000
#define BCHP_HIFIDAC_CTRL0_MUTECTRL_reserved0_SHIFT                26

/* HIFIDAC_CTRL0 :: MUTECTRL :: INIT_FIFO_ON_MUTE [25:25] */
#define BCHP_HIFIDAC_CTRL0_MUTECTRL_INIT_FIFO_ON_MUTE_MASK         0x02000000
#define BCHP_HIFIDAC_CTRL0_MUTECTRL_INIT_FIFO_ON_MUTE_SHIFT        25
#define BCHP_HIFIDAC_CTRL0_MUTECTRL_INIT_FIFO_ON_MUTE_Enable       1
#define BCHP_HIFIDAC_CTRL0_MUTECTRL_INIT_FIFO_ON_MUTE_Disable      0

/* HIFIDAC_CTRL0 :: MUTECTRL :: MUTEALL [24:24] */
#define BCHP_HIFIDAC_CTRL0_MUTECTRL_MUTEALL_MASK                   0x01000000
#define BCHP_HIFIDAC_CTRL0_MUTECTRL_MUTEALL_SHIFT                  24
#define BCHP_HIFIDAC_CTRL0_MUTECTRL_MUTEALL_Ramp_mute              1
#define BCHP_HIFIDAC_CTRL0_MUTECTRL_MUTEALL_Ramp_unmute            0

/* HIFIDAC_CTRL0 :: MUTECTRL :: UNMUTE_DELAY [23:00] */
#define BCHP_HIFIDAC_CTRL0_MUTECTRL_UNMUTE_DELAY_MASK              0x00ffffff
#define BCHP_HIFIDAC_CTRL0_MUTECTRL_UNMUTE_DELAY_SHIFT             0

/***************************************************************************
 *MUTECTRL_DACONLY - DAC only mute control
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: MUTECTRL_DACONLY :: reserved0 [31:01] */
#define BCHP_HIFIDAC_CTRL0_MUTECTRL_DACONLY_reserved0_MASK         0xfffffffe
#define BCHP_HIFIDAC_CTRL0_MUTECTRL_DACONLY_reserved0_SHIFT        1

/* HIFIDAC_CTRL0 :: MUTECTRL_DACONLY :: MUTEDAC [00:00] */
#define BCHP_HIFIDAC_CTRL0_MUTECTRL_DACONLY_MUTEDAC_MASK           0x00000001
#define BCHP_HIFIDAC_CTRL0_MUTECTRL_DACONLY_MUTEDAC_SHIFT          0
#define BCHP_HIFIDAC_CTRL0_MUTECTRL_DACONLY_MUTEDAC_Ramp_mute      1
#define BCHP_HIFIDAC_CTRL0_MUTECTRL_DACONLY_MUTEDAC_Ramp_unmute    0

/***************************************************************************
 *CURRDAC_CTRL - Current DAC control
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: CURRDAC_CTRL :: reserved0 [31:18] */
#define BCHP_HIFIDAC_CTRL0_CURRDAC_CTRL_reserved0_MASK             0xfffc0000
#define BCHP_HIFIDAC_CTRL0_CURRDAC_CTRL_reserved0_SHIFT            18

/* HIFIDAC_CTRL0 :: CURRDAC_CTRL :: CTRL [17:00] */
#define BCHP_HIFIDAC_CTRL0_CURRDAC_CTRL_CTRL_MASK                  0x0003ffff
#define BCHP_HIFIDAC_CTRL0_CURRDAC_CTRL_CTRL_SHIFT                 0

/***************************************************************************
 *DAC_CONST_VAL - DAC constant value
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: DAC_CONST_VAL :: RIGHT [31:16] */
#define BCHP_HIFIDAC_CTRL0_DAC_CONST_VAL_RIGHT_MASK                0xffff0000
#define BCHP_HIFIDAC_CTRL0_DAC_CONST_VAL_RIGHT_SHIFT               16

/* HIFIDAC_CTRL0 :: DAC_CONST_VAL :: LEFT [15:00] */
#define BCHP_HIFIDAC_CTRL0_DAC_CONST_VAL_LEFT_MASK                 0x0000ffff
#define BCHP_HIFIDAC_CTRL0_DAC_CONST_VAL_LEFT_SHIFT                0

/***************************************************************************
 *TEST - Test mode
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: TEST :: reserved0 [31:21] */
#define BCHP_HIFIDAC_CTRL0_TEST_reserved0_MASK                     0xffe00000
#define BCHP_HIFIDAC_CTRL0_TEST_reserved0_SHIFT                    21

/* HIFIDAC_CTRL0 :: TEST :: TESTTONE_REPEAT_RIGHT [20:16] */
#define BCHP_HIFIDAC_CTRL0_TEST_TESTTONE_REPEAT_RIGHT_MASK         0x001f0000
#define BCHP_HIFIDAC_CTRL0_TEST_TESTTONE_REPEAT_RIGHT_SHIFT        16

/* HIFIDAC_CTRL0 :: TEST :: reserved1 [15:14] */
#define BCHP_HIFIDAC_CTRL0_TEST_reserved1_MASK                     0x0000c000
#define BCHP_HIFIDAC_CTRL0_TEST_reserved1_SHIFT                    14

/* HIFIDAC_CTRL0 :: TEST :: TESTTONE_REPEAT_LEFT [13:08] */
#define BCHP_HIFIDAC_CTRL0_TEST_TESTTONE_REPEAT_LEFT_MASK          0x00003f00
#define BCHP_HIFIDAC_CTRL0_TEST_TESTTONE_REPEAT_LEFT_SHIFT         8

/* HIFIDAC_CTRL0 :: TEST :: TESTTONE_RIGHT [07:07] */
#define BCHP_HIFIDAC_CTRL0_TEST_TESTTONE_RIGHT_MASK                0x00000080
#define BCHP_HIFIDAC_CTRL0_TEST_TESTTONE_RIGHT_SHIFT               7
#define BCHP_HIFIDAC_CTRL0_TEST_TESTTONE_RIGHT_Output_testtone     1
#define BCHP_HIFIDAC_CTRL0_TEST_TESTTONE_RIGHT_Output_zero         0

/* HIFIDAC_CTRL0 :: TEST :: TESTTONE_LEFT [06:06] */
#define BCHP_HIFIDAC_CTRL0_TEST_TESTTONE_LEFT_MASK                 0x00000040
#define BCHP_HIFIDAC_CTRL0_TEST_TESTTONE_LEFT_SHIFT                6
#define BCHP_HIFIDAC_CTRL0_TEST_TESTTONE_LEFT_Output_testtone      1
#define BCHP_HIFIDAC_CTRL0_TEST_TESTTONE_LEFT_Output_zero          0

/* HIFIDAC_CTRL0 :: TEST :: TESTTONE_SHARE [05:05] */
#define BCHP_HIFIDAC_CTRL0_TEST_TESTTONE_SHARE_MASK                0x00000020
#define BCHP_HIFIDAC_CTRL0_TEST_TESTTONE_SHARE_SHIFT               5
#define BCHP_HIFIDAC_CTRL0_TEST_TESTTONE_SHARE_Share               1
#define BCHP_HIFIDAC_CTRL0_TEST_TESTTONE_SHARE_Dont_share          0

/* HIFIDAC_CTRL0 :: TEST :: TESTTONE_ENABLE [04:04] */
#define BCHP_HIFIDAC_CTRL0_TEST_TESTTONE_ENABLE_MASK               0x00000010
#define BCHP_HIFIDAC_CTRL0_TEST_TESTTONE_ENABLE_SHIFT              4
#define BCHP_HIFIDAC_CTRL0_TEST_TESTTONE_ENABLE_Enable             1
#define BCHP_HIFIDAC_CTRL0_TEST_TESTTONE_ENABLE_Normal_operation   0

/* HIFIDAC_CTRL0 :: TEST :: reserved2 [03:01] */
#define BCHP_HIFIDAC_CTRL0_TEST_reserved2_MASK                     0x0000000e
#define BCHP_HIFIDAC_CTRL0_TEST_reserved2_SHIFT                    1

/* HIFIDAC_CTRL0 :: TEST :: RAM_BUF_SEL [00:00] */
#define BCHP_HIFIDAC_CTRL0_TEST_RAM_BUF_SEL_MASK                   0x00000001
#define BCHP_HIFIDAC_CTRL0_TEST_RAM_BUF_SEL_SHIFT                  0
#define BCHP_HIFIDAC_CTRL0_TEST_RAM_BUF_SEL_Pingpong               1
#define BCHP_HIFIDAC_CTRL0_TEST_RAM_BUF_SEL_Samples                0

/***************************************************************************
 *TESTTONE_SAMPLE_%i - Test tone sample
 ***************************************************************************/
#define BCHP_HIFIDAC_CTRL0_TESTTONE_SAMPLE_i_ARRAY_BASE            0x0061b100
#define BCHP_HIFIDAC_CTRL0_TESTTONE_SAMPLE_i_ARRAY_START           0
#define BCHP_HIFIDAC_CTRL0_TESTTONE_SAMPLE_i_ARRAY_END             63
#define BCHP_HIFIDAC_CTRL0_TESTTONE_SAMPLE_i_ARRAY_ELEMENT_SIZE    32

/***************************************************************************
 *TESTTONE_SAMPLE_%i - Test tone sample
 ***************************************************************************/
/* HIFIDAC_CTRL0 :: TESTTONE_SAMPLE_i :: reserved0 [31:20] */
#define BCHP_HIFIDAC_CTRL0_TESTTONE_SAMPLE_i_reserved0_MASK        0xfff00000
#define BCHP_HIFIDAC_CTRL0_TESTTONE_SAMPLE_i_reserved0_SHIFT       20

/* HIFIDAC_CTRL0 :: TESTTONE_SAMPLE_i :: TESTTONE_SAMPLE [19:00] */
#define BCHP_HIFIDAC_CTRL0_TESTTONE_SAMPLE_i_TESTTONE_SAMPLE_MASK  0x000fffff
#define BCHP_HIFIDAC_CTRL0_TESTTONE_SAMPLE_i_TESTTONE_SAMPLE_SHIFT 0


#endif /* #ifndef BCHP_HIFIDAC_CTRL0_H__ */

/* End of File */
