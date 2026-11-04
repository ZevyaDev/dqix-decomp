#include <globaldefs.h>
#if defined(jpn)

// JPN: func_02046458
extern "C" ARM void func_02046458(int arg0, short arg1, unsigned char arg2, unsigned char* arg3,
                                  short arg4, short arg5, unsigned char* arg6, short arg7, int arg8) {
    if (arg3 == 0 || arg6 == 0) {
        return;
    }
    unsigned char var2 = (arg2 << 4) & 0xff;
    short var0 = (arg7 & 1) + (arg7 >> 1);
    unsigned char var1 = 0;
    unsigned char* var3 = arg6 + var0 * arg1;
    for (short var4 = 0; var4 < arg5; var4++, var3 += var0) {
        for (short var5 = 0; var5 < arg4; var5++) {
            if (*arg3 & (1 << var1)) {
                short var6 = arg0 + var5;
                if (var6 & 1) {
                    unsigned char var7 = var3[var6 >> 1];
                    var3[var6 >> 1] = (var7 & 0xf) | var2;
                } else {
                    var3[var6 >> 1] &= 0xf0;
                    var3[var6 >> 1] |= arg2;
                }
            }
            var1++;
            if (var1 >= 8) {
                var1 = 0;
                arg3++;
            }
        }
    }
}
#endif
