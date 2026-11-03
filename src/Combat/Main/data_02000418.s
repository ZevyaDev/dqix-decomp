	.section .text

#if defined(eur) || defined(jpn)
#else
	.global data_02000418
data_02000418:
	.word 0x6c13719e
	.word 0x811a9ccd
	.word 0xfda7781e
	.word 0x5602722a
	.word 0xb02ad51a
	.word 0xc00152cc
	.word 0xde711111
	.word 0x2c9aa227
	.word 0x5378a647
	.word 0x10978575
	.word 0xa7906f60
	.word 0x2b8875b2
	.word 0x3a0604d4
	.word 0xa2b64049
	.word 0x4cd35ceb
	.word 0xd535ba1c
	.word 0x27cf6018
	.word 0x07f458d3
	.word 0x885db57d
#endif
