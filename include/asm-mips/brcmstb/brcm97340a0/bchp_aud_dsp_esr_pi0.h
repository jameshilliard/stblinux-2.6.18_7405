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
 * Date:           Generated on         Fri Mar 20 12:51:43 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_aud_dsp_esr_pi0.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 7:37p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_AUD_DSP_ESR_PI0_H__
#define BCHP_AUD_DSP_ESR_PI0_H__

/***************************************************************************
 *AUD_DSP_ESR_PI0 - Audio DSP Interrupts Status Register (Peripheral Interrupts) 0
 ***************************************************************************/
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS          0x00602500 /* DSP Core Interrupt Status Register */
#define BCHP_AUD_DSP_ESR_PI0_INT_SET             0x00602504 /* DSP Core Interrupt Set Register */
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR           0x00602508 /* DSP Core Interrupt Clear Register */
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS         0x0060250c /* DSP Core Interrupt Mask Status Register */
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET            0x00602510 /* DSP Core Interrupt Mask Set Register */
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR          0x00602514 /* DSP Core Interrupt Mask Clear Register */

/***************************************************************************
 *INT_STATUS - DSP Core Interrupt Status Register
 ***************************************************************************/
/* AUD_DSP_ESR_PI0 :: INT_STATUS :: reserved0 [31:09] */
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS_reserved0_MASK             0xfffffe00
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS_reserved0_SHIFT            9

/* AUD_DSP_ESR_PI0 :: INT_STATUS :: DMA_CC [08:08] */
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS_DMA_CC_MASK                0x00000100
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS_DMA_CC_SHIFT               8

/* AUD_DSP_ESR_PI0 :: INT_STATUS :: RGR_BRIDGE_ERR [07:07] */
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS_RGR_BRIDGE_ERR_MASK        0x00000080
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS_RGR_BRIDGE_ERR_SHIFT       7

/* AUD_DSP_ESR_PI0 :: INT_STATUS :: DMA_ERR [06:06] */
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS_DMA_ERR_MASK               0x00000040
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS_DMA_ERR_SHIFT              6

/* AUD_DSP_ESR_PI0 :: INT_STATUS :: AUD_FMM [05:05] */
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS_AUD_FMM_MASK               0x00000020
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS_AUD_FMM_SHIFT              5

/* AUD_DSP_ESR_PI0 :: INT_STATUS :: UART [04:04] */
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS_UART_MASK                  0x00000010
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS_UART_SHIFT                 4

/* AUD_DSP_ESR_PI0 :: INT_STATUS :: IMC_PEEK_POKE [03:03] */
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS_IMC_PEEK_POKE_MASK         0x00000008
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS_IMC_PEEK_POKE_SHIFT        3

/* AUD_DSP_ESR_PI0 :: INT_STATUS :: DMA_XFER_DONE [02:02] */
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS_DMA_XFER_DONE_MASK         0x00000004
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS_DMA_XFER_DONE_SHIFT        2

/* AUD_DSP_ESR_PI0 :: INT_STATUS :: EXT_TIMER_ATTN [01:01] */
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS_EXT_TIMER_ATTN_MASK        0x00000002
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS_EXT_TIMER_ATTN_SHIFT       1

/* AUD_DSP_ESR_PI0 :: INT_STATUS :: WDOG_TIMER_ATTN [00:00] */
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS_WDOG_TIMER_ATTN_MASK       0x00000001
#define BCHP_AUD_DSP_ESR_PI0_INT_STATUS_WDOG_TIMER_ATTN_SHIFT      0

/***************************************************************************
 *INT_SET - DSP Core Interrupt Set Register
 ***************************************************************************/
/* AUD_DSP_ESR_PI0 :: INT_SET :: reserved0 [31:09] */
#define BCHP_AUD_DSP_ESR_PI0_INT_SET_reserved0_MASK                0xfffffe00
#define BCHP_AUD_DSP_ESR_PI0_INT_SET_reserved0_SHIFT               9

/* AUD_DSP_ESR_PI0 :: INT_SET :: DMA_CC [08:08] */
#define BCHP_AUD_DSP_ESR_PI0_INT_SET_DMA_CC_MASK                   0x00000100
#define BCHP_AUD_DSP_ESR_PI0_INT_SET_DMA_CC_SHIFT                  8

