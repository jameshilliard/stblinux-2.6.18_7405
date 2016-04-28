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
 * Date:           Generated on         Fri Jan 23 11:27:38 2009
 *                 MD5 Checksum         16788e155ebd540a0f1eb79b01eb33e6
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7336/rdb/a0/bchp_uarta.h $
 * 
 * Hydra_Software_Devel/1   1/23/09 1:41p tdo
 * PR51405: Initial check in
 *
 ***************************************************************************/

#ifndef BCHP_UARTA_H__
#define BCHP_UARTA_H__

/***************************************************************************
 *UARTA - UART A
 ***************************************************************************/
#define BCHP_UARTA_RBR                           0x00400b00 /* Receive Buffer Register */
#define BCHP_UARTA_THR                           0x00400b00 /* Transmit Holding Register */
#define BCHP_UARTA_DLH                           0x00400b04 /* Divisor Latch High */
#define BCHP_UARTA_DLL                           0x00400b00 /* Divisor Latch Low */
#define BCHP_UARTA_IER                           0x00400b04 /* Interrupt Enable Register */
#define BCHP_UARTA_IIR                           0x00400b08 /* Interrupt Identity Register */
#define BCHP_UARTA_FCR                           0x00400b08 /* FIFO Control Register */
#define BCHP_UARTA_LCR                           0x00400b0c /* Line Control Register */
#define BCHP_UARTA_MCR                           0x00400b10 /* Modem Control Register */
#define BCHP_UARTA_LSR                           0x00400b14 /* Line Status Register */
#define BCHP_UARTA_MSR                           0x00400b18 /* Modem Status Register */
#define BCHP_UARTA_SCR                           0x00400b1c /* Scratchpad Register */

/***************************************************************************
 *RBR - Receive Buffer Register
 ***************************************************************************/
/* UARTA :: RBR :: reserved0 [31:08] */
#define BCHP_UARTA_RBR_reserved0_MASK                              0xffffff00
#define BCHP_UARTA_RBR_reserved0_SHIFT                             8

/* UARTA :: RBR :: RBR [07:00] */
#define BCHP_UARTA_RBR_RBR_MASK                                    0x000000ff
#define BCHP_UARTA_RBR_RBR_SHIFT                                   0

/***************************************************************************
 *THR - Transmit Holding Register
 ***************************************************************************/
/* UARTA :: THR :: reserved0 [31:08] */
#define BCHP_UARTA_THR_reserved0_MASK                              0xffffff00
#define BCHP_UARTA_THR_reserved0_SHIFT                             8

/* UARTA :: THR :: THR [07:00] */
#define BCHP_UARTA_THR_THR_MASK                                    0x000000ff
#define BCHP_UARTA_THR_THR_SHIFT                                   0

/***************************************************************************
 *DLH - Divisor Latch High
 ***************************************************************************/
/* UARTA :: DLH :: reserved0 [31:08] */
#define BCHP_UARTA_DLH_reserved0_MASK                              0xffffff00
#define BCHP_UARTA_DLH_reserved0_SHIFT                             8

/* UARTA :: DLH :: DLH [07:00] */
#define BCHP_UARTA_DLH_DLH_MASK                                    0x000000ff
#define BCHP_UARTA_DLH_DLH_SHIFT                                   0

/***************************************************************************
 *DLL - Divisor Latch Low
 ***************************************************************************/
/* UARTA :: DLL :: reserved0 [31:08] */
#define BCHP_UARTA_DLL_reserved0_MASK                              0xffffff00
#define BCHP_UARTA_DLL_reserved0_SHIFT                             8

/* UARTA :: DLL :: DLL [07:00] */
#define BCHP_UARTA_DLL_DLL_MASK                                    0x000000ff
#define BCHP_UARTA_DLL_DLL_SHIFT                                   0

/***************************************************************************
 *IER - Interrupt Enable Register
 ***************************************************************************/
/* UARTA :: IER :: reserved0 [31:08] */
#define BCHP_UARTA_IER_reserved0_MASK                              0xffffff00
#define BCHP_UARTA_IER_reserved0_SHIFT                             8

