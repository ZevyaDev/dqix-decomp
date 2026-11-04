#include <globaldefs.h>
#if defined(jpn)

struct Struct_02050678 {
    char unknown_0_[0xb4];
    short unknown_b4_;
    short unknown_b6_;
};

extern "C" int func_0204fc40(Struct_02050678* arg0, const char** arg1, const char* arg2, short* arg3, int arg4);
extern "C" void func_0204f284(Struct_02050678* arg0, char* arg1, short arg2, short arg3, int arg4,
                              unsigned char arg5, unsigned char arg6);
extern "C" char* func_02042a50(int arg0, const char* arg1);
extern "C" int func_02042764(const char* arg0);

extern const char data_020f0270[];
extern const char data_020f0276[];
extern const char data_020f0279[];
extern const char data_020f027c[];
extern const char data_020f0280[];
extern const char data_020f0283[];
extern const char data_020f0286[];
extern const char data_020f02b4[];

// JPN: func_02050678
extern "C" ARM void func_02050678(Struct_02050678* arg0, short arg1, short arg2, const char* arg3, short arg4,
                                  unsigned char arg5, short* arg6, short* arg7) {
    short var3[8];
    const char* var4;
    char var6[2];
    unsigned char var13;
    short var1;
    short var2;
    bool var15;
    bool var14;
    unsigned short var16;
    unsigned short var17;
    short var18;
    short var19;
    short var20;
    short var25;
    short var26;
    short var27;
    short var28;
    bool var12;
    const char* var22;
    short var8;
    if (arg3 == NULL) return;
    unsigned char var5 = arg5;
    var12 = 0;
    var4 = arg3;
    var13 = var5 << 4;
    *arg6 = *arg7 = 0;
    var8 = arg4;
    var1 = arg1;
    var2 = arg2;
    if (arg4 == 6) var12 = 1;
    var16 = var14 = 0;
    var17 = var14;
    var18 = var14;
    var19 = var14;
    var20 = arg4;
    if (arg4 == 6) var20 = 12;
    while (*var4 != 0) {
        var6[0] = *var4;
        var6[1] = var4[1];
        if ((var6[0] == '\\' && var6[1] == 'n') || (var6[0] == '\r' && var6[1] == '\n')) {
            arg2 += arg0->unknown_b6_;
            arg1 = var1;
            var4 += 2;
            continue;
        }
        if (var6[0] == '\n') {
            arg2 += arg0->unknown_b6_;
            arg1 = var1;
            var4 += 1;
            continue;
        }
        if (*var4 == '<') {
            var4++;
            if (func_0204fc40(arg0, &var4, data_020f0280, var3, 1)) {
                arg1 += var3[0];
                continue;
            }
            if (func_0204fc40(arg0, &var4, data_020f0283, var3, 1)) {
                arg2 += var3[0];
                continue;
            }
            if (func_0204fc40(arg0, &var4, data_020f0286, var3, 2)) {
                arg1 += var3[0];
                arg2 += var3[1];
                continue;
            }
            if (func_0204fc40(arg0, &var4, data_020f0276, var3, 1)) {
                arg1 = var3[0];
                continue;
            }
            if (func_0204fc40(arg0, &var4, data_020f0279, var3, 1)) {
                arg2 = var3[0];
                continue;
            }
            if (func_0204fc40(arg0, &var4, data_020f027c, var3, 2)) {
                arg1 = var3[0];
                arg2 = var3[1];
                continue;
            }
            if (func_0204fc40(arg0, &var4, data_020f02b4, var3, 1)) {
                var3[0] &= 0xf;
                var13 = var3[0] << 4;
                var5 = var3[0];
                continue;
            }
            if (func_0204fc40(arg0, &var4, data_020f0270, var3, 1)) {
                var8 = (unsigned char)var3[0];
                if (var8 != 8 && var8 != 10 && var8 != 12) var8 = arg4;
                continue;
            }
            var4--;
        }
        if (var6[0] == '[') {
            var14 = var15 = 0;
            var16 = var15;
            var17 = var15;
            var22 = var4 + 1;
            while (*var22 != 0) {
                if (*var22 == ']') {
                    var14 = 1;
                    break;
                }
                if (*var22 == '/') {
                    var15 = 1;
                    var22++;
                    continue;
                }
                if (var15) var17 += func_02042764(var22);
                unsigned char var23 = *var22;
                if ((var23 >= 0x81 && var23 <= 0x9f) || (var23 >= 0xe0 && var23 <= 0xea)) var22 += 2;
                else var22 += 1;
                if (!var15) var16 += 1;
            }
        }
        if (var14) {
            int var21 = 1;
            switch (var6[0]) {
            case '[':
                var18 = arg1;
                var19 = arg2;
                break;
            case '/':
                var25 = arg1;
                var26 = arg2;
                var27 = arg0->unknown_b4_;
                var28 = arg0->unknown_b6_;
                var20 = var8;
                var8 = 6;
                arg1 = var18 + (short)(((short)((var16 - 1) * var27 + var20) - (short)var17) >> 1);
                arg2 = var19 - 7;
                arg0->unknown_b4_ = 7;
                break;
            case ']':
                arg0->unknown_b4_ = var27;
                arg0->unknown_b6_ = var28;
                arg1 = var25;
                arg2 = var26;
                var8 = var20;
                var14 = 0;
                break;
            default:
                var21 = 0;
                break;
            }
            if (var21) {
                var4++;
                continue;
            }
        }
        if (var8 != 6 || var20 == 12) {
            char* var9 = func_02042a50(var8, var6);
            if (var9 != NULL) {
                if (var8 == 6) {
                    unsigned char var29 = 0x60;
                    unsigned char var30 = 6;
                    if (var12) {
                        var29 = var13;
                        var30 = var5;
                    }
                    func_0204f284(arg0, var9, arg1, arg2, var8, var29, var30);
                } else {
                    func_0204f284(arg0, var9, arg1, arg2, var8, var13, var5);
                }
                short var11 = arg1 + var8;
                short var10 = arg2 + var8;
                if (*arg6 < var11) *arg6 = var11;
                if (*arg7 < var10) *arg7 = var10;
            }
        }
        if (var8 == 6) arg0->unknown_b4_ = func_02042764(var6);
        {
            unsigned char var24 = *var4;
            if ((var24 >= 0x81 && var24 <= 0x9f) || (var24 >= 0xe0 && var24 <= 0xea)) var4++;
        }
        var4++;
        arg1 += arg0->unknown_b4_;
    }
    *arg6 -= var1;
    *arg7 -= var2;
}
#endif
