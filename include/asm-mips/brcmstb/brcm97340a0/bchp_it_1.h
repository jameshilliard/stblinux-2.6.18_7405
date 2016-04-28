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
 * Date:           Generated on         Fri Mar 20 12:59:54 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_it_1.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 8:33p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_IT_1_H__
#define BCHP_IT_1_H__

/***************************************************************************
 *IT_1 - Input and Timing Control IT_1
 ***************************************************************************/
#define BCHP_IT_1_IT_REV_ID                      0x00182000 /* Revision ID register */
#define BCHP_IT_1_TG_CONFIG                      0x00182008 /* Timing Generator Configuration Register */
#define BCHP_IT_1_ADDR_0_3                       0x0018200c /* Timing Generator Address 0-3 Register */
#define BCHP_IT_1_ADDR_4_6                       0x00182010 /* Timing Generator Address 4-6 Register */
#define BCHP_IT_1_STACK_reg_0_1                  0x00182014 /* General Lookup Registers 0&1 Register */
#define BCHP_IT_1_STACK_reg_2_3                  0x00182018 /* General Lookup Registers 2&3 Register */
#define BCHP_IT_1_STACK_reg_4_5                  0x0018201c /* General Lookup Registers 4&5 Register */
#define BCHP_IT_1_STACK_reg_6_7                  0x00182020 /* General Lookup Registers 6&7 Register */
#define BCHP_IT_1_EVENT_SELECTION                0x00182024 /* Timing Generator Event Selection Register. */
#define BCHP_IT_1_PCL_0                          0x00182028 /* External Digital H/V Syncs and Negative Sync PCL Register. */
#define BCHP_IT_1_PCL_1                          0x0018202c /* Color Burst and Bottles PCL Register. */
#define BCHP_IT_1_PCL_2                          0x00182030 /* External Digital H/V Syncs and U and V flip PCL Register. */
#define BCHP_IT_1_PCL_3                          0x00182034 /* VSync, VBlank, Active Video and Odd/Even Field PCL Register. */
#define BCHP_IT_1_PCL_4                          0x00182038 /* Positive Sync A/B PCL Register. */
#define BCHP_IT_1_PCL_5                          0x0018203c /* Patten Generation PCL Register. */
#define BCHP_IT_1_PCL_6                          0x00182040 /* Positive Sync C/D PCL Register. */
#define BCHP_IT_1_PCL_7                          0x00182044 /* Negative Sync D1 PCL Register. */
#define BCHP_IT_1_PCL_8                          0x00182048 /* Negative Sync D2 PCL Register. */
#define BCHP_IT_1_STACK_reg_8_9                  0x0018204c /* General Lookup Registers 8&9 Register */
#define BCHP_IT_1_BVB_SIZE                       0x00182050 /* BVB Size Register. */
#define BCHP_IT_1_BVB_RSTATUS                    0x00182054 /* BVB status read Register. */
#define BCHP_IT_1_BVB_CSTATUS                    0x00182058 /* BVB status clear Register. */
#define BCHP_IT_1_VEC_TRIGGER_0                  0x0018205c /* VEC Trigger Register 0 */
#define BCHP_IT_1_VEC_TRIGGER_1                  0x00182060 /* VEC Trigger Register 1 */
#define BCHP_IT_1_VEC_CTRL_STAT                  0x00182064 /* VEC Control BUS Status Register */
#define BCHP_IT_1_IT_LCNTR                       0x00182068 /* Line Counter Register */
#define BCHP_IT_1_ALT_RM_CNTRL                   0x0018206c /* ALTERNATE RATE MANAGER CONTROL REGISTER */
#define BCHP_IT_1_ACCESS_CNTRL                   0x00182070 /* VEC Access Control Register */
#define BCHP_IT_1_ACCESS_STATUS                  0x00182074 /* VEC Access Status Register */
#define BCHP_IT_1_MC_ADDR_0                      0x00182078 /* CALLI Immediate register 0 */
#define BCHP_IT_1_MC_ADDR_1                      0x0018207c /* CALLI Immediate register 1 */
#define BCHP_IT_1_MC_ADDR_2                      0x00182080 /* CALLI Immediate register 2 */
#define BCHP_IT_1_MC_ADDR_3                      0x00182084 /* CALLI Immediate register 3 */
#define BCHP_IT_1_MC_ADDR_4                      0x00182088 /* CALLI Immediate register 4 */
#define BCHP_IT_1_MC_ADDR_5                      0x0018208c /* CALLI Immediate register 5 */
#define BCHP_IT_1_MC_ADDR_6                      0x00182090 /* CALLI Immediate register 6 */
#define BCHP_IT_1_MC_ADDR_7                      0x00182094 /* CALLI Immediate register 7 */
#define BCHP_IT_1_MC_ADDR_8                      0x00182098 /* CALLI Immediate register 8 */
#define BCHP_IT_1_MC_ADDR_9                      0x0018209c /* CALLI Immediate register 9 */
#define BCHP_IT_1_MC_ADDR_10                     0x00182100 /* CALLI Immediate register 10 */
#define BCHP_IT_1_MC_ADDR_11                     0x00182104 /* CALLI Immediate register 11 */
#define BCHP_IT_1_MC_ADDR_12                     0x00182108 /* CALLI Immediate register 12 */
#define BCHP_IT_1_MC_ADDR_13                     0x0018210c /* CALLI Immediate register 13 */
#define BCHP_IT_1_MC_ADDR_14                     0x00182110 /* CALLI Immediate register 14 */
#define BCHP_IT_1_MC_ADDR_15                     0x00182114 /* CALLI Immediate register 15 */

