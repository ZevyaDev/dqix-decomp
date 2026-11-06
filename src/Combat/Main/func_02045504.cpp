#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
extern "C" int ParseDecimal_02005a94(const char*);
extern "C" int func_020d85dc(const char*, const char*);
extern "C" int CompareBytes_02001aec(const void*, const void*, unsigned int);
extern "C" void func_02043270(void*, int, int, int, int);
extern const char data_020f00c1[], data_020f00c8[], data_020f00ce[], data_020f00d4[];
extern const char data_020f00db[], data_020f00e2[], data_020f00ea[];
extern const char* const data_020efe58[];
extern const unsigned short data_020e842a[];

struct Struct_02045504_2
{
    char unknown_0_[0x730];
    int unknown_730_;
    int unknown_734_;
    char unknown_738_[0x14];
    unsigned short unknown_74c_;
    char unknown_74e_[0x93];
    unsigned char unknown_7e1_;
    char unknown_7e2_[6];
    unsigned char unknown_7e8_;
    char unknown_7e9_[2];
    unsigned char unknown_7eb_;
};
struct Struct_02045504
{
    char unknown_0_[0x874];
    int unknown_874_;
    char unknown_878_[0x788];
    Struct_02045504_2 unknown_1000_;
};

// JPN: func_02045504
extern "C" ARM const char* func_02045504(Struct_02045504* arg0, const char* arg1)
{
    unsigned char var0 = 1;
    while (var0)
    {
        if (func_020d85dc(arg1, data_020f00c1))
        {
            unsigned char var6;
            int var7 = 6;
            int var8 = var7;
            var6 = 0;
            while (arg1[var8] != '>')
            {
                if (arg1[var8] == 0) return arg1 + var8;
                var8++;
            }
            int var9 = ParseDecimal_02005a94(arg1 + 6);
            while (arg1[var7] != ',')
            {
                if (arg1[var7] == '>')
                {
                    arg1 += var7 + 1;
                    var6 = 1;
                    break;
                }
                var7++;
            }
            if (var6) return arg1;
            var7++;
            int var10 = ParseDecimal_02005a94(arg1 + var7);
            while (arg1[var7] != ',')
            {
                if (arg1[var7] == '>')
                {
                    arg1 += var7 + 1;
                    var6 = 1;
                    break;
                }
                var7++;
            }
            if (var6) return arg1;
            var7++;
            int var11 = ParseDecimal_02005a94(arg1 + var7);
            while (arg1[var7] != ',')
            {
                if (arg1[var7] == '>')
                {
                    arg1 += var7 + 1;
                    var6 = 1;
                    break;
                }
                var7++;
            }
            if (var6) return arg1;
            int var12 = ParseDecimal_02005a94(arg1 + (var7 + 1));
            if (var9 < 0) var9 = 0;
            if (var9 > 256) var9 = 256;
            if (var10 < 0) var10 = 0;
            if (var10 > 192) var10 = 192;
            if (var11 < 0) var11 = 256 - var9;
            if (var11 > 256) var11 = 256 - var9;
            if (var12 < 0) var12 = 192 - var10;
            if (var12 > 192) var12 = 192 - var10;
            func_02043270(arg0, var9, var10, var11, var12);
            arg1 += var8 + 1;
        }
        else if (func_020d85dc(arg1, data_020f00c8))
        {
            arg0->unknown_1000_.unknown_7e1_ = 0;
            arg1 += 5;
        }
        else if (func_020d85dc(arg1, data_020f00ce))
        {
            arg0->unknown_1000_.unknown_7e8_ = 1;
            arg1 += 5;
        }
        else if (func_020d85dc(arg1, data_020f00d4))
        {
            int var13 = 6;
            int var14 = ParseDecimal_02005a94(arg1 + 6);
            while (arg1[var13] != '>')
            {
                if (arg1[var13] == 0) return arg1 + var13;
                var13++;
            }
            if (var14 < 1) var14 = 1;
            arg0->unknown_874_ = var14;
            arg1 += var13 + 1;
        }
        else if (func_020d85dc(arg1, data_020f00db))
        {
            int var15 = 6;
            int var16 = var15;
            while (arg1[var16] != '>')
            {
                if (arg1[var16] == 0) return arg1 + var16;
                var16++;
            }
            int var17 = ParseDecimal_02005a94(arg1 + 6);
            if (var17 <= 0) var17 = 12;
            while (arg1[var15] != ',')
            {
                if (arg1[var15] == '>')
                {
                    arg1 += var15 + 1;
                    break;
                }
                var15++;
            }
            int var18 = ParseDecimal_02005a94(arg1 + (var15 + 1));
            if (var18 <= 0) var18 = 16;
            arg0->unknown_1000_.unknown_730_ = var17;
            arg0->unknown_1000_.unknown_734_ = var18;
            arg1 += var16 + 1;
        }
        else if (func_020d85dc(arg1, data_020f00e2))
        {
            int var19 = 7;
            int var20 = var19;
            while (arg1[var20] != '>')
            {
                if (arg1[var20] == 0) return arg1 + var20;
                var20++;
            }
            unsigned char var21 = 0;
            char var22[3] = {};
            signed char var23 = 0;
            memcpy(var22, arg1 + 7, 2);
            for (; *data_020efe58[var23]; var23++) {
                if (CompareBytes_02001aec(var22, data_020efe58[var23], 2) == 0) {
                    arg0->unknown_1000_.unknown_74c_ = data_020e842a[var23];
                    arg1 += var20 + 1;
                    var21 = 1;
                    break;
                }
            }
            if (var21) continue;
            int var24 = ParseDecimal_02005a94(arg1 + 7);
            if (var24 < 0) var24 = 255;
            if (var24 > 255) var24 = 255;
            while (arg1[var19] != ',')
            {
                if (arg1[var19] == '>')
                {
                    arg1 += var19 + 1;
                    var21 = 1;
                    break;
                }
                var19++;
            }
            if (var21) continue;
            var19++;
            int var25 = ParseDecimal_02005a94(arg1 + var19);
            if (var25 < 0) var25 = 255;
            if (var25 > 255) var25 = 255;
            while (arg1[var19] != ',')
            {
                if (arg1[var19] == '>')
                {
                    arg1 += var19 + 1;
                    var21 = 1;
                    break;
                }
                var19++;
            }
            if (var21) continue;
            int var26 = ParseDecimal_02005a94(arg1 + (var19 + 1));
            if (var26 < 0) var26 = 255;
            if (var26 > 255) var26 = 255;
            arg0->unknown_1000_.unknown_74c_ = (var24 >> 3) | ((var25 >> 3) << 5) | ((var26 >> 3) << 10);
            arg1 += var20 + 1;
        }
        else if (func_020d85dc(arg1, data_020f00ea))
        {
            arg0->unknown_1000_.unknown_7eb_ = 0;
            arg1 += 6;
        }
        else var0 = 0;
    }
    return arg1;
}
#endif
