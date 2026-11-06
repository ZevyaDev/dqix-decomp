#include <globaldefs.h>
#include <std_library_functions.h>
#include "GameState/GameState.h"

struct MessageWindow_02021b84;
struct StringList_02072a68_2;
struct MessageWindow_020465c0;
struct LocalWireless_0202c1a4;
struct Struct_0201099c_3;

struct Struct_ov023_021e868c {
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
};

struct Struct_ov023_021e868c_2 {
    char unknown_0_[0x3c];
    char unknown_3c_[1];
};

struct Struct_ov023_021e868c_3 {
    char unknown_0_[0x5d8];
    char* unknown_5d8_;
    char unknown_5dc_[0x5f4 - 0x5dc];
    StringList_02072a68_2* unknown_5f4_;
#if defined(jpn)
    Struct_0201099c_3* unknown_5f8_;
#endif
};

struct Struct_01ff91ac_27 {
    char unknown_0_[0x5400];
    Struct_ov023_021e868c unknown_5400_;
};

struct Struct_01ff91ac_28 {
#if defined(jpn)
    char unknown_0_[0x3c];
#else
    char unknown1_0_[0x29c];
#endif
    Struct_01ff91ac_27 unknown_29c_;
};

static inline Struct_ov023_021e868c* inline_ov003_02172e84(GameState* arg0)
{
    return &((Struct_01ff91ac_28*)arg0)->unknown_29c_.unknown_5400_;
}

extern "C" int GetMessageWindow_020421a0();
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
extern "C" Struct_ov023_021e868c_2* GetPartyMemberData_02053c6c(unsigned char* gameObject);
extern "C" int GetOwnProtagonistObjectIndex_0202c1a4(LocalWireless_0202c1a4* wireless);
extern "C" void AppendXPositionTag_02041a28(char* buffer, int x);
#if defined(jpn)
extern "C" int func_020420e8(char* arg0, int arg1);
#define func_02041a5c func_020420e8
#else
extern "C" int func_02041a5c(char* arg0, int arg1);
#endif
extern "C" void AppendPositionTag_02041a90(char* buffer, int x, int y);
extern "C" void AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);
#if defined(jpn)
extern "C" int func_02042638(char* arg0, int arg1, int arg2);
#define func_02041fac func_02042638
#else
extern "C" int func_02041fac(char* arg0, int arg1, int arg2);
#endif
extern "C" void AppendText_02042058(char* buffer, const char* text);
extern "C" const char* FindStringInList_02072a68(StringList_02072a68_2* stringList, int stringId);
extern "C" void SetMessageNumber_020465c0(MessageWindow_020465c0* window, int index, int number);
extern "C" void SetMessageNumberAlignment_020465d8(unsigned char* window, int index, unsigned char alignment);
extern "C" void SetMessageNumberWidth_020465f0(unsigned char* window, int index, unsigned char width);

extern "C" {
void* GetLocalWireless_0202ae18();
#if defined(jpn)
void func_020474a8(MessageWindow_02021b84* arg0, unsigned char arg1, const char* arg2, char* arg3);
#else
int func_020420e8(const char* arg0, int arg1);
void func_02046608(MessageWindow_02021b84* arg0, int arg1, const char* arg2, char* arg3, int arg4, int arg5, int arg6);
#endif
}
#if defined(jpn)
extern "C" int FindStringInTable_020e0434(Struct_0201099c_3* stringTable, int stringId);
#endif

