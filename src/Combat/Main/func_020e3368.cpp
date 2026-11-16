#include <globaldefs.h>

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

extern "C" void* func_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);

// USA: func_020e3368
extern "C" ARM void func_020e3368(unsigned char* arg0, unsigned char arg1) {
    unsigned char* var0;
    int var1;
    if (!IsLocalWirelessOn_0202b7d8((int*)func_0202ae18())) return;
    var0 = arg0 + 0x20;
    for (var1 = 0; var1 < 8; var1++, var0++) {
        if (*var0 == 0) {
            *var0 = arg1;
            return;
        }
    }
}
