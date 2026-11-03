	.section .text
	.arm

	.global __sinit_ov029_021d90ec
	.extern Encryptor_DecodeFunctionTable
	.extern data_ov029_021da01c, data_ov029_021da094, data_ov029_021da10c
	.extern data_ov029_021da184, data_ov029_021da1fc, data_ov029_021da274

__sinit_ov029_021d90ec:
	stmdb sp!, {lr}
	add r0, pc, #4
	bl Encryptor_DecodeFunctionTable
	ldmia sp!, {pc}
.L_021d90fc:
	.word data_ov029_021da01c, 0x021dbb48
	.word data_ov029_021da094, 0x021dbb48
	.word data_ov029_021da10c, 0x021dbb48
	.word data_ov029_021da184, 0x021dbb48
	.word data_ov029_021da1fc, 0x021dbb48
	.word data_ov029_021da274, 0x021dbb48
	.word 0, 0

	.section .ctor, 4
	.global .p__sinit_ov029_021d90ec
	.global .L_021d90fc
.p__sinit_ov029_021d90ec:
	.word __sinit_ov029_021d90ec
