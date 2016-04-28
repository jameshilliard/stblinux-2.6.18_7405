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
 * Date:           Generated on         Fri Aug 22 21:09:39 2008
 *                 MD5 Checksum         78214439370aa8abba8b1591b6527168
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7601/rdb/b0/bchp_pcix_bridge.h $
 * 
 * Hydra_Software_Devel/1   8/23/08 1:40a albertl
 * PR45862:  Initial Revision.
 *
 ***************************************************************************/

#ifndef BCHP_PCIX_BRIDGE_H__
#define BCHP_PCIX_BRIDGE_H__

/***************************************************************************
 *PCIX_BRIDGE - SATA PCIX Bridge Registers
 ***************************************************************************/
#define BCHP_PCIX_BRIDGE_REVISION                0x00500200 /* PCIX Bridge Revision Register */
#define BCHP_PCIX_BRIDGE_PCIX_CTRL               0x00500204 /* PCIX Bridge Control */
#define BCHP_PCIX_BRIDGE_SATA_CFG_INDEX          0x00500208 /* Serial ATA Configuration Access Address */
#define BCHP_PCIX_BRIDGE_SATA_CFG_DATA           0x0050020c /* Serial ATA Configuration Access Data */
#define BCHP_PCIX_BRIDGE_PCIX_SLV_MEM_WIN_BASE   0x00500210 /* PCIX SCB Slave Memory Window Base Address */
#define BCHP_PCIX_BRIDGE_PCIX_SLV_MEM_WIN_MODE   0x00500214 /* PCIX SCB Slave Memory Window Mode Address */
#define BCHP_PCIX_BRIDGE_CPU_TO_SATA_MEM_WIN_BASE 0x00500218 /* CPU to SATA PCIX Memory Window Base Address */
#define BCHP_PCIX_BRIDGE_CPU_TO_SATA_IO_WIN_BASE 0x0050021c /* CPU to SATA PCIX IO Window Base Address */
#define BCHP_PCIX_BRIDGE_RETRY_TIMER             0x00500220 /* Master interface retry timeout counter */
#define BCHP_PCIX_BRIDGE_SCRATCH                 0x00500234 /* PCIX Bridge Scratch register */
#define BCHP_PCIX_BRIDGE_DEBUGGER_MBIST_TM_CTRL  0x00500238 /* PCIX Bridge Testport Output register */
#define BCHP_PCIX_BRIDGE_TP_OUT                  0x0050023c /* PCIX Bridge Testport Output Register */

/***************************************************************************
 *REVISION - PCIX Bridge Revision Register
 ***************************************************************************/
/* PCIX_BRIDGE :: REVISION :: reserved0 [31:16] */
#define BCHP_PCIX_BRIDGE_REVISION_reserved0_MASK                   0xffff0000
#define BCHP_PCIX_BRIDGE_REVISION_reserved0_SHIFT                  16

/* PCIX_BRIDGE :: REVISION :: MAJOR [15:08] */
#define BCHP_PCIX_BRIDGE_REVISION_MAJOR_MASK                       0x0000ff00
#define BCHP_PCIX_BRIDGE_REVISION_MAJOR_SHIFT                      8

/* PCIX_BRIDGE :: REVISION :: MINOR [07:00] */
#define BCHP_PCIX_BRIDGE_REVISION_MINOR_MASK                       0x000000ff
#define BCHP_PCIX_BRIDGE_REVISION_MINOR_SHIFT                      0

/***************************************************************************
 *PCIX_CTRL - PCIX Bridge Control
 ***************************************************************************/
/* PCIX_BRIDGE :: PCIX_CTRL :: reserved0 [31:06] */
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_reserved0_MASK                  0xffffffc0
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_reserved0_SHIFT                 6

/* PCIX_BRIDGE :: PCIX_CTRL :: SERR_ENABLE [05:05] */
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_SERR_ENABLE_MASK                0x00000020
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_SERR_ENABLE_SHIFT               5
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_SERR_ENABLE_ASSERTED            1
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_SERR_ENABLE_DEASSERTED          0

/* PCIX_BRIDGE :: PCIX_CTRL :: PERR_ENABLE [04:04] */
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_PERR_ENABLE_MASK                0x00000010
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_PERR_ENABLE_SHIFT               4
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_PERR_ENABLE_ASSERTED            1
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_PERR_ENABLE_DEASSERTED          0

/* PCIX_BRIDGE :: PCIX_CTRL :: CFG_BYTE_ALIGN [03:03] */
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_CFG_BYTE_ALIGN_MASK             0x00000008
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_CFG_BYTE_ALIGN_SHIFT            3

/* PCIX_BRIDGE :: PCIX_CTRL :: PARK_LAST [02:02] */
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_PARK_LAST_MASK                  0x00000004
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_PARK_LAST_SHIFT                 2

