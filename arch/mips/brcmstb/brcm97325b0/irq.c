/*
 * arch/mips/brcm97325b0/irq.c
 *
 * Copyright (C) 2001-2007 Broadcom Corporation
 *                    Steven J. Hill <shill@broadcom.com>
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
 *
 * Interrupt routines for Broadcom eval boards
 *
 *	06/02/2009	jipeng - clean up the mess
 */
#include <linux/init.h>
#include <linux/sched.h>
#include <linux/interrupt.h>
#include <linux/irq.h>
#include <asm/io.h>
#include <asm/irq.h>
#include <asm/mipsregs.h>
#include <asm/addrspace.h>
#include <asm/brcmstb/common/brcmstb.h>
#include <asm/smp.h>
#include "brcmirq.h"	

asmlinkage void plat_irq_dispatch(struct pt_regs *regs);

/* define front end and backend int bit groups */
#define  BCM_UPG_IRQ0_IRQEN   	BCM_PHYS_TO_K1(BCHP_PHYSICAL_OFFSET+BCHP_IRQ0_IRQEN)
#define  BCM_UPG_IRQ0_IRQSTAT   BCM_PHYS_TO_K1(BCHP_PHYSICAL_OFFSET+BCHP_IRQ0_IRQSTAT)
#define  BCM_UPG_IRQ1_IRQEN   	BCM_PHYS_TO_K1(BCHP_PHYSICAL_OFFSET+BCHP_IRQ1_IRQEN)
#define  BCM_UPG_IRQ1_IRQSTAT   BCM_PHYS_TO_K1(BCHP_PHYSICAL_OFFSET+BCHP_IRQ1_IRQSTAT)

/*
 * Following is the complete map of interrupts in the system. Please
 * keep this up to date and make sure you comment your changes in the
 * comment block above with the date, your initials and what you did.
 *
 * There are two different interrupts in the system. The first type
 * is an actual hardware interrupt. We have a total of eight MIPS
 * interrupts. Two of them are software interrupts and are ignored.
 * The remaining six interrupts are actually monitored and handled
 * by low-level interrupt code in 'int-handler.S' that call dispatch
 * functions in this file to call the IRQ descriptors in the Linux
 * kernel.
 * 
 * The second type is the Linux kernel system interrupt which is
 * a table of IRQ descriptors (see 'include/linux/irq.h' and
 * 'include/linux/interrupt.h') that relate the hardware interrupt
 * handler types to the software IRQ descriptors. This is where all
 * of the status information and function pointers are defined so
 * that registration, releasing, disabling and enabling of interrupts
 * can be performed. Multiple system interrupts can be tied to a
 * single hardware interrupt. Examining this file along with the
 * other three aforementioned files should solidify the concepts.
 *
 * The first table simply shows the MIPS IRQ mapping:
 *
 *   MIPS IRQ   Source
 *   --------   ------
 *       0      Software Used for SMP IPC (unused in UP kernel)
 *       1      Software *Ignored*
 *       2      Hardware BRCMSTB chip Internal
 *       3      Hardware External *Unused*
 *       4      Hardware External *Unused*
 *       5      Hardware External *Unused*
 *       6      Hardware External *Unused*
 *       7      R4k timer 
 *
 * The second table shows the table of Linux system interrupt
 * descriptors and the mapping to the hardware IRQ sources:
 *
 *   System IRQ   MIPS IRQ   Source
 *   ----------   --------   ------
 *
 *        0         2         	Chip Interrupt Controller/Dedicated Handler
 *      1- 32       2         	The L1 32 Interrupt Controller Bits W0
 *      33 - 64     2         	The L1 32 Interrupt Controller Bits W1
 *      65 - 96     2         	The L1 32 Interrupt Controller Bits W2
 *      100         7		R4k timer (used for master system time)
 * Again, I cannot stress this enough, keep this table up to date!!!
 */

/*
 * INTC functions
 */