/* UARTA :: IER :: PTIME [07:07] */
#define BCHP_UARTA_IER_PTIME_MASK                                  0x00000080
#define BCHP_UARTA_IER_PTIME_SHIFT                                 7

/* UARTA :: IER :: reserved1 [06:04] */
#define BCHP_UARTA_IER_reserved1_MASK                              0x00000070
#define BCHP_UARTA_IER_reserved1_SHIFT                             4

/* UARTA :: IER :: EDSSI [03:03] */
#define BCHP_UARTA_IER_EDSSI_MASK                                  0x00000008
#define BCHP_UARTA_IER_EDSSI_SHIFT                                 3

/* UARTA :: IER :: ELSI [02:02] */
#define BCHP_UARTA_IER_ELSI_MASK                                   0x00000004
#define BCHP_UARTA_IER_ELSI_SHIFT                                  2

/* UARTA :: IER :: ETBEI [01:01] */
#define BCHP_UARTA_IER_ETBEI_MASK                                  0x00000002
#define BCHP_UARTA_IER_ETBEI_SHIFT                                 1

/* UARTA :: IER :: ERBFI [00:00] */
#define BCHP_UARTA_IER_ERBFI_MASK                                  0x00000001
#define BCHP_UARTA_IER_ERBFI_SHIFT                                 0

/***************************************************************************
 *IIR - Interrupt Identity Register
 ***************************************************************************/
/* UARTA :: IIR :: reserved0 [31:08] */
#define BCHP_UARTA_IIR_reserved0_MASK                              0xffffff00
#define BCHP_UARTA_IIR_reserved0_SHIFT                             8

/* UARTA :: IIR :: FIFOSE [07:06] */
#define BCHP_UARTA_IIR_FIFOSE_MASK                                 0x000000c0
#define BCHP_UARTA_IIR_FIFOSE_SHIFT                                6

/* UARTA :: IIR :: reserved1 [05:04] */
#define BCHP_UARTA_IIR_reserved1_MASK                              0x00000030
#define BCHP_UARTA_IIR_reserved1_SHIFT                             4

/* UARTA :: IIR :: IID [03:00] */
#define BCHP_UARTA_IIR_IID_MASK                                    0x0000000f
#define BCHP_UARTA_IIR_IID_SHIFT                                   0

/***************************************************************************
 *FCR - FIFO Control Register
 ***************************************************************************/
/* UARTA :: FCR :: reserved0 [31:08] */
#define BCHP_UARTA_FCR_reserved0_MASK                              0xffffff00
#define BCHP_UARTA_FCR_reserved0_SHIFT                             8

/* UARTA :: FCR :: RT [07:06] */
#define BCHP_UARTA_FCR_RT_MASK                                     0x000000c0
#define BCHP_UARTA_FCR_RT_SHIFT                                    6

/* UARTA :: FCR :: TET [05:04] */
#define BCHP_UARTA_FCR_TET_MASK                                    0x00000030
#define BCHP_UARTA_FCR_TET_SHIFT                                   4

/* UARTA :: FCR :: DMAM [03:03] */
#define BCHP_UARTA_FCR_DMAM_MASK                                   0x00000008
#define BCHP_UARTA_FCR_DMAM_SHIFT                                  3

/* UARTA :: FCR :: XFIFOR [02:02] */
#define BCHP_UARTA_FCR_XFIFOR_MASK                                 0x00000004
#define BCHP_UARTA_FCR_XFIFOR_SHIFT                                2

/* UARTA :: FCR :: RFIFOR [01:01] */
#define BCHP_UARTA_FCR_RFIFOR_MASK                                 0x00000002
#define BCHP_UARTA_FCR_RFIFOR_SHIFT                                1

/* UARTA :: FCR :: FIFOE [00:00] */
#define BCHP_UARTA_FCR_FIFOE_MASK                                  0x00000001
#define BCHP_UARTA_FCR_FIFOE_SHIFT                                 0

/***************************************************************************
 *LCR - Line Control Register
 ***************************************************************************/