/***************************************************************************
 *MICRO_INSTRUCTION%i - Timing Generator RAM Register at location 0..255
 ***************************************************************************/
#define BCHP_IT_1_MICRO_INSTRUCTIONi_ARRAY_BASE                    0x00182200
#define BCHP_IT_1_MICRO_INSTRUCTIONi_ARRAY_START                   0
#define BCHP_IT_1_MICRO_INSTRUCTIONi_ARRAY_END                     255
#define BCHP_IT_1_MICRO_INSTRUCTIONi_ARRAY_ELEMENT_SIZE            32

/***************************************************************************
 *MICRO_INSTRUCTION%i - Timing Generator RAM Register at location 0..255
 ***************************************************************************/
/* IT_1 :: MICRO_INSTRUCTIONi :: reserved0 [31:24] */
#define BCHP_IT_1_MICRO_INSTRUCTIONi_reserved0_MASK                0xff000000
#define BCHP_IT_1_MICRO_INSTRUCTIONi_reserved0_SHIFT               24

/* IT_1 :: MICRO_INSTRUCTIONi :: OPCODE [23:21] */
#define BCHP_IT_1_MICRO_INSTRUCTIONi_OPCODE_MASK                   0x00e00000
#define BCHP_IT_1_MICRO_INSTRUCTIONi_OPCODE_SHIFT                  21
#define BCHP_IT_1_MICRO_INSTRUCTIONi_OPCODE_NOP                    0
#define BCHP_IT_1_MICRO_INSTRUCTIONi_OPCODE_SCOUNT                 1
#define BCHP_IT_1_MICRO_INSTRUCTIONi_OPCODE_ECOUNT                 2
#define BCHP_IT_1_MICRO_INSTRUCTIONi_OPCODE_CALL                   3
#define BCHP_IT_1_MICRO_INSTRUCTIONi_OPCODE_JUMP                   4
#define BCHP_IT_1_MICRO_INSTRUCTIONi_OPCODE_RELOAD                 5
#define BCHP_IT_1_MICRO_INSTRUCTIONi_OPCODE_LOAD                   6
#define BCHP_IT_1_MICRO_INSTRUCTIONi_OPCODE_CALLI                  7

/* IT_1 :: MICRO_INSTRUCTIONi :: RETURN_FLAG [20:20] */
#define BCHP_IT_1_MICRO_INSTRUCTIONi_RETURN_FLAG_MASK              0x00100000
#define BCHP_IT_1_MICRO_INSTRUCTIONi_RETURN_FLAG_SHIFT             20

/* IT_1 :: MICRO_INSTRUCTIONi :: FLAGS_OR_ADDR [19:12] */
#define BCHP_IT_1_MICRO_INSTRUCTIONi_FLAGS_OR_ADDR_MASK            0x000ff000
#define BCHP_IT_1_MICRO_INSTRUCTIONi_FLAGS_OR_ADDR_SHIFT           12

