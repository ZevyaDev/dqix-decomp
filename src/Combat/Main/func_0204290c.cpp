#include <globaldefs.h>

#if defined(jpn)
// JPN: func_0204290c
extern "C" ARM int func_0204290c(unsigned int* arg0, unsigned char arg1) {
    if (arg1 >= 0x50) return 0;
    int var0 = arg1 / 8;
    int var1 = arg1 % 8;
    return (unsigned char)(arg0[var0] >> (var1 * 4)) & 0xF;
}
#endif
