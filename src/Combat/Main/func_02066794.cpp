#include <globaldefs.h>
#include "Resource/FontGlyphTable.h"

#if defined(jpn)
struct Struct_02066794 {
    signed char unknown_0_;
    signed char unknown_1_;
    unsigned char unknown_2_;
};

extern "C" unsigned char* func_020421a0();
extern "C" void __clear(void*, unsigned int);
extern "C" void func_02046458(int arg0, int arg1, unsigned char arg2, char* arg3, unsigned char arg4, unsigned char arg5, void* arg6, int arg7, int arg8);

extern const short data_020e881c[];
extern const short data_020e8824[];

// JPN: func_02066794
extern "C" ARM void func_02066794(void* arg0, int arg1, int arg2, char* arg3, short arg4, short arg5, unsigned char arg6) {
    Struct_02066794 var0;
    __clear(&var0, sizeof(var0));
    var0.unknown_0_ = *(signed char*)(arg3 + 0x18);
    var0.unknown_1_ = *(signed char*)(arg3 + 0x19);
    char* var1 = func_02042a50(*(unsigned char*)(arg3 + 0x1a), (const char*)&var0);
    if (var1 == NULL) return;
    Struct_0203bebc* var2 = func_020429bc(*(unsigned char*)(arg3 + 0x1a));
    if (var2 == NULL) return;
    unsigned char var3 = var2->unknown_2_;
    unsigned char var4 = var2->unknown_3_;
    unsigned char var5 = (func_020421a0() + 0x1000)[0x789];
    if (var5 & 0x80) {
        unsigned char var6;
        for (var6 = 0; var6 < 4; var6++) {
            func_02046458((short)(arg4 + data_020e881c[var6]), (short)(arg5 + data_020e8824[var6]), arg6, var1, var3, var4, arg0, arg1, arg2);
        }
        func_02046458((short)(arg4 + 1), (short)(arg5 + 1), arg6, var1, var3, var4, arg0, arg1, arg2);
    } else if (var5 & 2) {
        func_02046458((short)(arg4 + 1), (short)(arg5 + 1), 1, var1, var3, var4, arg0, arg1, arg2);
        func_02046458(arg4, arg5, arg6, var1, var3, var4, arg0, arg1, arg2);
    } else {
        func_02046458(arg4, arg5, arg6, var1, var3, var4, arg0, arg1, arg2);
    }
}
#endif
