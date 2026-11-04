#include <globaldefs.h>

#if defined(jpn)
// JPN: func_ov012_02185fd4
extern "C" ARM int func_ov012_02185fd4(int arg0) {
    if (arg0 >= 0x8340 && arg0 <= 0x837e) {
        arg0 -= 0xa1;
    } else if (arg0 >= 0x8380 && arg0 <= 0x8393) {
        arg0 -= 0xa2;
    }
    if (!(((arg0 >= 0x829f && arg0 <= 0x82a7) || (arg0 >= 0x82e1 && arg0 <= 0x82e5)) && (arg0 & 1) == 1)) {
        if (arg0 != 0x82c1) {
            return arg0;
        }
    }
    return arg0 + 1;
}
#endif
