	.section .text

#if defined(eur) || defined(jpn)
#else
	.global data_020000d8
data_020000d8:
	.word 0x68756285
	.word 0x762dff72
	.word 0x19288c75
	.word 0xb483f4f0
	.word 0x3496a164
	.word 0x4c939c34
	.word 0x4fa59284
	.word 0x5c63db30
	.word 0x5bcb6206
	.word 0xc97802e4
	.word 0x13b76c8a
	.word 0x6dc0685f
	.word 0x1ad6deee
	.word 0x2971ccbd
	.word 0xdc0a070e
	.word 0x788b0375
	.word 0x172040c8
	.word 0x46879fa6
	.word 0xccd0ec55
	.word 0x98297c9a
	.word 0xce6bcdb0
	.word 0xb0d07f71
	.word 0xa68bb794
	.word 0xf31d12bc
	.word 0xb7011ab4
	.word 0xf5ca2140
#endif