/* AUD_DSP_ESR_PI0 :: INT_SET :: RGR_BRIDGE_ERR [07:07] */
#define BCHP_AUD_DSP_ESR_PI0_INT_SET_RGR_BRIDGE_ERR_MASK           0x00000080
#define BCHP_AUD_DSP_ESR_PI0_INT_SET_RGR_BRIDGE_ERR_SHIFT          7

/* AUD_DSP_ESR_PI0 :: INT_SET :: DMA_ERR [06:06] */
#define BCHP_AUD_DSP_ESR_PI0_INT_SET_DMA_ERR_MASK                  0x00000040
#define BCHP_AUD_DSP_ESR_PI0_INT_SET_DMA_ERR_SHIFT                 6

/* AUD_DSP_ESR_PI0 :: INT_SET :: AUD_FMM [05:05] */
#define BCHP_AUD_DSP_ESR_PI0_INT_SET_AUD_FMM_MASK                  0x00000020
#define BCHP_AUD_DSP_ESR_PI0_INT_SET_AUD_FMM_SHIFT                 5

/* AUD_DSP_ESR_PI0 :: INT_SET :: UART [04:04] */
#define BCHP_AUD_DSP_ESR_PI0_INT_SET_UART_MASK                     0x00000010
#define BCHP_AUD_DSP_ESR_PI0_INT_SET_UART_SHIFT                    4

/* AUD_DSP_ESR_PI0 :: INT_SET :: IMC_PEEK_POKE [03:03] */
#define BCHP_AUD_DSP_ESR_PI0_INT_SET_IMC_PEEK_POKE_MASK            0x00000008
#define BCHP_AUD_DSP_ESR_PI0_INT_SET_IMC_PEEK_POKE_SHIFT           3

/* AUD_DSP_ESR_PI0 :: INT_SET :: DMA_XFER_DONE [02:02] */
#define BCHP_AUD_DSP_ESR_PI0_INT_SET_DMA_XFER_DONE_MASK            0x00000004
#define BCHP_AUD_DSP_ESR_PI0_INT_SET_DMA_XFER_DONE_SHIFT           2

/* AUD_DSP_ESR_PI0 :: INT_SET :: EXT_TIMER_ATTN [01:01] */
#define BCHP_AUD_DSP_ESR_PI0_INT_SET_EXT_TIMER_ATTN_MASK           0x00000002
#define BCHP_AUD_DSP_ESR_PI0_INT_SET_EXT_TIMER_ATTN_SHIFT          1

/* AUD_DSP_ESR_PI0 :: INT_SET :: WDOG_TIMER_ATTN [00:00] */
#define BCHP_AUD_DSP_ESR_PI0_INT_SET_WDOG_TIMER_ATTN_MASK          0x00000001
#define BCHP_AUD_DSP_ESR_PI0_INT_SET_WDOG_TIMER_ATTN_SHIFT         0

/***************************************************************************
 *INT_CLEAR - DSP Core Interrupt Clear Register
 ***************************************************************************/
/* AUD_DSP_ESR_PI0 :: INT_CLEAR :: reserved0 [31:09] */
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR_reserved0_MASK              0xfffffe00
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR_reserved0_SHIFT             9

/* AUD_DSP_ESR_PI0 :: INT_CLEAR :: DMA_CC [08:08] */
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR_DMA_CC_MASK                 0x00000100
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR_DMA_CC_SHIFT                8

/* AUD_DSP_ESR_PI0 :: INT_CLEAR :: RGR_BRIDGE_ERR [07:07] */
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR_RGR_BRIDGE_ERR_MASK         0x00000080
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR_RGR_BRIDGE_ERR_SHIFT        7

/* AUD_DSP_ESR_PI0 :: INT_CLEAR :: DMA_ERR [06:06] */
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR_DMA_ERR_MASK                0x00000040
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR_DMA_ERR_SHIFT               6

/* AUD_DSP_ESR_PI0 :: INT_CLEAR :: AUD_FMM [05:05] */
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR_AUD_FMM_MASK                0x00000020
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR_AUD_FMM_SHIFT               5

/* AUD_DSP_ESR_PI0 :: INT_CLEAR :: UART [04:04] */
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR_UART_MASK                   0x00000010
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR_UART_SHIFT                  4

