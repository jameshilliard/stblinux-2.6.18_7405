/***************************************************************************
 *  Copyright (c) 2005-2009 Broadcom Corp.
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
 * $brcm_Workfile: bchp_edu.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 11/10/06 3:22a $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Tue Nov  7 18:02:32 2006
 *                 MD5 Checksum         8931907e7270ad3c1ed9ab5a8b98eccb
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008004
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7440/rdb/b0/bchp_edu.h $
 * 
 * Hydra_Software_Devel/1   11/10/06 3:22a albertl
 * PR23109:  Initial version.
 *
 ***************************************************************************/

#ifndef BCHP_EDU_H__
#define BCHP_EDU_H__

/***************************************************************************
 *EDU - EDU Registers
 ***************************************************************************/
#define BCHP_EDU_CONFIG                          0x00002c00 /* EDU Config */
#define BCHP_EDU_DRAM_ADDR                       0x00002c04 /* DRAM Address for transaction */
#define BCHP_EDU_EXT_ADDR                        0x00002c08 /* External Address for transaction */
#define BCHP_EDU_LENGTH                          0x00002c0c /* Length of transaction */
#define BCHP_EDU_CMD                             0x00002c10 /* Command Type and Start */
#define BCHP_EDU_STOP                            0x00002c14 /* Stop */
#define BCHP_EDU_STATUS                          0x00002c18 /* EDU Status bits */
#define BCHP_EDU_DONE                            0x00002c1c /* EDU Done bits */
#define BCHP_EDU_ERR_STATUS                      0x00002c20 /* EDU Error Status */

/***************************************************************************
 *CONFIG - EDU Config
 ***************************************************************************/
/* EDU :: CONFIG :: reserved0 [31:03] */
#define BCHP_EDU_CONFIG_reserved0_MASK                             0xfffffff8
#define BCHP_EDU_CONFIG_reserved0_SHIFT                            3

/* EDU :: CONFIG :: Swap [02:01] */
#define BCHP_EDU_CONFIG_Swap_MASK                                  0x00000006
#define BCHP_EDU_CONFIG_Swap_SHIFT                                 1

/* EDU :: CONFIG :: Mode [00:00] */
#define BCHP_EDU_CONFIG_Mode_MASK                                  0x00000001
#define BCHP_EDU_CONFIG_Mode_SHIFT                                 0

/***************************************************************************
 *DRAM_ADDR - DRAM Address for transaction
 ***************************************************************************/
/* EDU :: DRAM_ADDR :: Address [31:02] */
#define BCHP_EDU_DRAM_ADDR_Address_MASK                            0xfffffffc
#define BCHP_EDU_DRAM_ADDR_Address_SHIFT                           2

/* EDU :: DRAM_ADDR :: reserved0 [01:00] */
#define BCHP_EDU_DRAM_ADDR_reserved0_MASK                          0x00000003
#define BCHP_EDU_DRAM_ADDR_reserved0_SHIFT                         0

/***************************************************************************
 *EXT_ADDR - External Address for transaction
 ***************************************************************************/
/* EDU :: EXT_ADDR :: Address [31:02] */
#define BCHP_EDU_EXT_ADDR_Address_MASK                             0xfffffffc
#define BCHP_EDU_EXT_ADDR_Address_SHIFT                            2

/* EDU :: EXT_ADDR :: reserved0 [01:00] */
#define BCHP_EDU_EXT_ADDR_reserved0_MASK                           0x00000003
#define BCHP_EDU_EXT_ADDR_reserved0_SHIFT                          0

/***************************************************************************
 *LENGTH - Length of transaction
 ***************************************************************************/
/* EDU :: LENGTH :: reserved0 [31:10] */
#define BCHP_EDU_LENGTH_reserved0_MASK                             0xfffffc00
#define BCHP_EDU_LENGTH_reserved0_SHIFT                            10

