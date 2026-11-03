	.section .text

#if defined(eur) || defined(jpn)
#else
	.global data_02000070
data_02000070:
	.word 0x8860ee90
	.word 0xe5358bf8
	.word 0x4c01275e
	.word 0xb775de02
	.word 0xb0a7b2dd
	.word 0x0c3e2460
	.word 0x7c62ce45
	.word 0x475a5b25
	.word 0xbb4369d1
	.word 0xbf573ece
	.word 0x440aaf29
	.word 0xfd1a70b0
	.word 0x71a688ce
	.word 0xcdb167d5
	.word 0x56a558ac
	.word 0x18ab35eb
	.word 0xe28238b3
	.word 0xd8323dd6
	.word 0xe8e2edb5
	.word 0xadb8f895
	.word 0x81a0f2e2
	.word 0x84859402
	.word 0x75f45dec
	.word 0xd684e4fa
	.word 0xcf5148d4
#endif