static void brcm_intc_enable(unsigned int irq)
{
	unsigned int shift;
	unsigned long flags;

	local_irq_save(flags);
	if (irq > 0 && irq <= 32)
	{
		shift = irq - 1;
		CPUINT1C->IntrW0MaskClear = (0x1UL<<shift);
	}
	else if (irq > 32 && 
			irq <= 32+32)
	{
		shift = irq - 32 -1;
		CPUINT1C->IntrW1MaskClear = (0x1UL<<shift);
	}
	else if (irq > 64 && 
			irq <= 64+32)
	{
		shift = irq - 64 -1;
		CPUINT1C->IntrW2MaskClear = (0x1UL<<shift);
	}
	local_irq_restore(flags);
}

static void brcm_intc_disable(unsigned int irq)
{
	unsigned int shift;
	unsigned long flags;

	local_irq_save(flags);
	if (irq > 0 && irq <= 32)
	{
		shift = irq - 1;

		CPUINT1C->IntrW0MaskSet = (0x1UL<<shift);
	}
	else if (irq > 32 && 
			irq <= 32+32)
	{
		shift = irq - 32 -1;
		CPUINT1C->IntrW1MaskSet = (0x1UL<<shift);
	}
	else if (irq > 64 && 
			irq <= 64+32)
	{
		shift = irq - 64 -1;
		CPUINT1C->IntrW2MaskSet = (0x1UL<<shift);
	}
	local_irq_restore(flags);

}

static unsigned int brcm_intc_startup(unsigned int irq)
{ 
	brcm_intc_enable(irq);
	return 0; /* never anything pending */
}

static void brcm_intc_end(unsigned int irq)
{
	if (!(irq_desc[irq].status & (IRQ_DISABLED|IRQ_INPROGRESS)))
		brcm_intc_enable(irq);
}

static void brcm_intc_ack(unsigned int irq)
{
	/* Do nothing */
}

/*
 * THT: These INTC disable the interrupt before calling the IRQ handler
 */
static struct hw_interrupt_type brcm_intc_type = {
	typename: "BCM INTC",
	startup: brcm_intc_startup,
	shutdown: brcm_intc_disable,
	enable: brcm_intc_enable,
	disable: brcm_intc_disable,
	ack: brcm_intc_disable,
	end: brcm_intc_end,
	NULL
};

/*
 * IRQ7 functions
 */
void brcm_mips_int7_dispatch(struct pt_regs *regs)
{		
	do_IRQ(BCM_LINUX_SYSTIMER_IRQ, regs);
}

static void brcm_mips_int7_enable(unsigned int irq)
{
	set_c0_status(STATUSF_IP7);
}

static void brcm_mips_int7_disable(unsigned int irq)
{
	clear_c0_status(STATUSF_IP7);
}

static void brcm_mips_int7_ack(unsigned int irq)
{
	/* Already done in brcm_irq_dispatch */
}

static unsigned int brcm_mips_int7_startup(unsigned int irq)
{ 
	brcm_mips_int7_enable(irq);

	return 0; /* never anything pending */
}

static void brcm_mips_int7_end(unsigned int irq)
{
	if (!(irq_desc[irq].status & (IRQ_DISABLED|IRQ_INPROGRESS)))
		brcm_mips_int7_enable(irq);
}

static struct hw_interrupt_type brcm_mips_int7_type = {
	typename: "BCM MIPS TIMER INT",
	startup: brcm_mips_int7_startup,
	shutdown: brcm_mips_int7_disable,
	enable: brcm_mips_int7_enable,
	disable: brcm_mips_int7_disable,
	ack: brcm_mips_int7_ack,
	end: brcm_mips_int7_end,
	NULL
};


/*
 * IRQ2 functions
 */

static void brcm_mips_int2_enable(unsigned int irq)
{
	set_c0_status(STATUSF_IP2);
}

static void brcm_mips_int2_disable(unsigned int irq)
{
	/* DO NOT DISABLE MIPS int2 so that we do not mess with other 
		int2 ints(THERE ARE A LOT OF THESE!). */
	clear_c0_status(STATUSF_IP2);
}

static int g_brcm_intc_cnt[96];

