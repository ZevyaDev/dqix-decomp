#include <globaldefs.h>

#if defined(jpn)
struct Struct_0204f6a0
{
    char unknown_0_[0xa4];
    int unknown_a4_;
    short unknown_a8_;
    short unknown_aa_;
    char unknown_ac_[4];
    short unknown_b0_;
    short unknown_b2_;
    short unknown_b4_;
    short unknown_b6_;
    short unknown_b8_;
};

extern "C" int func_0204fc40(Struct_0204f6a0*, char**, const char*, short*, int);
extern const char data_020f0270[], data_020f0276[], data_020f0279[], data_020f027c[], data_020f0280[];
extern const char data_020f0283[], data_020f0286[], data_020f02c0[], data_020f02fc[], data_020f0303[];

// JPN: func_0204f6a0
extern "C" ARM short func_0204f6a0(Struct_0204f6a0* arg0, char* arg1, int arg2, unsigned char arg3, unsigned char arg4)
{
    int var0;
    int var1, var2, var3, var4;
    short var5;
    bool var7;
    short var8;
    int var6;
    char* var9;
    char* var10;
    char* var11;
    char* var12;
    char* var13;
    short var14[8];

    var12 = arg1;
    if (var12 == NULL) return 0;

    var3 = arg0->unknown_b0_;
    var4 = arg0->unknown_b2_;
    var7 = 0;
    var0 = 0;
    var8 = 0;
    var9 = NULL;
    var10 = NULL;
    var11 = NULL;
    var6 = arg0->unknown_b6_;
    var1 = arg0->unknown_b0_;
    var2 = arg0->unknown_b2_;
    var5 = arg0->unknown_b4_;

    while (*var12 != 0)
    {
        char var15 = *var12;
        char var16 = var12[1];
        if ((var15 == '\\' && var16 == 'n') || (var15 == '\r' && var16 == '\n'))
        {
            if (var3 < var1) var3 = var1;
            var1 = arg0->unknown_b0_;
            var2 += arg0->unknown_b6_;
            var12 += 2;
            continue;
        }
        if (var15 == '\n')
        {
            if (var3 < var1) var3 = var1;
            var1 = arg0->unknown_b0_;
            var2 += arg0->unknown_b6_;
            var12 += 1;
            continue;
        }
        if (var15 == '<')
        {
            var13 = var12 + 1;
            if (func_0204fc40(arg0, &var13, data_020f0270, var14, 1))
            {
                switch (var14[0])
                {
                case 8:
                    var5 = 8;
                    break;
                default:
                    var5 = arg0->unknown_b4_;
                    break;
                }
                if (arg0->unknown_b8_) var5 = arg0->unknown_b8_;
            }
            else if (func_0204fc40(arg0, &var13, data_020f0276, var14, 1))
            {
                if (var3 < var1) var3 = var1;
                var1 = var14[0];
            }
            else if (func_0204fc40(arg0, &var13, data_020f0279, var14, 1))
            {
                if (var4 < var2) var4 = var2;
                var2 = var14[0];
            }
            else if (func_0204fc40(arg0, &var13, data_020f027c, var14, 2))
            {
                if (var3 < var1) var3 = var1;
                if (var4 < var2) var4 = var2;
                var1 = var14[0];
                var2 = var14[1];
            }
            else if (func_0204fc40(arg0, &var13, data_020f0280, var14, 1))
            {
                var1 += var14[0];
            }
            else if (func_0204fc40(arg0, &var13, data_020f0283, var14, 1))
            {
                var2 += var14[0];
            }
            else if (func_0204fc40(arg0, &var13, data_020f0286, var14, 2))
            {
                var1 += var14[0];
                var2 += var14[1];
            }
            else if (func_0204fc40(arg0, &var13, data_020f02c0, var14, 1))
            {
                var8 = var14[0];
            }
            else if (func_0204fc40(arg0, &var13, data_020f02fc, var14, 1))
            {
                var7 = 1;
                var0 = var14[0];
            }
            else if (func_0204fc40(arg0, &var13, data_020f0303, var14, 0))
            {
                if (var7)
                {
                    if (var3 < var1) var3 = var1;
                    if (var4 < var2) var4 = var2;
                    var1 = arg0->unknown_b0_;
                    var2 = var0 + arg0->unknown_b2_;
                }
            }
            else
            {
                while (*var13 != '>' && *var13 != 0) var13++;
                var13++;
            }
            var12 = var13;
            continue;
        }
        if (var15 == '[')
        {
            var9 = var12;
            var10 = NULL;
            var11 = NULL;
            char* var17 = var12 + 1;
            while (*var17 != 0)
            {
                unsigned char var18 = *var17;
                if (var18 == ']')
                {
                    var11 = var17;
                    break;
                }
                if (var18 == '/')
                {
                    var10 = var17;
                    var17++;
                    continue;
                }
                if ((var18 >= 0x81 && var18 <= 0x9f) || (var18 >= 0xe0 && var18 <= 0xea)) var17++;
                var17++;
            }
            if (var11)
            {
                var12++;
                continue;
            }
            var9 = NULL;
        }
        if (var9)
        {
            if (var10 && var11)
            {
                if (var10 <= var12 && var12 <= var11)
                {
                    var12++;
                    continue;
                }
            }
            if (var11)
            {
                if (var12 == var11)
                {
                    var9 = NULL;
                    var12++;
                    continue;
                }
            }
        }
        unsigned char var19 = *(unsigned char*)var12;
        if ((var19 >= 0x81 && var19 <= 0x9f) || (var19 >= 0xe0 && var19 <= 0xea)) var12 += 2;
        else var12++;
        var1 += var5;
    }
    if (var1 < var3) var1 = var3;
    if (var2 < var4) var2 = var4;
    var2 = var2 + var6 - (arg0->unknown_b6_ - 10);
    if (((var1 + 3) & 7) <= 3) var1 += 4;
    int var20 = ((var1 + 7) & ~7) >> 3;
    int var21 = ((var2 + 7) & ~7) >> 3;
    if (arg4)
    {
        if (arg0->unknown_a8_ < var20) arg0->unknown_a8_ = var20;
        if (arg0->unknown_aa_ < var21) arg0->unknown_aa_ = var21;
    }
    if (arg3)
    {
        var2 -= arg0->unknown_b2_;
        if ((arg0->unknown_aa_ << 3) - var2 < 7) arg0->unknown_aa_ = arg0->unknown_aa_ + 1;
        arg0->unknown_b2_ = ((arg0->unknown_aa_ << 3) - var2) >> 1;
    }
    if (var7)
    {
        arg0->unknown_b2_ = arg0->unknown_b2_ + var0;
        if (arg3) arg0->unknown_b2_ = arg0->unknown_b2_ - 1;
    }
    arg0->unknown_a4_ = (arg0->unknown_a8_ * arg0->unknown_aa_) << 5;
    return var8;
}
#endif
