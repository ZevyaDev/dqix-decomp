#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

struct Struct_02072a68_2;

struct Struct_ov012_021894b4
{
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 4;
    unsigned int unknown_2_0_ : 5;
    unsigned int unknown_2_5_ : 4;
    unsigned int unknown_3_1_ : 1;
    unsigned int unknown_3_2_ : 1;
    unsigned int unknown_3_3_ : 1;
    unsigned int unknown_3_4_ : 1;
    unsigned int unknown_3_5_ : 1;
    unsigned int unknown_3_6_ : 1;
    unsigned int unknown_3_7_ : 1;
    unsigned int unknown_4_0_ : 9;
    int unknown_5_1_ : 10;
    int unknown_6_3_ : 11;
    int unknown_7_6_ : 1;
    unsigned int unknown_7_7_ : 1;
    char unknown_8_[0x74];
};

struct Struct_01ff8b48_12
{
#if defined(jpn)
    char unknown_0_[0x543c];
#else
    char unknown_0_[0x569c];
#endif
    Struct_ov012_021894b4 unknown_569c_;
};

struct Struct_ov012_021894b4_2
{
#if defined(jpn)
    char unknown_0_[0x1314];
    char unknown_133c_[0x1340 - 0x1314];
#else
    char unknown_0_[0x133c];
    char unknown_133c_[0x1370 - 0x133c];
#endif
    unsigned char unknown_1370_;
    unsigned char unknown_1371_;
    char unknown_1372_[0x1378 - 0x1372];
    const char* unknown_1378_;
#if defined(jpn)
    char unknown_137c_[0x1428 - 0x134c];
#else
    char unknown_137c_[0x13d0 - 0x137c];
#endif
    char* unknown_13d0_;
    unsigned int unknown_13d4_;
    char unknown_13d8_[0x1400 - 0x13d8];
    char unknown_1400_[0x40];
    char unknown_1440_[0x40];
};

#if defined(jpn)
#define func_02041fac func_02042638
#define func_02041d48 func_020423d4
#endif

extern "C" void func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" void func_02041ea4(char* arg0, int arg1);
extern "C" const char* func_02072a68(Struct_02072a68_2* arg0, int arg1);
extern "C" void func_02041a28(char* arg0, int arg1);
extern "C" void func_02041fac(char* arg0, int arg1, int arg2);
extern "C" void func_02041b00(char* arg0, int arg1);
extern "C" void func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" void func_02042058(char* arg0, const char* arg1);
extern "C" void func_02041b34(char* arg0, int arg1, int arg2);
extern "C" void func_02041cf4(char* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_02041d48(char* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void* GetMessageWindow_020421a0();
extern "C" void __clear(void* arg0, unsigned long arg1);
extern "C" void func_02041a90(char* arg0, int arg1, int arg2);
extern "C" void func_02041e70(char* arg0, int arg1);
#if defined(jpn)
extern "C" int func_02042798(const char* arg0, int arg1, int arg2);
extern "C" void func_020465c0(void* arg0, int arg1, int arg2);
extern "C" void func_020465d8(void* arg0, int arg1, int arg2);
extern "C" void func_020465f0(void* arg0, int arg1, int arg2);
extern "C" void func_020474a8(void* arg0, int arg1, const char* arg2, char* arg3);
#else
extern "C" int func_020420e8(const char* arg0, int arg1);
extern "C" int func_020d2ff0(const char* arg0);
extern "C" void func_0206819c(const char* arg0, char* arg1, int arg2);

extern "C" const short data_ov012_0218af92[];
extern "C" const char data_ov012_0218b305[];
#endif

static inline Struct_ov012_021894b4* inline_ov012_021894b4(GameState* arg0)
{
    return &((Struct_01ff8b48_12*)arg0)->unknown_569c_;
}

// USA: func_ov012_021894b4
extern "C" ARM void func_ov012_021894b4(Struct_ov012_021894b4_2* arg0, char* arg1, int arg2)
{
    if (arg1 == 0)
        return;

    int var0 = arg0->unknown_13d4_;
    if (arg2)
        func_02041c08(arg1, var0, 8, 5, 5, 5);
    func_02041ea4(arg1, var0);
#if defined(jpn)
    func_02041a28(arg1, 0x3e);
    const char* var1 = func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, 1);
#else
    const char* var1 = func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, 1);
    func_02041a28(arg1, (0xe0 - func_020420e8(var1, 0)) >> 1);
#endif
    func_02041fac(arg1, (int)var1, 0x10);
    func_02041b00(arg1, 3);
    func_02041b70(arg1, 0, func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, 2));
#if defined(jpn)
    func_02042058(arg1, arg0->unknown_1378_);
    const char* var24 = func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, 3);
    func_02041b70(arg1, 1, var24);
    func_02042058(arg1, arg0->unknown_1378_);
    var24 = func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, 4);
    func_02041b70(arg1, 2, var24);
    func_02042058(arg1, arg0->unknown_1378_);
    var24 = func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, 5);
    func_02041b70(arg1, 3, var24);
    func_02042058(arg1, arg0->unknown_1378_);
    var24 = func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, 6);
    func_02041b70(arg1, 4, var24);
    func_02042058(arg1, arg0->unknown_1378_);
    func_02041b34(arg1, 3, 3);
    var24 = func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, 0xc);
    func_02041b70(arg1, 5, var24);