// USA: func_ov023_021e868c
// JPN: func_ov023_021e85e0
extern "C" ARM void func_ov023_021e868c(Struct_ov023_021e868c_3* arg0)
{
    GameState* var0 = GameState::GetInstance();
    MessageWindow_02021b84* var1 = (MessageWindow_02021b84*)GetMessageWindow_020421a0();
    void* var2 = GetLocalWireless_0202ae18();
    Struct_ov023_021e868c_2* var3 = NULL;
    if (IsLocalWirelessOn_0202b7d8((int*)var2) == 0)
    {
        void* var4 = GetPartyMemberBaseByIndex_0200ff1c(var0, 0);
        if (var4 != NULL)
            var3 = GetPartyMemberData_02053c6c((unsigned char*)var4);
    }
    else
    {
        void* var5 = GetPartyMemberBaseByIndex_0200ff1c(var0, GetOwnProtagonistObjectIndex_0202c1a4((LocalWireless_0202c1a4*)var2));
        if (var5 != NULL)
            var3 = GetPartyMemberData_02053c6c((unsigned char*)var5);
    }
    if (var3 == NULL)
        return;
    Struct_ov023_021e868c* var6 = inline_ov003_02172e84(var0);
    char* var7 = arg0->unknown_5d8_;
    char var8[0x20] = {};
#if defined(jpn)
    AppendXPositionTag_02041a28(var7, (0xd0 - (strlen(var3->unknown_3c_) * 10 / 2)) / 2);
#else
    AppendXPositionTag_02041a28(var7, (0xd0 - func_020420e8(var3->unknown_3c_, 0)) >> 1);
#endif
    func_02041fac(var7, (int)var3->unknown_3c_, 0x10);
    const char* var9 = FindStringInList_02072a68(arg0->unknown_5f4_, (short)(var6->unknown_5_1_ + 10000));
    AppendMenuEntry_02041b70(var7, 0, FindStringInList_02072a68(arg0->unknown_5f4_, 2));
    AppendText_02042058(var7, FindStringInList_02072a68(arg0->unknown_5f4_, 0x6c));
#if defined(jpn)
    int var10 = (0x6e - strlen(var9) * 10 / 2) / 2 + 0x56;
    AppendXPositionTag_02041a28(var7, var10);
#else
    AppendXPositionTag_02041a28(var7, ((0x6e - func_020420e8(var9, 0)) >> 1) + 0x56);
#endif
    AppendText_02042058(var7, var9);
    AppendText_02042058(var7, FindStringInList_02072a68(arg0->unknown_5f4_, 0));
    AppendMenuEntry_02041b70(var7, 1, FindStringInList_02072a68(arg0->unknown_5f4_, 3));
    AppendXPositionTag_02041a28(var7, 0x4c);
    AppendText_02042058(var7, FindStringInList_02072a68(arg0->unknown_5f4_, 0x6c));
    if (var6->unknown_3_7_)
    {
        AppendXPositionTag_02041a28(var7, 0x5a);
    }
    else
    {
        AppendPositionTag_02041a90(var7, 0x6e, 0x34);
#if defined(jpn)
        func_020474a8(var1, 10, FindStringInList_02072a68(arg0->unknown_5f4_, 0x78), var8);
#else
        func_02046608(var1, 10, FindStringInList_02072a68(arg0->unknown_5f4_, 0x78), var8, 0x100, 0, 0);
#endif
        AppendText_02042058(var7, var8);
        AppendPositionTag_02041a90(var7, 0x5a, 0x28);
    }
    if (var6->unknown_3_4_)
    {
        SetMessageNumber_020465c0((MessageWindow_020465c0*)var1, 0, var6->unknown_0_0_);
        SetMessageNumberAlignment_020465d8((unsigned char*)var1, 0, 1);
        SetMessageNumberWidth_020465f0((unsigned char*)var1, 0, 4);
#if defined(jpn)
        const char* var11 = FindStringInList_02072a68(arg0->unknown_5f4_, 0x64);
        func_020474a8(var1, 10, var11, var8);
#else
        func_02046608(var1, 10, FindStringInList_02072a68(arg0->unknown_5f4_, 0x64), var8, 0x100, 0, 0);
#endif
        AppendText_02042058(var7, var8);
        memset(var8, 0, sizeof(var8));
        SetMessageNumber_020465c0((MessageWindow_020465c0*)var1, 0, var6->unknown_1_4_);
        SetMessageNumberAlignment_020465d8((unsigned char*)var1, 0, 1);
        SetMessageNumberWidth_020465f0((unsigned char*)var1, 0, 2);
#if defined(jpn)
        const char* var12 = FindStringInList_02072a68(arg0->unknown_5f4_, 0x65);
        func_020474a8(var1, 10, var12, var8);
#else
        func_02046608(var1, 10, FindStringInList_02072a68(arg0->unknown_5f4_, 0x65), var8, 0x100, 0, 0);
#endif
        AppendText_02042058(var7, var8);
        memset(var8, 0, sizeof(var8));
        SetMessageNumber_020465c0((MessageWindow_020465c0*)var1, 0, var6->unknown_2_0_);
        SetMessageNumberAlignment_020465d8((unsigned char*)var1, 0, 1);
        SetMessageNumberWidth_020465f0((unsigned char*)var1, 0, 2);
#if defined(jpn)
        const char* var13 = FindStringInList_02072a68(arg0->unknown_5f4_, 0x66);
        func_020474a8(var1, 10, var13, var8);
#else
        func_02046608(var1, 10, FindStringInList_02072a68(arg0->unknown_5f4_, 0x66), var8, 0x100, 0, 0);
#endif
        AppendText_02042058(var7, var8);
        AppendText_02042058(var7, FindStringInList_02072a68(arg0->unknown_5f4_, 0));
    }
    else
    {
#if defined(jpn)
        func_020474a8(var1, 10, FindStringInList_02072a68(arg0->unknown_5f4_, 0x6e), var8);
#else
        func_02046608(var1, 10, FindStringInList_02072a68(arg0->unknown_5f4_, 0x6e), var8, 0x100, 0, 0);
#endif
        AppendText_02042058(var7, var8);
        memset(var8, 0, sizeof(var8));
#if defined(jpn)
        func_020474a8(var1, 10, FindStringInList_02072a68(arg0->unknown_5f4_, 0x6f), var8);
#else
        func_02046608(var1, 10, FindStringInList_02072a68(arg0->unknown_5f4_, 0x6f), var8, 0x100, 0, 0);
#endif
        AppendText_02042058(var7, var8);
        memset(var8, 0, sizeof(var8));
#if defined(jpn)
        func_020474a8(var1, 10, FindStringInList_02072a68(arg0->unknown_5f4_, 0x70), var8);
#else
        func_02046608(var1, 10, FindStringInList_02072a68(arg0->unknown_5f4_, 0x70), var8, 0x100, 0, 0);
#endif
        AppendText_02042058(var7, var8);
        AppendText_02042058(var7, FindStringInList_02072a68(arg0->unknown_5f4_, 0));
    }
    int var14 = var6->unknown_6_3_;
#if defined(jpn)
    const char* var16;
    if (var14 < 700)
        var16 = (const char*)FindStringInTable_020e0434(arg0->unknown_5f8_, (short)var14);
    else
        var16 = FindStringInList_02072a68(arg0->unknown_5f4_, (short)(var14 + 20000));
#else
    short var15 = var14 + 20000;
    if (var14 < 700)
        var15 = var14;
    const char* var16 = FindStringInList_02072a68(arg0->unknown_5f4_, var15);
#endif
    func_02041a5c(var7, 0x42);
    AppendMenuEntry_02041b70(var7, 2, FindStringInList_02072a68(arg0->unknown_5f4_, 4));
    AppendXPositionTag_02041a28(var7, 0x4c);
    AppendText_02042058(var7, FindStringInList_02072a68(arg0->unknown_5f4_, 0x6c));
#if defined(jpn)
    int var17 = (0x6e - strlen(var16) * 10 / 2) / 2 + 0x56;
    AppendXPositionTag_02041a28(var7, var17);
#else
    AppendXPositionTag_02041a28(var7, ((0x6e - func_020420e8(var16, 0)) >> 1) + 0x56);
#endif
    AppendText_02042058(var7, var16);
    AppendText_02042058(var7, FindStringInList_02072a68(arg0->unknown_5f4_, 0));
#if defined(jpn)
    const char* var19;
    if (var6->unknown_3_3_)
        var19 = FindStringInList_02072a68(arg0->unknown_5f4_, (short)(var6->unknown_2_5_ + 30000));
    else
        var19 = FindStringInList_02072a68(arg0->unknown_5f4_, 0x6d);
#else
    short var18 = 0x6d;
    if (var6->unknown_3_3_)
        var18 = var6->unknown_2_5_ + 30000;
    const char* var19 = FindStringInList_02072a68(arg0->unknown_5f4_, var18);
#endif
    AppendMenuEntry_02041b70(var7, 3, FindStringInList_02072a68(arg0->unknown_5f4_, 5));
    AppendXPositionTag_02041a28(var7, 0x4c);
    AppendText_02042058(var7, FindStringInList_02072a68(arg0->unknown_5f4_, 0x6c));
#if defined(jpn)
    int var20 = (0x6e - strlen(var19) * 10 / 2) / 2 + 0x56;
    AppendXPositionTag_02041a28(var7, var20);
#else
    AppendXPositionTag_02041a28(var7, ((0x6e - func_020420e8(var19, 0)) >> 1) + 0x56);
#endif
    AppendText_02042058(var7, var19);
}

#if defined(jpn)
#undef func_02041a5c
#undef func_02041fac
#endif
