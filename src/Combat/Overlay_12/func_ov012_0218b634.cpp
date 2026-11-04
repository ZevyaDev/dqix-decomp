#include <globaldefs.h>

#if defined(jpn)

#include <std_library_functions.h>

struct Struct_02072a68_2;

struct Struct_ov012_0218b634 {
    unsigned char unknown_0_[0x1314];
    char unknown_1314_[0x60];
    unsigned char unknown_1374_;
};

extern "C" int func_02042428(char* arg0, int arg1);
extern "C" int func_02041a28(char* arg0, int arg1);
extern "C" int func_02042638(char* arg0, const char* arg1, int arg2);
extern "C" int func_020420e8(char* arg0, int arg1);
extern "C" int func_02041a90(char* arg0, int arg1, int arg2);
extern "C" int func_02042058(char* arg0, const char* arg1);
extern "C" const char* func_02072a68(Struct_02072a68_2* arg0, short arg1);

// JPN: func_ov012_0218b634
extern "C" ARM void func_ov012_0218b634(Struct_ov012_0218b634* arg0, char* arg1) {
    char var1[3];
    char var0[3];
    const char* var3;
    int var2;
    if (arg1 == NULL) {
        return;
    }
    var1[2] = 0;
    func_02042428(arg1, 12);
    func_02041a28(arg1, 0x32);
    func_02042638(arg1, func_02072a68((Struct_02072a68_2*)arg0->unknown_1314_, 0xe), 0x18);
    if (arg0->unknown_1374_ == 0) {
        for (var2 = 0; var2 < 6; var2++) {
            var3 = func_02072a68((Struct_02072a68_2*)arg0->unknown_1314_, var2 + 0xc8);
            func_020420e8(arg1, var2 * 16 + 0x1d);
            for (int var4 = 0; var4 < 5; var4++) {
                memcpy(var1, var3 + var4 * 2, 2);
                func_02041a28(arg1, var4 * 16 + 0x10);
                func_02042058(arg1, var1);
            }
        }
        const char* var5 = func_02072a68((Struct_02072a68_2*)arg0->unknown_1314_, 0xce);
        func_020420e8(arg1, 0x7d);
        for (int var6 = 0; var6 < 4; var6++) {
            memcpy(var1, var5 + var6 * 2, 2);
            func_02041a28(arg1, var6 * 16 + 0x10);
            func_02042058(arg1, var1);
        }
        for (var2 = 0; var2 < 6; var2++) {
            var3 = func_02072a68((Struct_02072a68_2*)arg0->unknown_1314_, var2 + 0xcf);
            func_020420e8(arg1, var2 * 16 + 0x1d);
            for (int var9 = 0; var9 < 5; var9++) {
                memcpy(var1, var3 + var9 * 2, 2);
                func_02041a28(arg1, var9 * 16 + 0x68);
                func_02042058(arg1, var1);
            }
        }
    } else {
        for (var2 = 0; var2 < 6; var2++) {
            var3 = func_02072a68((Struct_02072a68_2*)arg0->unknown_1314_, var2 + 0x12c);
            func_020420e8(arg1, var2 * 16 + 0x1d);
            for (int var4 = 0; var4 < 5; var4++) {
                memcpy(var1, var3 + var4 * 2, 2);
                func_02041a28(arg1, var4 * 16 + 0x10);
                func_02042058(arg1, var1);
            }
        }
        const char* var5 = func_02072a68((Struct_02072a68_2*)arg0->unknown_1314_, 0x132);
        func_020420e8(arg1, 0x7d);
        for (int var6 = 0; var6 < 4; var6++) {
            memcpy(var1, var5 + var6 * 2, 2);
            func_02041a28(arg1, var6 * 16 + 0x10);
            func_02042058(arg1, var1);
        }
        for (var2 = 0; var2 < 6; var2++) {
            var3 = func_02072a68((Struct_02072a68_2*)arg0->unknown_1314_, var2 + 0x133);
            func_020420e8(arg1, var2 * 16 + 0x1d);
            for (int var9 = 0; var9 < 5; var9++) {
                memcpy(var1, var3 + var9 * 2, 2);
                func_02041a28(arg1, var9 * 16 + 0x68);
                func_02042058(arg1, var1);
            }
        }
    }
    var0[2] = 0;
    int var10 = 0xcb;
    const char* var11;
    int var12;
    if (arg0->unknown_1374_ == 0) {
        var11 = func_02072a68((Struct_02072a68_2*)arg0->unknown_1314_, 0xd5);
    } else {
        var11 = func_02072a68((Struct_02072a68_2*)arg0->unknown_1314_, var10 + 0x6e);
    }
    func_02042428(arg1, 10);
    for (var12 = 0; var12 < 2; var12++, var10 += 10) {
        func_02041a90(arg1, var10, 0x1e);
        memcpy(var0, var11 + var12 * 2, 2);
        func_02042058(arg1, var0);
    }
    func_02041a90(arg1, 0xd3, 0x2d);
    func_02042058(arg1, func_02072a68((Struct_02072a68_2*)arg0->unknown_1314_, 0x191));
    func_02041a90(arg1, 0xd3, 0x3d);
    func_02042058(arg1, func_02072a68((Struct_02072a68_2*)arg0->unknown_1314_, 0x192));
    func_02041a90(arg1, 0xc7, 0x4f);
    func_02042058(arg1, func_02072a68((Struct_02072a68_2*)arg0->unknown_1314_, 0x193));
    var11 = func_02072a68((Struct_02072a68_2*)arg0->unknown_1314_, 0x194);
    var10 = 0xc6;
    func_02042428(arg1, 10);
    for (var12 = 0; var12 < 3; var12++, var10 += 10) {
        func_02041a90(arg1, var10, 0x5f);
        memcpy(var0, var11 + var12 * 2, 2);
        func_02042058(arg1, var0);
    }
    var11 = func_02072a68((Struct_02072a68_2*)arg0->unknown_1314_, 0x190);
    var10 = 0xc5;
    func_02042428(arg1, 10);
    for (int var13 = 0; var13 < 3; var13++, var10 += 10) {
        func_02041a90(arg1, var10, 0x6e);
        memcpy(var0, var11 + var13 * 2, 2);
        func_02042058(arg1, var0);
    }
}

#endif