#else
    int var2;
    const short* var3 = data_ov012_0218af92;
    for (var2 = 1;; var2++, var3++)
    {
        short var4 = *var3;
        if (var4 < 0)
            break;
        func_02042058(arg1, arg0->unknown_1378_);
        if (var2 == 5)
            func_02041b34(arg1, 3, 3);
        func_02041b70(arg1, var2, func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, var4));
    }
#endif
    func_02041cf4(arg1, 0x7fff, 2, 0xdd, 0x66);
    func_02041d48(arg1, 0x7fff, 0x58, 0x10, 0x66);

    GameState* var5 = GameState::GetInstance();
    Struct_ov012_021894b4* var6 = inline_ov012_021894b4(var5);
#if defined(jpn)
    void* var21 = GetMessageWindow_020421a0();
    char var7[0x20];
    __clear(var7, sizeof(var7));
    char* var23 = arg0->unknown_1440_;
    func_02041a90(arg1, func_02042798(var23, 0x88, 0xa) + 0x58, 0x16);
    func_02042058(arg1, var23);

    func_02041a90(arg1, 0x62, 0x26);
    if (inline_ov012_021894b4(var5)->unknown_3_7_)
    {
        func_020465c0(var21, 0, inline_ov012_021894b4(var5)->unknown_0_0_);
        func_020465d8(var21, 0, 1);
        func_020465f0(var21, 0, 4);
        func_020474a8(var21, 0xa, func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, 0x64), var7);
    }
    else
    {
        func_02042058(arg1, func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, 0x78));
    }
    func_02042058(arg1, var7);

    memset(var7, 0, sizeof(var7));
    func_020465c0(var21, 0, var6->unknown_1_4_);
    func_020465d8(var21, 0, 1);
    func_020465f0(var21, 0, 2);
    func_020474a8(var21, 0xa, func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, 0x65), var7);
    func_02042058(arg1, var7);

    memset(var7, 0, sizeof(var7));
    func_020465c0(var21, 0, var6->unknown_2_0_);
    func_020465d8(var21, 0, 1);
    func_020465f0(var21, 0, 2);
    func_020474a8(var21, 0xa, func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, 0x66), var7);
    func_02042058(arg1, var7);

    func_02041a90(arg1, func_02042798(arg0->unknown_1400_, 0x88, 0xa) + 0x58, 0x36);
    func_02042058(arg1, arg0->unknown_1400_);

    const char* var17;
    if (var6->unknown_3_3_)
        var17 = func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, (short)(var6->unknown_2_5_ + 30000));
    else
        var17 = func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, 0x6d);
    func_02041a90(arg1, func_02042798(var17, 0x88, 0xa) + 0x58, 0x46);
    func_02042058(arg1, var17);

    const char* var22 = func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, 0x71);
#else
    GetMessageWindow_020421a0();
    char var7[0x20];
    __clear(var7, sizeof(var7));
    func_02041a90(arg1, ((0x88 - func_020420e8(arg0->unknown_1440_, 0)) >> 1) + 0x58, 0x16);
    func_02042058(arg1, arg0->unknown_1440_);

    char var8[0x100];
    __clear(var8, sizeof(var8));
    const char* var9 = func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, (short)(inline_ov012_021894b4(var5)->unknown_1_4_ + 0x13));
    int var10;
    if (inline_ov012_021894b4(var5)->unknown_3_7_)
    {
        sprintf(var8, data_ov012_0218b305, var6->unknown_2_0_, var9, inline_ov012_021894b4(var5)->unknown_0_0_);
        var10 = func_020420e8(var8, 0);
    }
    else
    {
        const char* var11 = func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, 0x78);
        int var12 = func_020d2ff0(var11);
        char var13[0x40];
        __clear(var13, sizeof(var13));
        memcpy(var13, var11 + 8, var12 - 0x11);
        var10 = func_020420e8(var13, 0);
        sprintf(var8, var11);
    }
    func_02041a90(arg1, ((0x88 - var10) >> 1) + 0x58, 0x26);
    func_02042058(arg1, var8);

    char var14[0x80];
    __clear(var14, sizeof(var14));
    func_0206819c(arg0->unknown_1400_, var14, 0);
    func_02041a90(arg1, ((0x88 - func_020420e8(var14, 0)) >> 1) + 0x58, 0x36);
    func_02042058(arg1, var14);

    short var15 = 0x6d;
    unsigned int var16 = var6->unknown_3_3_;
    if (var16)
        var15 = var6->unknown_2_5_ + 30000;
    const char* var17 = func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, var15);
    func_02041a90(arg1, ((0x88 - func_020420e8(var17, 0)) >> 1) + 0x58, 0x46);
    func_02042058(arg1, var17);
#endif

    char* var18 = (char*)var6->unknown_8_;
    int var19 = 0;
    if (arg0->unknown_1371_ == 14 && arg0->unknown_1370_ >= 1 && arg0->unknown_1370_ <= 4)
        var18 = arg0->unknown_13d0_;
    const char* var20;
#if defined(jpn)
    if (var18[0] == var22[0] && var18[1] == var22[1])
#else
    if (*var18 == 0)
#endif
    {
        var20 = func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, 0x12);
        var19 = 1;
    }
    else
    {
        var20 = func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, 0x13);
    }
#if defined(jpn)
    func_02041a90(arg1, func_02042798(var20, 0x88, 0xa) + 0x58, 0x56);
#else
    func_02041a90(arg1, ((0x88 - func_020420e8(var20, 0)) >> 1) + 0x58, 0x56);
#endif
    if (var19)
        func_02041e70(arg1, 3);
    func_02042058(arg1, var20);
}
