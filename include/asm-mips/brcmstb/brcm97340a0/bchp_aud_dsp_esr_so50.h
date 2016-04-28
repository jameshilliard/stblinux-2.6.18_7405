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
 * Date:           Generated on         Fri Mar 20 13:05:33 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_aud_dsp_esr_so50.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 7:41p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_AUD_DSP_ESR_SO50_H__
#define BCHP_AUD_DSP_ESR_SO50_H__

/***************************************************************************
 *AUD_DSP_ESR_SO50 - Audio DSP Interrupts Status Register (Context5 Soft Interrupts to Host) 0
 ***************************************************************************/
#define BCHP_AUD_DSP_ESR_SO50_INT_STATUS         0x00602b80 /* DSP Core Interrupt Status Register */
#define BCHP_AUD_DSP_ESR_SO50_INT_SET            0x00602b84 /* DSP Core Interrupt Set Register */
#define BCHP_AUD_DSP_ESR_SO50_INT_CLEAR          0x00602b88 /* DSP Core Interrupt Clear Register */
#define BCHP_AUD_DSP_ESR_SO50_MASK_STATUS        0x00602b8c /* DSP Core Interrupt Mask Status Register */
#define BCHP_AUD_DSP_ESR_SO50_MASK_SET           0x00602b90 /* DSP Core Interrupt Mask Set Register */
#define BCHP_AUD_DSP_ESR_SO50_MASK_CLEAR         0x00602b94 /* DSP Core Interrupt Mask Clear Register */

#endif /* #ifndef BCHP_AUD_DSP_ESR_SO50_H__ */

/* End of File */
