/***************************************************************************
 *     Copyright (c) 1999-2005, Broadcom Corporation
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
 * $brcm_Workfile: bchp_uartc.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 11/10/06 4:46a $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Tue Nov  7 18:01:53 2006
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
 * $brcm_Log: /magnum/basemodules/chp/7440/rdb/b0/bchp_uartc.h $
 * 
 * Hydra_Software_Devel/1   11/10/06 4:46a albertl
 * PR23109:  Initial version.
 *
 ***************************************************************************/

#ifndef BCHP_UARTC_H__
#define BCHP_UARTC_H__

/***************************************************************************
 *UARTC - UART C
 ***************************************************************************/
#define BCHP_UARTC_RBR                           0x00400b80 /* Receive Buffer Register */
#define BCHP_UARTC_THR                           0x00400b80 /* Transmit Holding Register */
#define BCHP_UARTC_DLH                           0x00400b84 /* Divisor Latch High */
#define BCHP_UARTC_DLL                           0x00400b80 /* Divisor Latch Low */
#define BCHP_UARTC_IER                           0x00400b84 /* Interrupt Enable Register */
#define BCHP_UARTC_IIR                           0x00400b88 /* Interrupt Identity Register */
#define BCHP_UARTC_FCR                           0x00400b88 /* FIFO Control Register */
#define BCHP_UARTC_LCR                           0x00400b8c /* Line Control Register */
#define BCHP_UARTC_MCR                           0x00400b90 /* Modem Control Register */
#define BCHP_UARTC_LSR                           0x00400b94 /* Line Status Register */
#define BCHP_UARTC_MSR                           0x00400b98 /* Modem Status Register */
#define BCHP_UARTC_SCR                           0x00400b9c /* Scratchpad Register */

#endif /* #ifndef BCHP_UARTC_H__ */

/* End of File */
