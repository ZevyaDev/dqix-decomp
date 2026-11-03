	.section .text

#if defined(eur) || defined(jpn)
#else
	.global data_02000570
data_02000570:
	.word 0xdb0931a0
	.word 0x630b9412
	.word 0x1420b68f
	.word 0x6a7fc57b
	.word 0x0f5d1900
	.word 0xb2aa0ab3
	.word 0x48461a69
	.word 0x86428915
	.word 0x82417f57
	.word 0xa9e82b82
	.word 0x261fa9da
	.word 0xd7605467
	.word 0x225ad1c7
	.word 0x6b63d555
	.word 0xe2364d0e
	.word 0xa5e0642b
	.word 0x357a4430
	.word 0xb428b2b6
	.word 0xaf93fcea
	.word 0xb5253128
	.word 0xdacf144d
	.word 0x746667d2
	.word 0x3e05e021
	.word 0xdaa622e7
#endif
