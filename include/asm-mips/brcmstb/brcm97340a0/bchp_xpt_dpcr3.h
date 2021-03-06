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
 * Date:           Generated on         Fri Mar 20 13:06:36 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_xpt_dpcr3.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 9:29p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_XPT_DPCR3_H__
#define BCHP_XPT_DPCR3_H__

/***************************************************************************
 *XPT_DPCR3 - XPT DPCR3 Control Registers
 ***************************************************************************/
#define BCHP_XPT_DPCR3_PID_CH                    0x00386180 /* Data Transport PCR PID Channel Register */
#define BCHP_XPT_DPCR3_CTRL                      0x00386184 /* Data Transport PCR Control Register */
#define BCHP_XPT_DPCR3_INTR_STATUS_REG           0x00386188 /* Interrupt Status Register */
#define BCHP_XPT_DPCR3_INTR_STATUS_REG_EN        0x0038618c /* Interrupt Status Enable Register */
#define BCHP_XPT_DPCR3_STC_EXT_CTRL              0x00386190 /* Data Transport PCR STC Extension Control Register */
#define BCHP_XPT_DPCR3_MAX_PCR_ERROR             0x003861a0 /* Data Transport PCR Max PCR Error Register */
#define BCHP_XPT_DPCR3_SEND_BASE                 0x003861a4 /* Data Transport PCR Send Base Register */
#define BCHP_XPT_DPCR3_SEND_EXT                  0x003861a8 /* Data Transport PCR Send Extension Register */
#define BCHP_XPT_DPCR3_STC_EXT_CTRL27            0x003861ac /* Data Transport PCR STC Extension Control Register (Test Only) */
#define BCHP_XPT_DPCR3_PWM_CTRLVALUE             0x003861b8 /* Data Transport PCR PWM Control Value Register */
#define BCHP_XPT_DPCR3_LAST_PCR_HI               0x003861bc /* Data Transport PCR Last PCR MSBs Register */
#define BCHP_XPT_DPCR3_LAST_PCR_LO               0x003861c0 /* Data Transport PCR Last PCR LSBs Register */
#define BCHP_XPT_DPCR3_STC_BASE_LSBS             0x003861c8 /* Data Transport PCR STC Base LSBs Register */
#define BCHP_XPT_DPCR3_PHASE_ERROR               0x003861cc /* Timebase Last Phase Error */
#define BCHP_XPT_DPCR3_LOOP_CTRL                 0x003861d0 /* Timebase Control */
#define BCHP_XPT_DPCR3_REF_PCR                   0x003861d4 /* Timebase Frequency Reference Control */
#define BCHP_XPT_DPCR3_CENTER                    0x003861d8 /* Timebase Center Frequency */
#define BCHP_XPT_DPCR3_STC_HI                    0x003861b0 /* Data Transport PCR STC MSBs Register */
#define BCHP_XPT_DPCR3_STC_LO                    0x003861b4 /* Data Transport PCR STC LSBs Register */
#define BCHP_XPT_DPCR3_ACCUM_VALUE               0x003861dc /* Timebase Loop Filter Integrator */
#define BCHP_XPT_DPCR3_PCR_COUNT                 0x003861e0 /* Data Transport PCR Phase Error Register */
#define BCHP_XPT_DPCR3_SOFT_PCR_CTRL             0x003861e4 /* Data Transport Soft PCR Control Register */
#define BCHP_XPT_DPCR3_SOFT_PCR_BASE             0x003861e8 /* Data Transport Soft PCR BASE Register */
#define BCHP_XPT_DPCR3_SOFT_PCR_EXT              0x003861ec /* Data Transport Soft PCR Extension Register */
#define BCHP_XPT_DPCR3_PHASE_ERROR_CLAMP         0x003861f0 /* Timebase Phase Error Control */

#endif /* #ifndef BCHP_XPT_DPCR3_H__ */

/* End of File */
