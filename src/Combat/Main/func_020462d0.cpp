#include <globaldefs.h>

struct Struct_0204166c;
#if defined(jpn)
extern "C" void func_02041bbc(struct Struct_0204166c* arg0);
#else
extern "C" void func_020416c0(struct Struct_0204166c* arg0);
#endif

struct Struct_020462d0 {
    char unknown_0_[8];
    int unknown_8_;
#if defined(jpn)
    char unknown_c_[0x1a - 0xc];
    unsigned char unknown_1a_;
    char unknown_1b_[0x1c - 0x1b];
#else
    char unknown_c_[0x1c - 0xc];
#endif
};

// USA: func_020462d0
#if defined(jpn)
extern "C" ARM void func_020471d0(char* arg0, int arg1, unsigned short* arg2, int arg3) {
    if (arg2 == 0) {
        return;
    }
    if (arg3 < 0) {
        return;
    }

    enum { Enum_020462d0_65281 = 0xff01 };

    unsigned char var5 = arg1;
    for (int var0 = 0; var0 < arg3; var0++) {
        unsigned short var1 = arg2[var0];
        arg2[var0] = Enum_020462d0_65281;
        if (var1 == Enum_020462d0_65281) {
            return;
        }
        if ((var1 & 0xff00) == 0xff00) {
            continue;
        }
        if (var1 < 0xe) {
            continue;
        }
        if (var1 >= 0x80) {
            continue;
        }
        struct Struct_020462d0* var2 = &((struct Struct_020462d0*)(arg0 + 0x888))[var1];
        if (var2->unknown_8_ < 0) {
            continue;
        }
        if (var5 != var2->unknown_1a_) {
            continue;
        }
        int var3 = ((unsigned char*)(arg0 + 0x1688))[var1] - 1;
        ((unsigned char*)(arg0 + 0x1688))[var1] = var3;
        if ((var3 & 0xff) != 0) {
            continue;
        }
        func_02041bbc((struct Struct_0204166c*)var2);
        int* var4 = (int*)(arg0 + 0x884);
        *var4 = (*var4 - 1) & 0x7f;
    }
}
#else
extern "C" ARM void func_020462d0(char* arg0, unsigned short* arg1, int arg2) {
    if (arg1 == 0) {
        return;
    }
    if (arg2 < 0) {
        return;
    }

    enum { Enum_020462d0_65281 = 0xff01 };

    for (int var0 = 0; var0 < arg2; var0++) {
        unsigned short var1 = arg1[var0];
        arg1[var0] = Enum_020462d0_65281;
        if (var1 == Enum_020462d0_65281) {
            return;
        }
        if ((var1 & 0xff00) == 0xff00) {
            continue;
        }
        if (var1 >= 0x80) {
            continue;
        }
        struct Struct_020462d0* var2 = &((struct Struct_020462d0*)(arg0 + 0x9b8))[var1];
        if (var2->unknown_8_ < 0) {
            continue;
        }
        int var3 = ((unsigned char*)(arg0 + 0x17b8))[var1] - 1;
        ((unsigned char*)(arg0 + 0x17b8))[var1] = var3;
        if ((var3 & 0xff) != 0) {
            continue;
        }
        func_020416c0((struct Struct_0204166c*)var2);
        int* var4 = (int*)(arg0 + 0x9b4);
        *var4 = (*var4 - 1) & 0x7f;
    }
}
#endif
