#include <globaldefs.h>
#include "std_library_functions.h"

// USA: ClearMessageParams_02046380
extern "C" ARM void ClearMessageParams_02046380(void* window) {
#if defined(jpn)
    *(signed char*)((char*)window + 0x1750) = -1;
    memset((char*)window + 0x23c, 0, 0x40);
    memset((char*)window + 0x27c, 0, 0x40);
    memset((char*)window + 0x2bc, 0, 0x40);
    memset((char*)window + 0x2fc, 0, 0x40);
    memset((char*)window + 0x33c, 0, 0x40);
    memset((char*)window + 0x37c, 0, 0x400);
    memset((char*)window + 0x780, 0, 0x40);
    memset((char*)window + 0x7c1, 0, 0x10);
    memset((char*)window + 0x7d2, 0, 0x10);
    *(int*)((char*)window + 0x77c) = 0;
    *(unsigned char*)((char*)window + 0x7d1) = 0;
    *(unsigned char*)((char*)window + 0x7c0) = 0;
    *(int*)((char*)window + 0x238) = 0;
#else
    *(signed char*)((char*)window + 0x30) = -1;
    *(signed char*)((char*)window + 0x31) = -1;
    *(signed char*)((char*)window + 0x1880) = -1;
    memset((char*)window + 0x2ec, 0, 0xc0);
    memset((char*)window + 0x3ac, 0, 0x40);
    memset((char*)window + 0x3ec, 0, 0x40);
    memset((char*)window + 0x42c, 0, 0x40);
    memset((char*)window + 0x46c, 0, 0x40);
    memset((char*)window + 0x4ac, 0, 0x400);
    memset((char*)window + 0x8b0, 0, 0x40);
    memset((char*)window + 0x8f1, 0, 0x10);
    memset((char*)window + 0x902, 0, 0x10);

    *(int*)((char*)window + 0x8ac) = 0;
    *(unsigned char*)((char*)window + 0x901) = 0;
    *(unsigned char*)((char*)window + 0x8f0) = 0;
    *(int*)((char*)window + 0x2e8) = 0;

    int (*var0)[2] = (int(*)[2])window;
    for (int i = 0; i < 2; i++) {
        var0[0][i] = 0;
        var0[1][i] = 0;
        var0[2][i] = 0;
        var0[3][i] = 0;
        var0[4][i] = 0;
    }

    *(int*)((char*)window + 0x28) = 0;
    *(int*)((char*)window + 0x2c) = 0;
    *(unsigned char*)((char*)window + 0x19d5) = 0;
    *(unsigned char*)((char*)window + 0x19d6) = 0;
    *(unsigned char*)((char*)window + 0x19d7) = 0;
    *(unsigned char*)((char*)window + 0x19d8) = 0;
#endif
}
