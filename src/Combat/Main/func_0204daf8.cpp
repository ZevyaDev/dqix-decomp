#include <globaldefs.h>
#include <std_library_functions.h>

#if defined(jpn)

struct Struct_0204daf8 {
    char unknown_0_[8];
    unsigned char* unknown_8_;
    short unknown_c_[18];
    short unknown_30_[18];
    short unknown_54_[18];
    short unknown_78_[18];
    char unknown_9c_[8];
    int unknown_a4_;
    short unknown_a8_;
    short unknown_aa_;
    char unknown_ac_[4];
    short unknown_b0_;
    short unknown_b2_;
    short unknown_b4_;
    short unknown_b6_;
    short unknown_b8_;
    short unknown_ba_;
    short unknown_bc_;
    short unknown_be_;
    char unknown_c0_[5];
    unsigned char unknown_c5_;
    unsigned char unknown_c6_;
    unsigned char unknown_c7_;
    char unknown_c8_[0x13];
    signed char unknown_db_[4];
};

extern "C" unsigned char func_02042764(void* arg0);
extern "C" char* func_02042a50(int arg0, const char* arg1);
extern "C" void func_0204cc68(Struct_0204daf8* arg0, int arg1, short arg2, short arg3, short arg4, short arg5);
extern "C" void FillTextWindowRect_0204f914(Struct_0204daf8* textWindow, int colorIndex, short left, short top, short right, short bottom);
extern "C" void func_0204ea5c(Struct_0204daf8* arg0);
extern "C" void func_0204ecb4(Struct_0204daf8* arg0, int arg1, int arg2, int arg3, int arg4, signed char* arg5);
extern "C" int func_0204fc40(void* arg0, char** arg1, char* arg2, short* arg3, int arg4);
extern "C" void func_0204f3bc(Struct_0204daf8* arg0, int arg1);
extern "C" void func_0204fae8(Struct_0204daf8* arg0);
extern "C" void func_0204fa0c(Struct_0204daf8* arg0, short arg1, short arg2);
extern "C" void func_0204f284(Struct_0204daf8* arg0, char* arg1, short arg2, short arg3, int arg4, unsigned char arg5, unsigned char arg6);
extern "C" void func_0204e038(Struct_0204daf8* arg0, char* arg1, short arg2, short arg3, short arg4, short arg5, unsigned char arg6, unsigned char arg7);

extern char data_020f0270[];
extern char data_020f0276[];
extern char data_020f0279[];
extern char data_020f027c[];
extern char data_020f0280[];
extern char data_020f0283[];
extern char data_020f0286[];
extern char data_020f028a[];
extern char data_020f0290[];
extern char data_020f0297[];
extern char data_020f029e[];
extern char data_020f02a4[];
extern char data_020f02ab[];
extern char data_020f02b0[];
extern char data_020f02b4[];
extern char data_020f02ba[];
extern char data_020f02c0[];
extern char data_020f02c5[];
extern char data_020f02c8[];
extern char data_020f02cb[];
extern char data_020f02d2[];
extern char data_020f02d9[];
extern char data_020f02e1[];
extern char data_020f02e5[];
extern char data_020f02e9[];
extern char data_020f02ed[];
extern char data_020f02f1[];
extern char data_020f02f7[];
extern char data_020f02fc[];
extern char data_020f0303[];
extern char data_020f030a[];
extern char data_020f030f[];
extern char data_020f0312[];

