/***********************************************************************/
/*                                                                     */
/*   MODULE:  bcmtimer.h                                               */
/*   DATE:    96/12/19                                                 */
/*   PURPOSE: Definitions for Timer block                               */
/*                                                                     */
/***********************************************************************/

/*     Copyright (c) 1999-2005, Broadcom Corporation
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
 */


#ifndef BCMTIMER_H
#define BCMTIMER_H

#include "bcmmips.h"
#include "bchp_common.h"
#include "bchp_timer.h"


#if !defined __ASSEMBLY__
#ifdef _cplusplus
extern "C" {
#endif
#endif

#define TIMR_ADR_BASE  BCM_PHYS_TO_K1(BCHP_PHYSICAL_OFFSET+BCHP_TIMER_TIMER_IS)

#define TIMER_TIMER_IS        0x00
#define TIMER_TIMER_IE0       0x04
#define TIMER_TIMER0_CTRL     0x08
#define TIMER_TIMER1_CTRL     0x0c
#define TIMER_TIMER2_CTRL     0x10
#define TIMER_TIMER3_CTRL     0x14
#define TIMER_TIMER0_STAT     0x18
#define TIMER_TIMER1_STAT     0x1c
#define TIMER_TIMER2_STAT     0x20
#define TIMER_TIMER3_STAT     0x24
#define TIMER_WDTIMEOUT       0x28
#define TIMER_WDCMD           0x2c
#define TIMER_WDCHIPRST_CNT   0x30
#define TIMER_WDCRS           0x34
#define TIMER_TIMER_IE1       0x38

/* Timer interrupt register */
#define TIMER_INT_TIMER0    0x01
#define TIMER_INT_TIMER1    0x02
#define TIMER_INT_TIMER2    0x04
#define TIMER_INT_TIMER3    0x08
#define TIMER_INT_WDINT     0x10

/* Timer control register */
#define TIMER_CTL_ENA               0x80000000
#define TIMER_CTL_MODE              0x40000000
#define TIMER_CTL_TIMEOUT_MASK      0x3FFFFFFF

/* Timer status register */
#define TIMER_STS_COUNTER_MASK      0x3FFFFFFF

#if !defined __ASSEMBLY__



typedef struct Timer {
  unsigned long  TimerInts;			/* 0x00 */
#define TIMER0          0x01
#define TIMER1          0x02
#define TIMER2          0x04
#define TIMER3          0x08
#define WATCHDOG        0x10
  unsigned long  TimerMask;			/* 0x04 */
#define TIMER0EN        0x01
#define TIMER1EN        0x02
#define TIMER2EN        0x04
#define TIMER3EN        0x08
  unsigned long  TimerCtl0;			/* 0x08 */
  unsigned long  TimerCtl1;			/* 0x0c */
  unsigned long  TimerCtl2;			/* 0x10 */
  unsigned long  TimerCtl3;			/* 0x14 */  
#define TIMERENABLE     0x80000000
#define RSTCNTCLR       0x40000000      
  unsigned long  TimerCnt0;			/* 0x18 */
  unsigned long  TimerCnt1;			/* 0x1c */
  unsigned long  TimerCnt2;			/* 0x20 */
  unsigned long  TimerCnt3;			/* 0x24 */
  unsigned long  WatchDogDefCount;	/* 0x28 */

  /* Write 0xff00 0x00ff to Start timer
   * Write 0xee00 0x00ee to Stop and re-load default count
   * Read from this register returns current watch dog count
   */
  unsigned long  WatchDogCtl;		/* 0x2c */

  /* Number of 40-MHz ticks for WD Reset pulse to last */
  unsigned long  WDResetCount;		/* 0x30 */
  unsigned long  WDResetStatus;		/* 0x34 */
} Timer;

#define TIMER ((volatile Timer * const)(TIMR_ADR_BASE))




#ifdef _cplusplus
}
#endif
#endif

#endif