/* AUD_DSP_ESR_PI0 :: INT_CLEAR :: IMC_PEEK_POKE [03:03] */
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR_IMC_PEEK_POKE_MASK          0x00000008
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR_IMC_PEEK_POKE_SHIFT         3

/* AUD_DSP_ESR_PI0 :: INT_CLEAR :: DMA_XFER_DONE [02:02] */
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR_DMA_XFER_DONE_MASK          0x00000004
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR_DMA_XFER_DONE_SHIFT         2

/* AUD_DSP_ESR_PI0 :: INT_CLEAR :: EXT_TIMER_ATTN [01:01] */
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR_EXT_TIMER_ATTN_MASK         0x00000002
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR_EXT_TIMER_ATTN_SHIFT        1

/* AUD_DSP_ESR_PI0 :: INT_CLEAR :: WDOG_TIMER_ATTN [00:00] */
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR_WDOG_TIMER_ATTN_MASK        0x00000001
#define BCHP_AUD_DSP_ESR_PI0_INT_CLEAR_WDOG_TIMER_ATTN_SHIFT       0

/***************************************************************************
 *MASK_STATUS - DSP Core Interrupt Mask Status Register
 ***************************************************************************/
/* AUD_DSP_ESR_PI0 :: MASK_STATUS :: reserved0 [31:09] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS_reserved0_MASK            0xfffffe00
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS_reserved0_SHIFT           9

/* AUD_DSP_ESR_PI0 :: MASK_STATUS :: DMA_CC [08:08] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS_DMA_CC_MASK               0x00000100
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS_DMA_CC_SHIFT              8

/* AUD_DSP_ESR_PI0 :: MASK_STATUS :: RGR_BRIDGE_ERR [07:07] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS_RGR_BRIDGE_ERR_MASK       0x00000080
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS_RGR_BRIDGE_ERR_SHIFT      7

/* AUD_DSP_ESR_PI0 :: MASK_STATUS :: DMA_ERR [06:06] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS_DMA_ERR_MASK              0x00000040
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS_DMA_ERR_SHIFT             6

/* AUD_DSP_ESR_PI0 :: MASK_STATUS :: AUD_FMM [05:05] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS_AUD_FMM_MASK              0x00000020
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS_AUD_FMM_SHIFT             5

/* AUD_DSP_ESR_PI0 :: MASK_STATUS :: UART [04:04] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS_UART_MASK                 0x00000010
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS_UART_SHIFT                4

/* AUD_DSP_ESR_PI0 :: MASK_STATUS :: IMC_PEEK_POKE [03:03] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS_IMC_PEEK_POKE_MASK        0x00000008
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS_IMC_PEEK_POKE_SHIFT       3

/* AUD_DSP_ESR_PI0 :: MASK_STATUS :: DMA_XFER_DONE [02:02] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS_DMA_XFER_DONE_MASK        0x00000004
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS_DMA_XFER_DONE_SHIFT       2

/* AUD_DSP_ESR_PI0 :: MASK_STATUS :: EXT_TIMER_ATTN [01:01] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS_EXT_TIMER_ATTN_MASK       0x00000002
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS_EXT_TIMER_ATTN_SHIFT      1

/* AUD_DSP_ESR_PI0 :: MASK_STATUS :: WDOG_TIMER_ATTN [00:00] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS_WDOG_TIMER_ATTN_MASK      0x00000001
#define BCHP_AUD_DSP_ESR_PI0_MASK_STATUS_WDOG_TIMER_ATTN_SHIFT     0

/***************************************************************************
 *MASK_SET - DSP Core Interrupt Mask Set Register
 ***************************************************************************/
