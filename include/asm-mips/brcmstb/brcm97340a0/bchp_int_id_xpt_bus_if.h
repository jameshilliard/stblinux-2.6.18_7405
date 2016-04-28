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
 * Date:           Generated on         Mon Mar 23 11:05:33 2009
 *                 MD5 Checksum         39db7382cfc6d56476b4578f59380093
 *
 * Compiled with:  RDB Utility          unknown
 *                 RDB Parser           3.0
 *                 generate_int_id.pl   1.0
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_int_id_xpt_bus_if.h $
 * 
 * Hydra_Software_Devel/1   3/23/09 11:22a yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#include "bchp.h"
#include "bchp_xpt_bus_if.h"

#ifndef BCHP_INT_ID_XPT_BUS_IF_H__
#define BCHP_INT_ID_XPT_BUS_IF_H__

#define BCHP_INT_ID_CA_ERR_INT                BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS2_REG, BCHP_XPT_BUS_IF_INTR_STATUS2_REG_CA_ERR_INT_SHIFT)
#define BCHP_INT_ID_CP_DEC_ERR_INT            BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS2_REG, BCHP_XPT_BUS_IF_INTR_STATUS2_REG_CP_DEC_ERR_INT_SHIFT)
#define BCHP_INT_ID_CP_ENC_ERR_INT            BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS2_REG, BCHP_XPT_BUS_IF_INTR_STATUS2_REG_CP_ENC_ERR_INT_SHIFT)
#define BCHP_INT_ID_GISB_BRIDGE               BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS4_REG, BCHP_XPT_BUS_IF_INTR_STATUS4_REG_GISB_BRIDGE_SHIFT)
#define BCHP_INT_ID_ICAM_INTR                 BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS3_REG, BCHP_XPT_BUS_IF_INTR_STATUS3_REG_ICAM_INTR_SHIFT)
#define BCHP_INT_ID_MPOD_EXTRACTOR_CRC_ERROR  BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS5_REG, BCHP_XPT_BUS_IF_INTR_STATUS5_REG_MPOD_EXTRACTOR_CRC_ERROR_SHIFT)
#define BCHP_INT_ID_PSUB0_EOB_INT             BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS4_REG, BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB0_EOB_INT_SHIFT)
#define BCHP_INT_ID_PSUB1_EOB_INT             BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS4_REG, BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB1_EOB_INT_SHIFT)
#define BCHP_INT_ID_PSUB2_EOB_INT             BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS4_REG, BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB2_EOB_INT_SHIFT)
#define BCHP_INT_ID_PSUB3_EOB_INT             BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS4_REG, BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB3_EOB_INT_SHIFT)
#define BCHP_INT_ID_PSUB4_EOB_INT             BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS4_REG, BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB4_EOB_INT_SHIFT)
#define BCHP_INT_ID_PSUB5_EOB_INT             BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS4_REG, BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB5_EOB_INT_SHIFT)
#define BCHP_INT_ID_PSUB6_EOB_INT             BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS4_REG, BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB6_EOB_INT_SHIFT)
#define BCHP_INT_ID_PSUB7_EOB_INT             BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS4_REG, BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB7_EOB_INT_SHIFT)
#define BCHP_INT_ID_RSBUFF_OVERFLFLOW_INTR    BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS_REG, BCHP_XPT_BUS_IF_INTR_STATUS_REG_RSBUFF_OVERFLFLOW_INTR_SHIFT)
#define BCHP_INT_ID_TSMF0_FRAME_ERROR         BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS4_REG, BCHP_XPT_BUS_IF_INTR_STATUS4_REG_TSMF0_FRAME_ERROR_SHIFT)
#define BCHP_INT_ID_TSMF0_SYNC_ERROR          BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS4_REG, BCHP_XPT_BUS_IF_INTR_STATUS4_REG_TSMF0_SYNC_ERROR_SHIFT)
#define BCHP_INT_ID_TSMF1_FRAME_ERROR         BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS4_REG, BCHP_XPT_BUS_IF_INTR_STATUS4_REG_TSMF1_FRAME_ERROR_SHIFT)
#define BCHP_INT_ID_TSMF1_SYNC_ERROR          BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS4_REG, BCHP_XPT_BUS_IF_INTR_STATUS4_REG_TSMF1_SYNC_ERROR_SHIFT)
#define BCHP_INT_ID_WRCHECKER_INT             BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS5_REG, BCHP_XPT_BUS_IF_INTR_STATUS5_REG_WRCHECKER_INT_SHIFT)
#define BCHP_INT_ID_XCBUFF_OVERFLOW_INTR      BCHP_INT_ID_CREATE(BCHP_XPT_BUS_IF_INTR_STATUS_REG, BCHP_XPT_BUS_IF_INTR_STATUS_REG_XCBUFF_OVERFLOW_INTR_SHIFT)

#endif /* #ifndef BCHP_INT_ID_XPT_BUS_IF_H__ */

/* End of File */
