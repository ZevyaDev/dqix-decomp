#if defined(jpn)
#include <globaldefs.h>
#include "GameState/GameState.h"

struct StringList_02072a68_2;
struct MenuCursor_0205c508;
struct MessageWindow_020465c0;
struct Struct_ov012_02189af4 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
};

struct Struct_ov012_02189af4_2 {
    unsigned char unknown_0_[0x54];
    Struct_ov012_02189af4 unknown_54_;
    Struct_ov012_02189af4* inline_ov012_02189af4_3() { return &unknown_54_; }
};

extern "C" void AppendFrameTag_02041c08(char*, int, int, int, int, int);
extern "C" int AppendCursorTag_02041ea4(char*, int);
extern "C" void* GetMessageWindow_020421a0();
extern "C" void GetMenuCursorPageRange_0205c508(MenuCursor_0205c508*, int*, int*);
extern "C" int AppendText_02042058(char*, const char*);
extern "C" const char* FindStringInList_02072a68(StringList_02072a68_2*, int);
extern "C" int AppendMenuEntry_02041b70(char*, int, const char*);
extern "C" int AppendXPositionTag_02041a28(char*, int);
extern "C" void ClearMessageParams_02046380(void*);
extern "C" void SetMessageNumber_020465c0(MessageWindow_020465c0*, int, int);
extern "C" void SetMessageNumberWidth_020465f0(unsigned char*, int, unsigned char);
extern "C" void SetMessageNumberAlignment_020465d8(unsigned char*, int, unsigned char);
extern "C" void func_02042428(char*, int);
extern "C" void GetLocalWireless_0202ae18();

struct Struct_ov012_021884f4 {
    unsigned short unknown_0_0_ : 5;
    unsigned short unknown_0_5_ : 11;
};

extern "C" ARM void func_ov012_02189dfc(char* arg0, char* arg1, int arg2) {
    if (!arg1) return;
    int var0 = *(int*)(arg0 + 0x143c) % 9;
    if (arg2)
        AppendFrameTag_02041c08(arg1, var0, 8, 5, 5, 5);
    AppendCursorTag_02041ea4(arg1, var0);
    void* var1 = GetMessageWindow_020421a0();
    int var2;
    Struct_ov012_02189af4* var3 = ((Struct_ov012_02189af4_2*)(arg0 + 0x90))->inline_ov012_02189af4_3();
    int var4 = var3->unknown_14_;
    int var5 = var3->unknown_4_;
    int var6, var7;
    GetMenuCursorPageRange_0205c508((MenuCursor_0205c508*)var3, &var6, &var7);
    for (var2 = var6; var2 < var7; ++var2) {
        if (var2 != var6)
            AppendText_02042058(arg1, *(const char**)(arg0 + 0x1348));
        const char* var8 = FindStringInList_02072a68((StringList_02072a68_2*)(arg0 + 0x1314), (short)((*(signed char**)(arg0 + 0x1418))[var2] + 10000));
        AppendMenuEntry_02041b70(arg1, var2 % 9, var8);
    }
    if (((Struct_ov012_021884f4*)(arg0 + 0x141c))->unknown_0_0_ > 9) {
        ClearMessageParams_02046380(var1);
        SetMessageNumber_020465c0((MessageWindow_020465c0*)var1, 0, var4 + 1);
        SetMessageNumber_020465c0((MessageWindow_020465c0*)var1, 1, var5);
        SetMessageNumberWidth_020465f0((unsigned char*)var1, 0, 2);
        SetMessageNumberWidth_020465f0((unsigned char*)var1, 1, 2);
        SetMessageNumberAlignment_020465d8((unsigned char*)var1, 0, 1);
        SetMessageNumberAlignment_020465d8((unsigned char*)var1, 1, 0);
        func_02042428(arg1, 8);
        AppendText_02042058(arg1, FindStringInList_02072a68((StringList_02072a68_2*)(arg0 + 0x1314), 0x6b));
    }
}

#else
#include <globaldefs.h>

struct MenuCursor_0205c508;
struct StringList_02072a68_2;

struct Struct_ov012_02189dfc
{
    int unknown_0_;
    int unknown_4_;
    int unknown_8_[6];
};

struct Struct_01ff91ac_15
{
    char unknown_0_[0x54];
    Struct_ov012_02189dfc unknown_54_;
    char unknown_74_[0x133c - 0xac - 0x74];

    Struct_ov012_02189dfc* inline_ov012_02189dfc() { return &unknown_54_; }
};

struct Struct_ov012_02189dfc_2
{
    char unknown_0_[0xac];
    Struct_01ff91ac_15 unknown_ac_;
    char unknown_133c_[0x1378 - 0x133c];
    const char* unknown_1378_;
    char unknown_137c_[0x13c0 - 0x137c];
    signed char* unknown_13c0_;
    unsigned short unknown_13c4_0_ : 5;
    unsigned short unknown_13c4_5_ : 11;
    char unknown_13c6_[0x13d8 - 0x13c6];
    int unknown_13d8_[6];

    Struct_01ff91ac_15* inline_ov012_02189dfc_2() { return &unknown_ac_; }
};

extern "C" void AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" void AppendCursorTag_02041ea4(char* buffer, int entryIndex);
extern "C" void* GetMessageWindow_020421a0();
extern "C" void GetMenuCursorPageRange_0205c508(MenuCursor_0205c508* cursor, int* outPageStartIndex, int* outPageEndIndex);
extern "C" void AppendText_02042058(char* buffer, const char* text);
extern "C" const char* FindStringInList_02072a68(StringList_02072a68_2* stringList, int stringId);
extern "C" void AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);
extern "C" void AppendPositionTag_02041a90(char* buffer, int x, int y);
extern "C" void func_ov012_021842a0(Struct_ov012_02189dfc_2* arg0, int arg1, int arg2, int arg3);

extern "C" const char data_ov012_0218b310[];

// USA: func_ov012_02189dfc
extern "C" ARM void func_ov012_02189dfc(Struct_ov012_02189dfc_2* arg0, char* arg1, int arg2)
{
    if (arg1 == 0)
        return;

    int var9 = arg0->unknown_13d8_[3] % 9;
    if (arg2)
        AppendFrameTag_02041c08(arg1, var9, 8, 5, 5, 5);
    AppendCursorTag_02041ea4(arg1, var9);
    GetMessageWindow_020421a0();
    int var10;
    Struct_ov012_02189dfc* var11 = arg0->inline_ov012_02189dfc_2()->inline_ov012_02189dfc();
    int var12 = var11->unknown_8_[3];
    int var13 = var11->unknown_4_;
    int var14;
    int var15;
    GetMenuCursorPageRange_0205c508((MenuCursor_0205c508*)var11, &var14, &var15);
    for (var10 = var14; var10 < var15; var10++)
    {
        if (var10 != var14)
            AppendText_02042058(arg1, arg0->unknown_1378_);
        AppendMenuEntry_02041b70(arg1, var10 % 9, FindStringInList_02072a68((StringList_02072a68_2*)arg0->unknown_133c_, (short)(arg0->unknown_13c0_[var10] + 10000)));
    }
    if (arg0->unknown_13c4_0_ > 9)
    {
        func_ov012_021842a0(arg0, 5, var12, var13);
        AppendPositionTag_02041a90(arg1, 0x2a, 0x94);
        AppendText_02042058(arg1, data_ov012_0218b310);
    }
}

#endif
