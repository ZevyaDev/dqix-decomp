#include <globaldefs.h>

// USA: SetSubBGMode_020c3984
extern "C" ARM void SetSubBGMode_020c3984(unsigned int bgMode) {
    volatile unsigned int* dISPCNTSUB = (volatile unsigned int*)0x4001000;
    *dISPCNTSUB = (*dISPCNTSUB & ~7) | bgMode;
}