/* AUD_DSP_ESR_PI0 :: MASK_SET :: reserved0 [31:09] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET_reserved0_MASK               0xfffffe00
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET_reserved0_SHIFT              9

/* AUD_DSP_ESR_PI0 :: MASK_SET :: DMA_CC [08:08] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET_DMA_CC_MASK                  0x00000100
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET_DMA_CC_SHIFT                 8

/* AUD_DSP_ESR_PI0 :: MASK_SET :: RGR_BRIDGE_ERR [07:07] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET_RGR_BRIDGE_ERR_MASK          0x00000080
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET_RGR_BRIDGE_ERR_SHIFT         7

/* AUD_DSP_ESR_PI0 :: MASK_SET :: DMA_ERR [06:06] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET_DMA_ERR_MASK                 0x00000040
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET_DMA_ERR_SHIFT                6

/* AUD_DSP_ESR_PI0 :: MASK_SET :: AUD_FMM [05:05] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET_AUD_FMM_MASK                 0x00000020
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET_AUD_FMM_SHIFT                5

/* AUD_DSP_ESR_PI0 :: MASK_SET :: UART [04:04] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET_UART_MASK                    0x00000010
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET_UART_SHIFT                   4

/* AUD_DSP_ESR_PI0 :: MASK_SET :: IMC_PEEK_POKE [03:03] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET_IMC_PEEK_POKE_MASK           0x00000008
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET_IMC_PEEK_POKE_SHIFT          3

/* AUD_DSP_ESR_PI0 :: MASK_SET :: DMA_XFER_DONE [02:02] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET_DMA_XFER_DONE_MASK           0x00000004
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET_DMA_XFER_DONE_SHIFT          2

/* AUD_DSP_ESR_PI0 :: MASK_SET :: EXT_TIMER_ATTN [01:01] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET_EXT_TIMER_ATTN_MASK          0x00000002
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET_EXT_TIMER_ATTN_SHIFT         1

/* AUD_DSP_ESR_PI0 :: MASK_SET :: WDOG_TIMER_ATTN [00:00] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET_WDOG_TIMER_ATTN_MASK         0x00000001
#define BCHP_AUD_DSP_ESR_PI0_MASK_SET_WDOG_TIMER_ATTN_SHIFT        0

/***************************************************************************
 *MASK_CLEAR - DSP Core Interrupt Mask Clear Register
 ***************************************************************************/
/* AUD_DSP_ESR_PI0 :: MASK_CLEAR :: reserved0 [31:09] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR_reserved0_MASK             0xfffffe00
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR_reserved0_SHIFT            9

/* AUD_DSP_ESR_PI0 :: MASK_CLEAR :: DMA_CC [08:08] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR_DMA_CC_MASK                0x00000100
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR_DMA_CC_SHIFT               8

/* AUD_DSP_ESR_PI0 :: MASK_CLEAR :: RGR_BRIDGE_ERR [07:07] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR_RGR_BRIDGE_ERR_MASK        0x00000080
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR_RGR_BRIDGE_ERR_SHIFT       7

/* AUD_DSP_ESR_PI0 :: MASK_CLEAR :: DMA_ERR [06:06] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR_DMA_ERR_MASK               0x00000040
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR_DMA_ERR_SHIFT              6

/* AUD_DSP_ESR_PI0 :: MASK_CLEAR :: AUD_FMM [05:05] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR_AUD_FMM_MASK               0x00000020
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR_AUD_FMM_SHIFT              5

/* AUD_DSP_ESR_PI0 :: MASK_CLEAR :: UART [04:04] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR_UART_MASK                  0x00000010
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR_UART_SHIFT                 4

/* AUD_DSP_ESR_PI0 :: MASK_CLEAR :: IMC_PEEK_POKE [03:03] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR_IMC_PEEK_POKE_MASK         0x00000008
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR_IMC_PEEK_POKE_SHIFT        3

/* AUD_DSP_ESR_PI0 :: MASK_CLEAR :: DMA_XFER_DONE [02:02] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR_DMA_XFER_DONE_MASK         0x00000004
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR_DMA_XFER_DONE_SHIFT        2

/* AUD_DSP_ESR_PI0 :: MASK_CLEAR :: EXT_TIMER_ATTN [01:01] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR_EXT_TIMER_ATTN_MASK        0x00000002
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR_EXT_TIMER_ATTN_SHIFT       1

/* AUD_DSP_ESR_PI0 :: MASK_CLEAR :: WDOG_TIMER_ATTN [00:00] */
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR_WDOG_TIMER_ATTN_MASK       0x00000001
#define BCHP_AUD_DSP_ESR_PI0_MASK_CLEAR_WDOG_TIMER_ATTN_SHIFT      0

#endif /* #ifndef BCHP_AUD_DSP_ESR_PI0_H__ */

/* End of File */