void brcm_mips_int2_dispatch(struct pt_regs *regs)
{
	unsigned int pendingIrqs,pendingIrqs1,pendingIrqs2, shift,irq;
    
	brcm_mips_int2_disable(0);
	pendingIrqs = CPUINT1C->IntrW0Status & ~(CPUINT1C->IntrW0MaskStatus);
	pendingIrqs1 = CPUINT1C->IntrW1Status & ~(CPUINT1C->IntrW1MaskStatus);
	pendingIrqs2 = CPUINT1C->IntrW2Status & ~(CPUINT1C->IntrW2MaskStatus);

	dump_INTC_regs();
#ifdef	DEBUG_UARTA_INTR
	gDebugPendingIrq0 = pendingIrqs &= ~(gDebugMaskW0 = CPUINT1C->IntrW0MaskStatus);
	gDebugPendingIrq1 = pendingIrqs1 &= ~(gDebugMaskW1 = CPUINT1C->IntrW1MaskStatus);
	gDebugPendingIrq2 = pendingIrqs2 &= ~(gDebugMaskW2 = CPUINT1C->IntrW2MaskStatus);
#endif	// DEBUG_UARTA_INTR

	for (irq=1; irq<=32; irq++)
	{
		shift = irq-1;
		if ((0x1 << shift) & pendingIrqs)
				do_IRQ(irq, regs);
		}

	for (irq = 32+1; irq <= 32+32; irq++)
	{
		shift = irq - 32 -1;
		if ((0x1 << shift) & pendingIrqs1)
			do_IRQ(irq, regs);
	}
	
	for (irq = 64+1; irq <= 64+32; irq++)
	{
		shift = irq - 64 -1;
		if ((0x1 << shift) & pendingIrqs2)
			do_IRQ(irq, regs);
	}

	brcm_mips_int2_enable(0);
}

/*
 * Broadcom specific IRQ setup
 */
void __init brcm_irq_setup(void)
{
	int irq;
	extern int noirqdebug;

	printk("timer irq %d\n", BCM_LINUX_SYSTIMER_IRQ);
	CPUINT1C->IntrW0MaskSet = 0xffffffff;
	CPUINT1C->IntrW1MaskSet = 0xffffffff;
	CPUINT1C->IntrW2MaskSet = 0xffffffff;
	
	change_c0_status(ST0_IE, 0);
	
	/* Setup timer interrupt */
	irq_desc[BCM_LINUX_SYSTIMER_IRQ].status = IRQ_DISABLED;
	irq_desc[BCM_LINUX_SYSTIMER_IRQ].action = 0;
	irq_desc[BCM_LINUX_SYSTIMER_IRQ].depth = 1;
	irq_desc[BCM_LINUX_SYSTIMER_IRQ].chip = &brcm_mips_int7_type;
	PRINTK("setup timer int\n");

	/* Install all the 7xxx IRQs */
	for (irq = 1; irq <= 96; irq++) 
	{
		irq_desc[irq].status = IRQ_DISABLED;
		irq_desc[irq].action = 0;
		irq_desc[irq].depth = 1;
		irq_desc[irq].chip = &brcm_intc_type;
		g_brcm_intc_cnt[irq -1] = 0;
	}
	PRINTK("setup int 1 to 96\n");

	noirqdebug = 1; // THT Disable spurious interrupt checking, as UARTA would cause in BE, (USB also).
	
	brcm_mips_int2_enable(0);
	//enable the UARTA/B in L2 
	*((volatile unsigned long*)BCM_UPG_IRQ0_IRQEN) |= BCHP_IRQ0_IRQEN_uarta_irqen_MASK | BCHP_IRQ0_IRQEN_uartb_irqen_MASK;
}

void __init arch_init_irq(void)
{
	brcm_irq_setup();
}

asmlinkage void plat_irq_dispatch(struct pt_regs *regs)
{
       unsigned int pending = read_c0_cause();
       pending &= read_c0_status();

       if (pending & STATUSF_IP7)
               brcm_mips_int7_dispatch(regs);
       else if (pending & STATUSF_IP2)
               brcm_mips_int2_dispatch(regs);
       else
               spurious_interrupt(regs);
}

/* jipeng - test unused MIPS int 

BUILD_MIPS_INT_HANDLER(0);					
BUILD_MIPS_INT_HANDLER(1);					
BUILD_MIPS_INT_HANDLER(3);					
BUILD_MIPS_INT_HANDLER(4);				
BUILD_MIPS_INT_HANDLER(5);					
BUILD_MIPS_INT_HANDLER(6);					
*/
