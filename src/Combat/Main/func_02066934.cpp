#include <globaldefs.h>
#if defined(jpn)

struct Struct_02066934 {
    signed char unknown_0_;
    signed char unknown_1_;
    unsigned char unknown_2_;
};

extern "C" unsigned char* func_020421a0();
extern "C" void __clear(void*, unsigned int);
extern "C" void func_02050678(void* arg0, int arg1, int arg2, void* arg3, int arg4, int arg5, short* arg6, short* arg7);

extern const short data_020e882c[];
extern const short data_jpn_020e8834[];

// JPN: func_02066934
extern "C" ARM void func_02066934(unsigned char* arg0, void* arg1, void* arg2, int arg3, short arg4, unsigned char arg5) {
    short var0;
    short var1;
    Struct_02066934 var2;
    int var4;
    unsigned char var5;
    unsigned char var6;
    unsigned char var7;
    __clear(&var2, sizeof(var2));
    var2.unknown_0_ = *(signed char*)((char*)arg2 + 0x18);
    var2.unknown_1_ = *(signed char*)((char*)arg2 + 0x19);
    var7 = *(unsigned char*)((char*)arg2 + 0x1a);
    var4 = (short)(arg4 - (short)(*(short*)((char*)(*(void**)arg0) + 0xae) * 8));
    var5 = ((unsigned char*)func_020421a0() + 0x1000)[0x789];
    if (var5 & 0x80) {
        for (var6 = 0; var6 < 4; var6++) {
            func_02050678(arg1, (short)(arg3 + data_020e882c[var6]), (short)(var4 + data_jpn_020e8834[var6]), &var2, var7, 1, &var0, &var1);
        }
        func_02050678(arg1, (short)(arg3 + 1), (short)(var4 + 1), &var2, var7, arg5, &var0, &var1);
    } else if (var5 & 2) {
        func_02050678(arg1, (short)(arg3 + 1), (short)(var4 + 1), &var2, var7, 1, &var0, &var1);
        func_02050678(arg1, (short)arg3, (short)var4, &var2, var7, arg5, &var0, &var1);
    } else {
        func_02050678(arg1, arg3, var4, &var2, var7, arg5, &var0, &var1);
    }
}
#endif
