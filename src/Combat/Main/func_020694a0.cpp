#include <globaldefs.h>
#if defined(jpn)

// JPN: func_020694a0
extern "C" ARM int func_020694a0(int arg0, unsigned int arg1) {
    if (arg1 >= 0xff01 && arg1 <= 0xff18) return 1;
    return (arg1 & 0xffe0) == 0xffe0;
}
#endif
