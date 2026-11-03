	.section .text

#if defined(eur) || defined(jpn)
#else
	.global data_02000344
data_02000344:
	.word 0xd0c6ede5
	.word 0x0bff66f9
	.word 0x4050a5bc
	.word 0x13b38af7
	.word 0xb0ec7cc1
	.word 0xd7e0bb98
	.word 0xeecdb56a
	.word 0x3a524bb8
	.word 0x43425d79
	.word 0xa8947233
	.word 0xebe84893
	.word 0x04e23a55
	.word 0xffd2ee61
	.word 0x8fd89bf0
	.word 0x17fd72bb
	.word 0x52467ba1
	.word 0x6f8551bf
	.word 0xe8234caa
#endif