/* union - case ECOUNT [11:00] */
/* IT_1 :: MICRO_INSTRUCTIONi :: ECOUNT :: EVENT_EDGE [11:11] */
#define BCHP_IT_1_MICRO_INSTRUCTIONi_ECOUNT_EVENT_EDGE_MASK        0x00000800
#define BCHP_IT_1_MICRO_INSTRUCTIONi_ECOUNT_EVENT_EDGE_SHIFT       11

/* IT_1 :: MICRO_INSTRUCTIONi :: ECOUNT :: COUNT [10:00] */
#define BCHP_IT_1_MICRO_INSTRUCTIONi_ECOUNT_COUNT_MASK             0x000007ff
#define BCHP_IT_1_MICRO_INSTRUCTIONi_ECOUNT_COUNT_SHIFT            0

/* union - case SCOUNT [11:00] */
/* IT_1 :: MICRO_INSTRUCTIONi :: SCOUNT :: COUNT [11:00] */
#define BCHP_IT_1_MICRO_INSTRUCTIONi_SCOUNT_COUNT_MASK             0x00000fff
#define BCHP_IT_1_MICRO_INSTRUCTIONi_SCOUNT_COUNT_SHIFT            0

/* union - case CALL [11:00] */
/* IT_1 :: MICRO_INSTRUCTIONi :: CALL :: COUNT [11:00] */
#define BCHP_IT_1_MICRO_INSTRUCTIONi_CALL_COUNT_MASK               0x00000fff
#define BCHP_IT_1_MICRO_INSTRUCTIONi_CALL_COUNT_SHIFT              0

/* union - case JUMP [11:00] */
/* IT_1 :: MICRO_INSTRUCTIONi :: JUMP :: reserved0 [11:10] */
#define BCHP_IT_1_MICRO_INSTRUCTIONi_JUMP_reserved0_MASK           0x00000c00
#define BCHP_IT_1_MICRO_INSTRUCTIONi_JUMP_reserved0_SHIFT          10

/* IT_1 :: MICRO_INSTRUCTIONi :: JUMP :: STACK_SELECT [09:00] */
#define BCHP_IT_1_MICRO_INSTRUCTIONi_JUMP_STACK_SELECT_MASK        0x000003ff
#define BCHP_IT_1_MICRO_INSTRUCTIONi_JUMP_STACK_SELECT_SHIFT       0

/* union - case LOAD [11:00] */
/* IT_1 :: MICRO_INSTRUCTIONi :: LOAD :: reserved0 [11:10] */
#define BCHP_IT_1_MICRO_INSTRUCTIONi_LOAD_reserved0_MASK           0x00000c00
#define BCHP_IT_1_MICRO_INSTRUCTIONi_LOAD_reserved0_SHIFT          10

/* IT_1 :: MICRO_INSTRUCTIONi :: LOAD :: STACK_SELECT [09:00] */
#define BCHP_IT_1_MICRO_INSTRUCTIONi_LOAD_STACK_SELECT_MASK        0x000003ff
#define BCHP_IT_1_MICRO_INSTRUCTIONi_LOAD_STACK_SELECT_SHIFT       0

/* union - case RELOAD [11:00] */
/* IT_1 :: MICRO_INSTRUCTIONi :: RELOAD :: reserved0 [11:10] */
#define BCHP_IT_1_MICRO_INSTRUCTIONi_RELOAD_reserved0_MASK         0x00000c00
#define BCHP_IT_1_MICRO_INSTRUCTIONi_RELOAD_reserved0_SHIFT        10

/* IT_1 :: MICRO_INSTRUCTIONi :: RELOAD :: STACK_SELECT [09:00] */
#define BCHP_IT_1_MICRO_INSTRUCTIONi_RELOAD_STACK_SELECT_MASK      0x000003ff
#define BCHP_IT_1_MICRO_INSTRUCTIONi_RELOAD_STACK_SELECT_SHIFT     0

/* union - case default [11:00] */
/* IT_1 :: MICRO_INSTRUCTIONi :: default :: reserved0 [11:00] */
#define BCHP_IT_1_MICRO_INSTRUCTIONi_default_reserved0_MASK        0x00000fff
#define BCHP_IT_1_MICRO_INSTRUCTIONi_default_reserved0_SHIFT       0


#endif /* #ifndef BCHP_IT_1_H__ */

/* End of File */