/* PCIX_BRIDGE :: PCIX_CTRL :: BUS_MASTER [01:01] */
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_BUS_MASTER_MASK                 0x00000002
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_BUS_MASTER_SHIFT                1
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_BUS_MASTER_ASSERTED             1
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_BUS_MASTER_DEASSERTED           0

/* PCIX_BRIDGE :: PCIX_CTRL :: MEMORY_SPACE [00:00] */
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_MEMORY_SPACE_MASK               0x00000001
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_MEMORY_SPACE_SHIFT              0
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_MEMORY_SPACE_ASSERTED           1
#define BCHP_PCIX_BRIDGE_PCIX_CTRL_MEMORY_SPACE_DEASSERTED         0

/***************************************************************************
 *SATA_CFG_INDEX - Serial ATA Configuration Access Address
 ***************************************************************************/
/* PCIX_BRIDGE :: SATA_CFG_INDEX :: reserved0 [31:11] */
#define BCHP_PCIX_BRIDGE_SATA_CFG_INDEX_reserved0_MASK             0xfffff800
#define BCHP_PCIX_BRIDGE_SATA_CFG_INDEX_reserved0_SHIFT            11

/* PCIX_BRIDGE :: SATA_CFG_INDEX :: FUNC_NUM [10:08] */
#define BCHP_PCIX_BRIDGE_SATA_CFG_INDEX_FUNC_NUM_MASK              0x00000700
#define BCHP_PCIX_BRIDGE_SATA_CFG_INDEX_FUNC_NUM_SHIFT             8

/* PCIX_BRIDGE :: SATA_CFG_INDEX :: REG_NUM [07:00] */
#define BCHP_PCIX_BRIDGE_SATA_CFG_INDEX_REG_NUM_MASK               0x000000ff
#define BCHP_PCIX_BRIDGE_SATA_CFG_INDEX_REG_NUM_SHIFT              0

/***************************************************************************
 *SATA_CFG_DATA - Serial ATA Configuration Access Data
 ***************************************************************************/
/* PCIX_BRIDGE :: SATA_CFG_DATA :: DATA [31:00] */
#define BCHP_PCIX_BRIDGE_SATA_CFG_DATA_DATA_MASK                   0xffffffff
#define BCHP_PCIX_BRIDGE_SATA_CFG_DATA_DATA_SHIFT                  0

/***************************************************************************
 *PCIX_SLV_MEM_WIN_BASE - PCIX SCB Slave Memory Window Base Address
 ***************************************************************************/
/* PCIX_BRIDGE :: PCIX_SLV_MEM_WIN_BASE :: BASE_ADRS [31:00] */
#define BCHP_PCIX_BRIDGE_PCIX_SLV_MEM_WIN_BASE_BASE_ADRS_MASK      0xffffffff
#define BCHP_PCIX_BRIDGE_PCIX_SLV_MEM_WIN_BASE_BASE_ADRS_SHIFT     0

/***************************************************************************
 *PCIX_SLV_MEM_WIN_MODE - PCIX SCB Slave Memory Window Mode Address
 ***************************************************************************/
/* PCIX_BRIDGE :: PCIX_SLV_MEM_WIN_MODE :: reserved0 [31:02] */
#define BCHP_PCIX_BRIDGE_PCIX_SLV_MEM_WIN_MODE_reserved0_MASK      0xfffffffc
#define BCHP_PCIX_BRIDGE_PCIX_SLV_MEM_WIN_MODE_reserved0_SHIFT     2

/* PCIX_BRIDGE :: PCIX_SLV_MEM_WIN_MODE :: ENDIAN_MODE [01:00] */
#define BCHP_PCIX_BRIDGE_PCIX_SLV_MEM_WIN_MODE_ENDIAN_MODE_MASK    0x00000003
#define BCHP_PCIX_BRIDGE_PCIX_SLV_MEM_WIN_MODE_ENDIAN_MODE_SHIFT   0

/***************************************************************************
 *CPU_TO_SATA_MEM_WIN_BASE - CPU to SATA PCIX Memory Window Base Address
 ***************************************************************************/
/* PCIX_BRIDGE :: CPU_TO_SATA_MEM_WIN_BASE :: BASE_ADRS [31:16] */
#define BCHP_PCIX_BRIDGE_CPU_TO_SATA_MEM_WIN_BASE_BASE_ADRS_MASK   0xffff0000
#define BCHP_PCIX_BRIDGE_CPU_TO_SATA_MEM_WIN_BASE_BASE_ADRS_SHIFT  16

/* PCIX_BRIDGE :: CPU_TO_SATA_MEM_WIN_BASE :: reserved0 [15:02] */
#define BCHP_PCIX_BRIDGE_CPU_TO_SATA_MEM_WIN_BASE_reserved0_MASK   0x0000fffc
#define BCHP_PCIX_BRIDGE_CPU_TO_SATA_MEM_WIN_BASE_reserved0_SHIFT  2

