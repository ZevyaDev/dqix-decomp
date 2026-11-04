#include <globaldefs.h>

#if defined(jpn)
// JPN: func_020474b4
extern "C" ARM int func_020474b4(int arg0, int arg1) {
    int var0 = 0;
    if (arg1 < 0) var0 = 1;
    do {
        arg1 /= 10;
        var0++;
    } while (arg1 != 0);
    return var0;
}
#endif
