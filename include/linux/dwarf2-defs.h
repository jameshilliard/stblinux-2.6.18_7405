#ifndef  _ELF_DWARF_H
/* Machine generated from dwarf2.h by scripts/dwarfh.awk */
#define DWARF2_LANG
#define CAT3(a,b,c) _CAT3(a,b,c)
#define _CAT3(a,b,c) __CAT3(a,b,c)
#define __CAT3(a,b,c) a/**/b/**/c
#define __CAT3(a,b,c) a##b##c
#define IFC(a)
#define IFN_C(a) a
#define NL ;
#define QUOTE_THIS(a) a
#define DWARF_preamble .section .debug_frame,"",%progbits;
#define IFC(a) a
#define IFN_C(a)
#define NL \n\t
#define QUOTE_THIS(a) _QUOTE_THIS(a)
#define _QUOTE_THIS(a) #a
#define DWARF_preamble .section .debug_frame \054\042\042\054%progbits
#define DATA_ALIGN_FACTOR	8
#define ADDR_LOC		.quad
#define DATA_ALIGN_FACTOR	4
#define ADDR_LOC		.long
#define CFI_preamble(ORD, pc, code_align, data_align)	\
         DWARF_preamble	NL				\
	.align DATA_ALIGN_FACTOR NL			\
        .globl CAT3(frame,_,ORD) NL			\
CAT3(frame,_,ORD): NL					\
	.long 7f-6f NL					\
6:							\
	.long	DW_CIE_ID NL				\
	.byte	DW_CIE_VERSION NL			\
	.byte 0	 NL					\
	.uleb128 code_align NL				\
	.sleb128 data_align NL				\
	.byte pc NL
#define CFA_define_reference(reg, offset)	\
	.byte DW_CFA_def_cfa NL			\
	.uleb128 reg NL				\
	.uleb128 (offset) NL
#define CFA_define_offset(reg, offset)		\
	.byte (DW_CFA_offset + reg) NL		\
	.uleb128 (offset) NL
#define CFA_restore(reg)			\
        .byte (DW_CFA_restore + reg) NL
#define CFI_postamble()				\
	.align DATA_ALIGN_FACTOR NL				\
7: NL						\
.previous NL
#define FDE_preamble(ORD, initial_address, end_address)	\
        DWARF_preamble NL				\
	.align DATA_ALIGN_FACTOR NL					\
	.long 9f-8f NL					\
8:							\
	.long CAT3(frame,_,ORD) NL			\
	ADDR_LOC initial_address NL			\
	ADDR_LOC (end_address - initial_address) NL
#define FDE_postamble()				\
	.align DATA_ALIGN_FACTOR NL				\
9:	 NL					\
.previous NL
#define CFA_advance_loc(bytes)			\
	.byte DW_CFA_advance_loc+bytes NL
#define CFA_advance_loc1(bytes)			\
	.byte DW_CFA_advance_loc1 NL		\
        .byte bytes NL
#define CFA_undefine_reg(reg)			\
        .byte DW_CFA_undefined NL		\
	.uleb128 reg NL
#define CFA_define_cfa_offset(offset)		\
	.byte DW_CFA_def_cfa_offset NL		\
	.uleb128 (offset) NL
#define CFA_define_cfa_register(reg)		\
	.byte DW_CFA_def_cfa_register NL	\
	.uleb128 reg NL
#define CFA_def_cfa_expression 			\
        .byte DW_CFA_def_cfa_expression	NL	\
	.uleb128 20f-10f NL			\
10:     NL
#define CFA_expression(reg)			\
        .byte DW_CFA_expression	 NL		\
        .uleb128 reg NL				\
	.uleb128 20f-10f NL			\
10:     NL
#define CFA_expression_end			\
20:	 NL
#define CFA_exp_OP_const4s(a)			\
        .byte DW_OP_const4s NL			\
        .long a NL
#define  CFA_exp_OP_swap  .byte DW_OP_swap NL
#define  CFA_exp_OP_dup  .byte DW_OP_dup NL
#define  CFA_exp_OP_drop  .byte DW_OP_drop NL
#define  CFA_exp_OP_deref .byte DW_OP_deref NL
#define  CFA_exp_OP_and   .byte DW_OP_and NL
#define  CFA_exp_OP_div   .byte DW_OP_div NL
#define  CFA_exp_OP_minus .byte DW_OP_minus NL
#define  CFA_exp_OP_mod   .byte DW_OP_mod NL
#define  CFA_exp_OP_neg   .byte DW_OP_neg NL
#define  CFA_exp_OP_plus  .byte DW_OP_plus NL
#define  CFA_exp_OP_not   .byte DW_OP_not NL
#define  CFA_exp_OP_or    .byte DW_OP_or NL
#define  CFA_exp_OP_xor   .byte DW_OP_xor NL
#define  CFA_exp_OP_le    .byte DW_OP_le NL
#define  CFA_exp_OP_ge    .byte DW_OP_ge NL
#define  CFA_exp_OP_eq    .byte DW_OP_eq NL
#define  CFA_exp_OP_lt    .byte DW_OP_lt NL
#define  CFA_exp_OP_gt    .byte DW_OP_gt NL
#define  CFA_exp_OP_ne    .byte DW_OP_ne NL
#define CFA_exp_OP_skip(loc)			\
         .byte DW_OP_skip  NL 			\
	 .hword  loc-.-2 NL
#define CFA_exp_OP_bra(loc)			\
         .byte DW_OP_bra NL			\
	 .hword loc-.-2 NL
#define CFA_exp_OP_plus_uconst(no)		\
         .byte DW_OP_plus_uconst NL		\
         .uleb128 no NL
#define CFA_exp_OP_constu(no)			\
         .byte DW_OP_constu NL			\
	 .uleb128 no NL
#define CFA_exp_OP_consts(no)			\
         .byte DW_OP_consts NL			\
	 .sleb128 no NL
#define CFA_exp_OP_const1u(no)			\
         .byte DW_OP_const1u NL			\
	 .byte no NL
#define CFA_exp_OP_addr(no)			\
         .byte DW_OP_addr NL			\
	 .long no NL
#define CFA_exp_OP_breg(reg,offset)		\
         .byte DW_OP_breg0+reg NL		\
         .sleb128 offset NL
#endif