/* UARTA :: LCR :: reserved0 [31:08] */
#define BCHP_UARTA_LCR_reserved0_MASK                              0xffffff00
#define BCHP_UARTA_LCR_reserved0_SHIFT                             8

/* UARTA :: LCR :: DLAB [07:07] */
#define BCHP_UARTA_LCR_DLAB_MASK                                   0x00000080
#define BCHP_UARTA_LCR_DLAB_SHIFT                                  7

/* UARTA :: LCR :: BC [06:06] */
#define BCHP_UARTA_LCR_BC_MASK                                     0x00000040
#define BCHP_UARTA_LCR_BC_SHIFT                                    6

/* UARTA :: LCR :: reserved1 [05:05] */
#define BCHP_UARTA_LCR_reserved1_MASK                              0x00000020
#define BCHP_UARTA_LCR_reserved1_SHIFT                             5

/* UARTA :: LCR :: EPS [04:04] */
#define BCHP_UARTA_LCR_EPS_MASK                                    0x00000010
#define BCHP_UARTA_LCR_EPS_SHIFT                                   4

/* UARTA :: LCR :: PEN [03:03] */
#define BCHP_UARTA_LCR_PEN_MASK                                    0x00000008
#define BCHP_UARTA_LCR_PEN_SHIFT                                   3

/* UARTA :: LCR :: STOP [02:02] */
#define BCHP_UARTA_LCR_STOP_MASK                                   0x00000004
#define BCHP_UARTA_LCR_STOP_SHIFT                                  2

/* UARTA :: LCR :: DLS [01:00] */
#define BCHP_UARTA_LCR_DLS_MASK                                    0x00000003
#define BCHP_UARTA_LCR_DLS_SHIFT                                   0

/***************************************************************************
 *MCR - Modem Control Register
 ***************************************************************************/
/* UARTA :: MCR :: reserved0 [31:07] */
#define BCHP_UARTA_MCR_reserved0_MASK                              0xffffff80
#define BCHP_UARTA_MCR_reserved0_SHIFT                             7

/* UARTA :: MCR :: SIRE [06:06] */
#define BCHP_UARTA_MCR_SIRE_MASK                                   0x00000040
#define BCHP_UARTA_MCR_SIRE_SHIFT                                  6

/* UARTA :: MCR :: AFCE [05:05] */
#define BCHP_UARTA_MCR_AFCE_MASK                                   0x00000020
#define BCHP_UARTA_MCR_AFCE_SHIFT                                  5

/* UARTA :: MCR :: LB [04:04] */
#define BCHP_UARTA_MCR_LB_MASK                                     0x00000010
#define BCHP_UARTA_MCR_LB_SHIFT                                    4

/* UARTA :: MCR :: OUT2 [03:03] */
#define BCHP_UARTA_MCR_OUT2_MASK                                   0x00000008
#define BCHP_UARTA_MCR_OUT2_SHIFT                                  3

/* UARTA :: MCR :: OUT1 [02:02] */
#define BCHP_UARTA_MCR_OUT1_MASK                                   0x00000004
#define BCHP_UARTA_MCR_OUT1_SHIFT                                  2

/* UARTA :: MCR :: RTS [01:01] */
#define BCHP_UARTA_MCR_RTS_MASK                                    0x00000002
#define BCHP_UARTA_MCR_RTS_SHIFT                                   1

/* UARTA :: MCR :: DTR [00:00] */
#define BCHP_UARTA_MCR_DTR_MASK                                    0x00000001
#define BCHP_UARTA_MCR_DTR_SHIFT                                   0

/***************************************************************************
 *LSR - Line Status Register
 ***************************************************************************/
/* UARTA :: LSR :: reserved0 [31:08] */
#define BCHP_UARTA_LSR_reserved0_MASK                              0xffffff00
#define BCHP_UARTA_LSR_reserved0_SHIFT                             8

/* UARTA :: LSR :: RFE [07:07] */
#define BCHP_UARTA_LSR_RFE_MASK                                    0x00000080
#define BCHP_UARTA_LSR_RFE_SHIFT                                   7