/* EDU :: LENGTH :: Length [09:00] */
#define BCHP_EDU_LENGTH_Length_MASK                                0x000003ff
#define BCHP_EDU_LENGTH_Length_SHIFT                               0

/***************************************************************************
 *CMD - Command Type and Start
 ***************************************************************************/
/* EDU :: CMD :: reserved0 [31:01] */
#define BCHP_EDU_CMD_reserved0_MASK                                0xfffffffe
#define BCHP_EDU_CMD_reserved0_SHIFT                               1

/* EDU :: CMD :: Cmd [00:00] */
#define BCHP_EDU_CMD_Cmd_MASK                                      0x00000001
#define BCHP_EDU_CMD_Cmd_SHIFT                                     0

/***************************************************************************
 *STOP - Stop
 ***************************************************************************/
/* EDU :: STOP :: reserved0 [31:01] */
#define BCHP_EDU_STOP_reserved0_MASK                               0xfffffffe
#define BCHP_EDU_STOP_reserved0_SHIFT                              1

/* EDU :: STOP :: Stop [00:00] */
#define BCHP_EDU_STOP_Stop_MASK                                    0x00000001
#define BCHP_EDU_STOP_Stop_SHIFT                                   0

/***************************************************************************
 *STATUS - EDU Status bits
 ***************************************************************************/
/* EDU :: STATUS :: reserved0 [31:02] */
#define BCHP_EDU_STATUS_reserved0_MASK                             0xfffffffc
#define BCHP_EDU_STATUS_reserved0_SHIFT                            2

/* EDU :: STATUS :: Pending [01:01] */
#define BCHP_EDU_STATUS_Pending_MASK                               0x00000002
#define BCHP_EDU_STATUS_Pending_SHIFT                              1

/* EDU :: STATUS :: Active [00:00] */
#define BCHP_EDU_STATUS_Active_MASK                                0x00000001
#define BCHP_EDU_STATUS_Active_SHIFT                               0

/***************************************************************************
 *DONE - EDU Done bits
 ***************************************************************************/
/* EDU :: DONE :: reserved0 [31:02] */
#define BCHP_EDU_DONE_reserved0_MASK                               0xfffffffc
#define BCHP_EDU_DONE_reserved0_SHIFT                              2

/* EDU :: DONE :: Done [01:00] */
#define BCHP_EDU_DONE_Done_MASK                                    0x00000003
#define BCHP_EDU_DONE_Done_SHIFT                                   0

/***************************************************************************
 *ERR_STATUS - EDU Error Status
 ***************************************************************************/
/* EDU :: ERR_STATUS :: reserved0 [31:04] */
#define BCHP_EDU_ERR_STATUS_reserved0_MASK                         0xfffffff0
#define BCHP_EDU_ERR_STATUS_reserved0_SHIFT                        4

/* EDU :: ERR_STATUS :: NandWrErr [03:03] */
#define BCHP_EDU_ERR_STATUS_NandWrErr_MASK                         0x00000008
#define BCHP_EDU_ERR_STATUS_NandWrErr_SHIFT                        3

/* EDU :: ERR_STATUS :: NandECCuncor [02:02] */
#define BCHP_EDU_ERR_STATUS_NandECCuncor_MASK                      0x00000004
#define BCHP_EDU_ERR_STATUS_NandECCuncor_SHIFT                     2

/* EDU :: ERR_STATUS :: NandECCcor [01:01] */
#define BCHP_EDU_ERR_STATUS_NandECCcor_MASK                        0x00000002
#define BCHP_EDU_ERR_STATUS_NandECCcor_SHIFT                       1

/* EDU :: ERR_STATUS :: ErrAck [00:00] */
#define BCHP_EDU_ERR_STATUS_ErrAck_MASK                            0x00000001
#define BCHP_EDU_ERR_STATUS_ErrAck_SHIFT                           0

#endif /* #ifndef BCHP_EDU_H__ */

/* End of File */