// JPN: func_0204daf8
extern "C" ARM void func_0204daf8(Struct_0204daf8* arg0, char* arg1, short arg2) {
    char var0[2];
    char* var1;
    short var2[8];
    int var3;
    int var4;
    short var5;
    short var6;
    unsigned char* var7;
    short var8;
    unsigned char* var9;
    short var10;
    int var11;
    short var12;
    short var13;
    short var14;
    short var15, var16, var17, var18, var19, var20;
    int var21;
    int var22, var23, var24, var25;
    short var26, var27, var28, var29;
    short var30, var31, var32, var33;
    int var34;
    short var35, var36, var37, var38;
    short var39;
    short var40;
    int var41;
    unsigned short var42;
    unsigned short var43;
    unsigned short var44;
    unsigned short var45;
    short var46;
    short var47;
    unsigned char var48;
    short var49;
    short var50;
    short var51;
    short var52;
    unsigned char var53, var54, var55, var56;
    short var57, var58, var59, var60;
    short var61, var62, var63, var64;
    char* var65;
    char* var66;

    var66 = arg1;
    if (var66 == 0) return;

    var11 = -1;
    var12 = 0;
    arg0->unknown_c5_ &= ~2;
    var8 = (arg0->unknown_a8_ << 3) >> 1;
    var40 = arg0->unknown_b6_;
    var10 = var40 * var8;
    var6 = arg0->unknown_b2_;
    var9 = arg0->unknown_8_;
    var13 = 0;
    var14 = 0;
    var15 = 0;
    var16 = 0;
    var17 = 0;
    var18 = 0;
    var19 = 0;
    var20 = 0;
    var25 = var21 = var24 = var23 = var22 = -1;
    var26 = 0;
    var27 = 0;
    var28 = 0;
    var29 = 0;
    var30 = 0;
    var31 = 0;
    var32 = 0;
    var33 = 0;
    var34 = -1;
    var35 = 0;
    var36 = 0;
    var37 = 0;
    var38 = 0;
    var3 = -1;
    var4 = arg0->unknown_c7_;
    var7 = var9 + var6 * var8;
    var5 = arg0->unknown_b0_;
    var39 = arg0->unknown_b4_;

    memset(arg0->unknown_8_, 0, arg0->unknown_a4_);

    if (arg0->unknown_c5_ & 4) {
        var41 = 0;
    } else {
        short var67 = 0;
        short var68 = 0;
        short var69 = arg0->unknown_a8_ << 3;
        short var70 = arg0->unknown_aa_ << 3;
        var68 += arg0->unknown_db_[0];
        var70 -= arg0->unknown_db_[0] + arg0->unknown_db_[1];
        var67 += arg0->unknown_db_[2];
        var69 -= arg0->unknown_db_[2] + arg0->unknown_db_[3];
        FillTextWindowRect_0204f914(arg0, 0x11, var67, var68, var69, var70);
        func_0204ea5c(arg0);
        var41 = 0x11;
    }

    if (arg2 > 0) {
        short var71 = arg0->unknown_a8_ << 3;
        short var72 = arg0->unknown_aa_ << 3;
        func_0204cc68(arg0, 3, 0, 0, var71, var72);
        func_0204cc68(arg0, var41, (int)arg2, (int)arg2, var71 - arg2, var72 - arg2);
    } else if (!(arg0->unknown_c5_ & 0x10)) {
        func_0204ecb4(arg0, 0, 0, arg0->unknown_a8_, arg0->unknown_aa_, arg0->unknown_db_);
    }

    var43 = 0;
    var44 = 0;
    var45 = 0;
    var46 = 0;
    var47 = 0;
    var48 = var4;
    var53 = 0xf0;
    var54 = 0xf;
    var55 = 0xf0;
    var56 = 0xf;

    while (*var66 != 0) {
        var0[0] = *var66;
        var0[1] = var66[1];
        if ((var0[0] == '\\' && var0[1] == 'n') || (var0[0] == '\r' && var0[1] == '\n')) {
            var6 += var40;
            var5 = arg0->unknown_b0_;
            var66 += 2;
            var7 += var10;
            continue;
        }
        if (var0[0] == '\n') {
            var6 += var40;
            var5 = arg0->unknown_b0_;
            var66 += 1;
            var7 += var10;
            continue;
        }
        if (*var66 == '<') {
            var1 = var66 + 1;
            if (func_0204fc40(arg0, &var1, data_020f0270, var2, 1)) {
                switch (var2[0]) {
                case 8:
                    var4 = 8;
                    var39 = 8;
                    var40 = 9;
                    break;
                case 12:
                    var4 = 12;
                    var39 = 12;
                    var40 = 13;
                    break;
                default:
                    var4 = 10;
                    var39 = arg0->unknown_b4_;
                    var40 = arg0->unknown_b6_;
                    break;
                }
                if (arg0->unknown_b8_ != 0) var39 = arg0->unknown_b8_;
                if (arg0->unknown_ba_ != 0) var40 = arg0->unknown_ba_;
            } else if (func_0204fc40(arg0, &var1, data_020f0276, var2, 1)) {
                var5 = var2[0];
            } else if (func_0204fc40(arg0, &var1, data_020f0279, var2, 1)) {
                var6 = var2[0];
                var7 = var9 + var8 * var6;
            } else if (func_0204fc40(arg0, &var1, data_020f027c, var2, 2)) {
                var6 = var2[1];
                var5 = var2[0];
                var7 = var9 + var8 * var6;
            } else if (func_0204fc40(arg0, &var1, data_020f0280, var2, 1)) {
                var5 += var2[0];
            } else if (func_0204fc40(arg0, &var1, data_020f0283, var2, 1)) {
                var6 += var2[0];
                var7 += var8 * var2[0];
            } else if (func_0204fc40(arg0, &var1, data_020f0286, var2, 2)) {
                var5 += var2[0];
                var6 += var2[1];
                var7 += var8 * var2[1];
            } else if (func_0204fc40(arg0, &var1, data_020f028a, var2, 1)) {
                func_0204f3bc(arg0, var2[0]);
            } else if (func_0204fc40(arg0, &var1, data_020f0290, var2, 4)) {
                func_0204cc68(arg0, (unsigned char)var2[0], var2[1], var2[3], var2[2], var2[3] + 1);
            } else if (func_0204fc40(arg0, &var1, data_020f0297, var2, 4)) {
                func_0204cc68(arg0, (unsigned char)var2[0], var2[1], var2[2], var2[1] + 1, var2[3]);
            } else if (func_0204fc40(arg0, &var1, data_020f029e, var2, 0)) {
                var53 = 0xf0;
                var54 = 0xf;
            } else if (func_0204fc40(arg0, &var1, data_020f02a4, var2, 0)) {
                var53 = 0xd0;
                var54 = 0xd;
            } else if (func_0204fc40(arg0, &var1, data_020f02ab, var2, 0)) {
                var53 = 0xb0;
                var54 = 0xb;
            } else if (func_0204fc40(arg0, &var1, data_020f02b0, var2, 0)) {
                var53 = 0x90;
                var54 = 0x9;
            } else if (func_0204fc40(arg0, &var1, data_020f02b4, var2, 1)) {
                var2[0] &= 0xf;
                var53 = var2[0] << 4;
                var54 = var2[0];
            } else if (func_0204fc40(arg0, &var1, data_020f02ba, var2, 5)) {
                func_0204cc68(arg0, (unsigned char)var2[0], var2[1], var2[2], var2[1] + var2[3], var2[2] + var2[4]);
            } else if (func_0204fc40(arg0, &var1, data_020f02c0, var2, 1)) {
            } else if (func_0204fc40(arg0, &var1, data_020f02c5, var2, 1)) {
                var3 = var2[0];
                if (var3 >= 0 && var3 < 18) {
                    arg0->unknown_c_[var3] = var5;
                    arg0->unknown_30_[var3] = var6;
                }
                if (var3 >= 0 && var3 == var11) {
                    var55 = var53;
                    var56 = var54;
                    var53 = 0xe0;
                    var54 = 0xe;
                } else if (var3 >= 0 && var3 == var34) {
                    var55 = var53;
                    var56 = var54;
                    var53 = 0x50;
                    var54 = 0x5;
                }
            } else if (func_0204fc40(arg0, &var1, data_020f02c8, var2, 0)) {
                if (var3 >= 0) {
                    if (var3 == var11 || var3 == var34) {
                        var53 = var55;
                        var54 = var56;
                    }
                }
                if (var3 >= 0 && var3 < 18) {
                    arg0->unknown_54_[var3] = var5 - arg0->unknown_c_[var3];
                    arg0->unknown_78_[var3] = var4 + (var6 - arg0->unknown_30_[var3]) + 1;
                }
                if (var34 >= 0 && var3 == var34) {
                    if (!(arg0->unknown_c5_ & 0x10) && (var22 >= 0 || var23 >= 0 || var24 >= 0 || var25 >= 0)) {
                        arg0->unknown_c_[var3] -= var35 + arg0->unknown_c6_;
                        arg0->unknown_30_[var3] -= var36;
                        arg0->unknown_54_[var3] += var35 + var37;
                        arg0->unknown_78_[var3] += var36 + var38;
                    }
                    arg0->unknown_c5_ |= 2;
                }
                if (!(arg0->unknown_c5_ & 0x10) && var15 != 0) {
                    arg0->unknown_54_[var3] = var16;
                    var57 = arg0->unknown_c_[var3];
                    var58 = arg0->unknown_54_[var3];
                    var59 = arg0->unknown_30_[var3];
                    var60 = arg0->unknown_78_[var3];
                    var61 = var57 - var17;
                    var62 = var19 + (var57 + var58);
                    var63 = var59 - var18;
                    var64 = var20 + (var59 + var60);
                    func_0204cc68(arg0, 3, var61 + 1, var63, var62 - 1, var63 + 1);
                    func_0204cc68(arg0, 3, var61 + 1, var64 - 1, var62 - 1, var64);
                    func_0204cc68(arg0, 3, var61, var63 + 1, var61 + 1, var64 - 1);
                    func_0204cc68(arg0, 3, var62 - 1, var63 + 1, var62, var64 - 1);
                }
                var3 = -1;
            } else if (func_0204fc40(arg0, &var1, data_020f02cb, var2, 2)) {
            } else if (func_0204fc40(arg0, &var1, data_020f02d2, var2, 5)) {
                var34 = var2[0];
                var35 = var2[1];
                var36 = var2[2];
                var37 = var2[3];
                var38 = var2[4];
            } else if (func_0204fc40(arg0, &var1, data_020f02d9, var2, 1)) {
                var21 = var2[0];
            } else if (func_0204fc40(arg0, &var1, data_020f02e1, var2, 3)) {
                var22 = (signed char)var2[0];
                var30 = (signed char)var2[1];
                var26 = (unsigned char)var2[2];
            } else if (func_0204fc40(arg0, &var1, data_020f02e5, var2, 3)) {
                var23 = (signed char)var2[0];
                var31 = (signed char)var2[1];
                var27 = (unsigned char)var2[2];
            } else if (func_0204fc40(arg0, &var1, data_020f02e9, var2, 3)) {
                var24 = (signed char)var2[0];
                var32 = (signed char)var2[1];
                var28 = (unsigned char)var2[2];
            } else if (func_0204fc40(arg0, &var1, data_020f02ed, var2, 3)) {
                var25 = (signed char)var2[0];
                var33 = (signed char)var2[1];
                var29 = (unsigned char)var2[2];
            } else if (func_0204fc40(arg0, &var1, data_020f02f1, var2, 5)) {
                var15 = 1;
                var16 = var2[0];
                var17 = var2[1];
                var18 = var2[2];
                var19 = var2[3];
                var20 = var2[4];
                if (var16 == 0) var15 = 0;
            } else if (func_0204fc40(arg0, &var1, data_020f02f7, var2, 2)) {
                var13 = var2[0];
                var14 = var2[1];
            } else if (func_0204fc40(arg0, &var1, data_020f02fc, var2, 1)) {
                var12 = 1;
                func_0204f3bc(arg0, var2[0]);
                var6 = (var2[0] - 10) >> 1;
                var7 = var9 + arg0->unknown_b2_ * var8;
            } else if (func_0204fc40(arg0, &var1, data_020f0303, var2, 0)) {
                if (var12 != 0) {
                    var5 = arg0->unknown_b0_;
                    var6 = arg0->unknown_b2_;
                    var12 = 0;
                    var7 = var9 + var6 * var8;
                }
            } else if (func_0204fc40(arg0, &var1, data_020f030a, var2, 1)) {
                var11 = var2[0];
            } else {
                while (*var1 != '>' && *var1 != 0) var1++;
                var1++;
            }
            var66 = var1;
            continue;
        }
        if (var0[0] == '[') {
            var42 = 0;
            var43 = 0;
            var44 = 0;
            var45 = 0;
            var65 = var66 + 1;
            while (*var65 != 0) {
                if (*var65 == ']') {
                    var43 = 1;
                    break;
                }
                if (*var65 == '/') {
                    var42 = 1;
                    var65++;
                    continue;
                }
                if (var42 != 0) var45 += func_02042764(var65);
                unsigned char var73 = *var65;
                if ((var73 >= 0x81 && var73 <= 0x9f) || (var73 >= 0xe0 && var73 <= 0xea)) {
                    var65 += 2;
                } else {
                    var65 += 1;
                }
                if (var42 == 0) var44++;
            }
        }
        if (var43 != 0) {
            int var74 = 1;
            switch (var0[0]) {
            case '[':
                var46 = var5;
                var47 = var6;
                break;
            case '/': {
                var49 = var5;
                var50 = var6;
                var51 = var39;
                var52 = var40;
                var48 = var4;
                var4 = 6;
                short var75 = (var44 - 1) * var39 + var48;
                short var76 = var45;
                short var77 = (var75 - var76) >> 1;
                var5 = var46 + var77;
                var6 = var47 - 7;
                var39 = 7;
                break;
            }
            case ']':
                var5 = var49;
                var6 = var50;
                var39 = var51;
                var40 = var52;
                var4 = var48;
                var43 = 0;
                break;
            default:
                var74 = 0;
                break;
            }
            if (var74 != 0) {
                var66++;
                continue;
            }
        }
        if (var4 != 6 || var48 == 12) {
            char* var78 = func_02042a50(var4, var0);
            if (var78 != 0) {
                if (var4 == 6) {
                    func_0204f284(arg0, var78, var5, var6, var4, 0x60, 6);
                } else {
                    func_0204f284(arg0, var78, var5, var6, var4, var53, var54);
                }
            }
        }
        if (var4 == 6) var39 = func_02042764(var0);
        unsigned char var79 = *var66;
        if ((var79 >= 0x81 && var79 <= 0x9f) || (var79 >= 0xe0 && var79 <= 0xea)) {
            var66 += 2;
        } else {
            var66 += 1;
        }
        var5 += var39;
    }

    { int var80 = 0; if (var80) func_0204fae8((Struct_0204daf8*)var7); }
    if (arg0->unknown_c5_ & 8) func_0204fae8(arg0);
    if (!(arg0->unknown_c5_ & 0x10)) {
        if (var34 >= 0) arg0->unknown_c5_ |= 2;
        if (var21 >= 0) {
            short var81 = arg0->unknown_c_[var21] - 8;
            short var82 = arg0->unknown_30_[var21] - 1;
            arg0->unknown_bc_ = var81;
            arg0->unknown_be_ = var82;
            func_0204fa0c(arg0, var81, var82);
        }
    }
    if (var22 >= 0) {
        short var83 = arg0->unknown_c_[var22] + (arg0->unknown_54_[var22] - 10) / 2;
        short var84 = var36 + arg0->unknown_30_[var22] - (var26 + 5);
        if (var30 != 0) {
            char* var85 = func_02042a50(12, data_020f030f);
            if (var85 != 0) func_0204e038(arg0, var85, var83, var84, 12, 12, 0xd0, 0xd);
        } else {
            char* var85 = func_02042a50(12, data_020f030f);
            if (var85 != 0) func_0204e038(arg0, var85, var83, var84, 12, 12, 0xf0, 0xf);
        }
    }
    if (var23 >= 0) {
        short var83 = arg0->unknown_c_[var23] + (arg0->unknown_54_[var23] - 10) / 2;
        short var84 = var36 + arg0->unknown_30_[var23] + (var4 + var27);
        if (var31 != 0) {
            char* var85 = func_02042a50(12, data_020f030f);
            if (var85 != 0) func_0204e038(arg0, var85, var83, var84, 12, 12, 0xd0, 0xd);
        } else {
            char* var85 = func_02042a50(12, data_020f030f);
            if (var85 != 0) func_0204e038(arg0, var85, var83, var84, 12, 12, 0xf0, 0xf);
        }
    }
    if (var24 >= 0) {
        short var83 = arg0->unknown_c_[var24] + (arg0->unknown_54_[var24] - 10) / 2;
        short var84 = var36 + arg0->unknown_30_[var24] - (var28 + 5);
        if (var32 != 0) {
            char* var85 = func_02042a50(12, data_020f0312);
            if (var85 != 0) func_0204e038(arg0, var85, var83, var84, 12, 12, 0xd0, 0xd);
        } else {
            char* var85 = func_02042a50(12, data_020f0312);
            if (var85 != 0) func_0204e038(arg0, var85, var83, var84, 12, 12, 0xf0, 0xf);
        }
    }
    if (var25 >= 0) {
        short var83 = arg0->unknown_c_[var25] + (arg0->unknown_54_[var25] - 10) / 2;
        short var84 = var36 + arg0->unknown_30_[var25] + (var4 + var29);
        if (var33 != 0) {
            char* var85 = func_02042a50(12, data_020f0312);
            if (var85 != 0) func_0204e038(arg0, var85, var83, var84, 12, 12, 0xd0, 0xd);
        } else {
            char* var85 = func_02042a50(12, data_020f0312);
            if (var85 != 0) func_0204e038(arg0, var85, var83, var84, 12, 12, 0xf0, 0xf);
        }
    }
    if (var13 > 0 && var14 > 0) {
        short var86 = var6 + var4;
        short var87 = (short)(arg0->unknown_a8_ << 3) - (var14 * 2 + 2);
        short var88 = var86 - var14;
        short var89;
        for (var89 = 0; var89 < var13; var89++) {
            func_0204cc68(arg0, 0xf, var87, var88, var87 + var14, var88 + var14);
            var87 -= var14 * 2;
        }
    }
}
#endif
