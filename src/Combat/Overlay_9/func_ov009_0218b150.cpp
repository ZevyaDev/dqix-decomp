#include <globaldefs.h>

#if defined(jpn)
// JPN: func_ov009_0218b150
extern "C" ARM int func_ov009_0218b150(int arg0) {
    if (arg0 >= 0x8340 && arg0 <= 0x837e) {
        arg0 -= 0xa1;
    } else if (arg0 >= 0x8380 && arg0 <= 0x8393) {
        arg0 -= 0xa2;
    }
    if (((arg0 >= 0x829f && arg0 <= 0x82a7) || (arg0 >= 0x82e1 && arg0 <= 0x82e5)) && (arg0 & 1) == 1 || arg0 == 0x82c1) {
        arg0 += 1;
    }
    return arg0;
}
#endif
