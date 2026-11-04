#include <globaldefs.h>
#include "std_library_functions.h"
#include "Graphics/GlyphBitmapContext.h"
#include "Resource/FontGlyphTable.h"

#if defined(jpn)

struct Struct_02028a20 {
    char unknown_0_[0xc];
    int unknown_c_;
};

extern Struct_02028a20 data_020ef74c[];
extern int data_020e7cb4[];

extern "C" void func_02028ce4(const unsigned char* arg0, int* arg1, int* arg2);
extern "C" void __clear(void* arg0, int arg1);

// JPN: func_02028a20
extern "C" ARM void func_02028a20(int arg0, int arg1, const unsigned char* arg2) {
    unsigned char* var0 = (unsigned char*)glyphBitmapContext.unknown_0_;
    int var4;
    int var2;
    int var6;
    int var5;
    unsigned char var13;
    unsigned char var10;
    int var12;
    unsigned char* var1;
    int var9;
    int var3;
    int var7;
    int var11;

    if (var0 == NULL || arg0 >= 0x100 || arg1 >= 0xc0 || arg2 == NULL) {
        return;
    }
    var1 = var0 + (arg1 << 8) / 2;
    func_02028ce4(arg2, &var2, &var3);
    if (arg0 + var2 < 0) {
        return;
    }
    if (arg1 + var3 < 0) {
        return;
    }
    if (arg0 + var2 > 0x100) {
        var2 = 0x100 - arg0;
    }
    if (arg1 + var3 > 0xc0) {
        var3 = 0xc0 - arg1;
    }

    var4 = 0;
    var5 = 0;
    var6 = 10;
    var7 = 11;
    if ((unsigned int)(data_020ef74c[0].unknown_c_ - 3) <= 1) {
        Struct_0203bebc* var8 = func_020429bc(var6);
        if (var8 == NULL) {
            return;
        }
        var4 = var8->unknown_2_;
        var5 = var8->unknown_3_;
    } else if ((unsigned int)(data_020ef74c[0].unknown_c_ - 5) <= 1) {
        Struct_0203bebc* var8 = func_020429bc(12);
        if (var8 == NULL) {
            return;
        }
        var4 = var8->unknown_2_;
        var5 = var8->unknown_3_;
        var6 = 12;
        var7 = 13;
    }

    var9 = arg0;
    var10 = 0;
    var11 = data_020e7cb4[glyphBitmapContext.unknown_4_];
    var12 = var11 & 0xf;
    var13 = var11 & 0xf0;
    while (*arg2 != 0 && var10 < 0x19) {
        if (*arg2 == 0xa) {
            var1 += var7 << 7;
            var9 = arg0;
            arg1 = var7 + arg1;
        }
        char var14[3];
        __clear(var14, 3);
        var14[0] = arg2[0];
        var14[1] = arg2[1];
        unsigned char* var15 = (unsigned char*)func_02042a50(var6, var14);
        if (var15 != NULL) {
            unsigned char var17 = 0;
            unsigned char* var16 = var1;
            for (int var18 = 0; var18 < var5; var18++) {
                bool var19 = (unsigned int)(arg1 + var18) < 0xc0;
                for (int var20 = 0; var20 < var4; var20++) {
                    if (var19 && (unsigned int)(var9 + var20) < 0x100 && (*var15 & (1 << var17))) {
                        int var21 = var9 + var20;
                        if (var21 & 1) {
                            var16[var21 >> 1] &= 0xf;
                            var16[var21 >> 1] |= var13;
                        } else {
                            var16[var21 >> 1] &= 0xf0;
                            var16[var21 >> 1] |= var12;
                        }
                    }
                    var17++;
                    if (var17 >= 8) {
                        var15++;
                        var17 = 0;
                    }
                }
                var16 += 0x80;
            }
        }
        var10++;
        unsigned char var22 = *arg2;
        if (var22 >= 0x81 && var22 <= 0x9f || var22 >= 0xe0 && var22 <= 0xea) {
            var9 += var6;
            arg2 += 2;
        } else {
            var9 += var6;
            arg2 += 1;
        }
    }
}

#endif