/* UARTA :: LSR :: TEMT [06:06] */
#define BCHP_UARTA_LSR_TEMT_MASK                                   0x00000040
#define BCHP_UARTA_LSR_TEMT_SHIFT                                  6

/* UARTA :: LSR :: THRE [05:05] */
#define BCHP_UARTA_LSR_THRE_MASK                                   0x00000020
#define BCHP_UARTA_LSR_THRE_SHIFT                                  5

/* UARTA :: LSR :: BI [04:04] */
#define BCHP_UARTA_LSR_BI_MASK                                     0x00000010
#define BCHP_UARTA_LSR_BI_SHIFT                                    4

/* UARTA :: LSR :: FE [03:03] */
#define BCHP_UARTA_LSR_FE_MASK                                     0x00000008
#define BCHP_UARTA_LSR_FE_SHIFT                                    3

/* UARTA :: LSR :: PE [02:02] */
#define BCHP_UARTA_LSR_PE_MASK                                     0x00000004
#define BCHP_UARTA_LSR_PE_SHIFT                                    2

/* UARTA :: LSR :: OE [01:01] */
#define BCHP_UARTA_LSR_OE_MASK                                     0x00000002
#define BCHP_UARTA_LSR_OE_SHIFT                                    1

/* UARTA :: LSR :: DR [00:00] */
#define BCHP_UARTA_LSR_DR_MASK                                     0x00000001
#define BCHP_UARTA_LSR_DR_SHIFT                                    0

/***************************************************************************
 *MSR - Modem Status Register
 ***************************************************************************/
/* UARTA :: MSR :: reserved0 [31:08] */
#define BCHP_UARTA_MSR_reserved0_MASK                              0xffffff00
#define BCHP_UARTA_MSR_reserved0_SHIFT                             8

/* UARTA :: MSR :: DCD [07:07] */
#define BCHP_UARTA_MSR_DCD_MASK                                    0x00000080
#define BCHP_UARTA_MSR_DCD_SHIFT                                   7

/* UARTA :: MSR :: RI [06:06] */
#define BCHP_UARTA_MSR_RI_MASK                                     0x00000040
#define BCHP_UARTA_MSR_RI_SHIFT                                    6

/* UARTA :: MSR :: DSR [05:05] */
#define BCHP_UARTA_MSR_DSR_MASK                                    0x00000020
#define BCHP_UARTA_MSR_DSR_SHIFT                                   5

/* UARTA :: MSR :: CTS [04:04] */
#define BCHP_UARTA_MSR_CTS_MASK                                    0x00000010
#define BCHP_UARTA_MSR_CTS_SHIFT                                   4

/* UARTA :: MSR :: DDCD [03:03] */
#define BCHP_UARTA_MSR_DDCD_MASK                                   0x00000008
#define BCHP_UARTA_MSR_DDCD_SHIFT                                  3

/* UARTA :: MSR :: TERI [02:02] */
#define BCHP_UARTA_MSR_TERI_MASK                                   0x00000004
#define BCHP_UARTA_MSR_TERI_SHIFT                                  2

/* UARTA :: MSR :: DDSR [01:01] */
#define BCHP_UARTA_MSR_DDSR_MASK                                   0x00000002
#define BCHP_UARTA_MSR_DDSR_SHIFT                                  1

/* UARTA :: MSR :: DCTS [00:00] */
#define BCHP_UARTA_MSR_DCTS_MASK                                   0x00000001
#define BCHP_UARTA_MSR_DCTS_SHIFT                                  0

/***************************************************************************
 *SCR - Scratchpad Register
 ***************************************************************************/
/* UARTA :: SCR :: reserved0 [31:08] */
#define BCHP_UARTA_SCR_reserved0_MASK                              0xffffff00
#define BCHP_UARTA_SCR_reserved0_SHIFT                             8

/* UARTA :: SCR :: SCR [07:00] */
#define BCHP_UARTA_SCR_SCR_MASK                                    0x000000ff
#define BCHP_UARTA_SCR_SCR_SHIFT                                   0

#endif /* #ifndef BCHP_UARTA_H__ */

/* End of File */