/* PCIX_BRIDGE :: CPU_TO_SATA_MEM_WIN_BASE :: ENDIAN_MODE [01:00] */
#define BCHP_PCIX_BRIDGE_CPU_TO_SATA_MEM_WIN_BASE_ENDIAN_MODE_MASK 0x00000003
#define BCHP_PCIX_BRIDGE_CPU_TO_SATA_MEM_WIN_BASE_ENDIAN_MODE_SHIFT 0

/***************************************************************************
 *CPU_TO_SATA_IO_WIN_BASE - CPU to SATA PCIX IO Window Base Address
 ***************************************************************************/
/* PCIX_BRIDGE :: CPU_TO_SATA_IO_WIN_BASE :: BASE_ADRS [31:16] */
#define BCHP_PCIX_BRIDGE_CPU_TO_SATA_IO_WIN_BASE_BASE_ADRS_MASK    0xffff0000
#define BCHP_PCIX_BRIDGE_CPU_TO_SATA_IO_WIN_BASE_BASE_ADRS_SHIFT   16

/* PCIX_BRIDGE :: CPU_TO_SATA_IO_WIN_BASE :: reserved0 [15:02] */
#define BCHP_PCIX_BRIDGE_CPU_TO_SATA_IO_WIN_BASE_reserved0_MASK    0x0000fffc
#define BCHP_PCIX_BRIDGE_CPU_TO_SATA_IO_WIN_BASE_reserved0_SHIFT   2

/* PCIX_BRIDGE :: CPU_TO_SATA_IO_WIN_BASE :: ENDIAN_MODE [01:00] */
#define BCHP_PCIX_BRIDGE_CPU_TO_SATA_IO_WIN_BASE_ENDIAN_MODE_MASK  0x00000003
#define BCHP_PCIX_BRIDGE_CPU_TO_SATA_IO_WIN_BASE_ENDIAN_MODE_SHIFT 0

/***************************************************************************
 *RETRY_TIMER - Master interface retry timeout counter
 ***************************************************************************/
/* PCIX_BRIDGE :: RETRY_TIMER :: reserved0 [31:08] */
#define BCHP_PCIX_BRIDGE_RETRY_TIMER_reserved0_MASK                0xffffff00
#define BCHP_PCIX_BRIDGE_RETRY_TIMER_reserved0_SHIFT               8

/* PCIX_BRIDGE :: RETRY_TIMER :: TIMEOUT_COUNT [07:00] */
#define BCHP_PCIX_BRIDGE_RETRY_TIMER_TIMEOUT_COUNT_MASK            0x000000ff
#define BCHP_PCIX_BRIDGE_RETRY_TIMER_TIMEOUT_COUNT_SHIFT           0

/***************************************************************************
 *SCRATCH - PCIX Bridge Scratch register
 ***************************************************************************/
/* PCIX_BRIDGE :: SCRATCH :: DATA [31:00] */
#define BCHP_PCIX_BRIDGE_SCRATCH_DATA_MASK                         0xffffffff
#define BCHP_PCIX_BRIDGE_SCRATCH_DATA_SHIFT                        0

/***************************************************************************
 *DEBUGGER_MBIST_TM_CTRL - PCIX Bridge Testport Output register
 ***************************************************************************/
/* PCIX_BRIDGE :: DEBUGGER_MBIST_TM_CTRL :: reserved0 [31:08] */
#define BCHP_PCIX_BRIDGE_DEBUGGER_MBIST_TM_CTRL_reserved0_MASK     0xffffff00
#define BCHP_PCIX_BRIDGE_DEBUGGER_MBIST_TM_CTRL_reserved0_SHIFT    8

/* PCIX_BRIDGE :: DEBUGGER_MBIST_TM_CTRL :: DBG_TM_1 [07:04] */
#define BCHP_PCIX_BRIDGE_DEBUGGER_MBIST_TM_CTRL_DBG_TM_1_MASK      0x000000f0
#define BCHP_PCIX_BRIDGE_DEBUGGER_MBIST_TM_CTRL_DBG_TM_1_SHIFT     4

/* PCIX_BRIDGE :: DEBUGGER_MBIST_TM_CTRL :: DBG_TM_0 [03:00] */
#define BCHP_PCIX_BRIDGE_DEBUGGER_MBIST_TM_CTRL_DBG_TM_0_MASK      0x0000000f
#define BCHP_PCIX_BRIDGE_DEBUGGER_MBIST_TM_CTRL_DBG_TM_0_SHIFT     0

/***************************************************************************
 *TP_OUT - PCIX Bridge Testport Output Register
 ***************************************************************************/
/* PCIX_BRIDGE :: TP_OUT :: PCIX_TP_OUT [31:00] */
#define BCHP_PCIX_BRIDGE_TP_OUT_PCIX_TP_OUT_MASK                   0xffffffff
#define BCHP_PCIX_BRIDGE_TP_OUT_PCIX_TP_OUT_SHIFT                  0

#endif /* #ifndef BCHP_PCIX_BRIDGE_H__ */

/* End of File */
