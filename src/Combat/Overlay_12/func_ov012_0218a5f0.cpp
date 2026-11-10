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

extern "C" ARM void func_ov012_0218a5f0(char* arg0, char* arg1, int arg2) {
    if (!arg1) return;
    int var0 = *(int*)(arg0 + 0x1444) % 10;
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
    GetLocalWireless_0202ae18();
    GameState::GetInstance();
    for (var2 = var6; var2 < var7; ++var2) {
        if (var2 != var6)
            AppendText_02042058(arg1, *(const char**)(arg0 + 0x1348));
        if (var2 == 0) {
            const char* var8 = FindStringInList_02072a68((StringList_02072a68_2*)(arg0 + 0x1314), 0x50dc);
            AppendMenuEntry_02041b70(arg1, var2 % 10, var8);
        } else {
            const char* var9 = FindStringInList_02072a68((StringList_02072a68_2*)(arg0 + 0x1314), (short)(0x5140 + var2 - 1));
            AppendMenuEntry_02041b70(arg1, var2 % 10, var9);
        }
    }
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

#else
#include <globaldefs.h>
#include "GameState/GameState.h"

struct MenuCursor_0205c508;
struct StringList_02072a68_2;

struct Struct_ov012_0218a5f0
{
    int unknown_0_;
    int unknown_4_;
    int unknown_8_[6];
};

struct Struct_01ff91ac_16
{
    char unknown_0_[0x54];
    Struct_ov012_0218a5f0 unknown_54_;
    char unknown_74_[0x1290 - 0x74];

    Struct_ov012_0218a5f0* inline_ov012_0218a5f0() { return &unknown_54_; }
};

struct Struct_ov012_0218a5f0_2
{
    char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
};

struct Struct_ov012_0218a5f0_3
{
    char unknown_0_[0x150];
    Struct_ov012_0218a5f0_2* unknown_150_;
};

struct Struct_ov012_0218a5f0_4
{
    char unknown_0_[0xac];
    Struct_01ff91ac_16 unknown_ac_;
    char unknown_133c_[0x1378 - 0x133c];
    const char* unknown_1378_;
    char unknown_137c_[0x13d8 - 0x137c];
    int unknown_13d8_[6];

    Struct_01ff91ac_16* inline_ov012_0218a5f0_2() { return &unknown_ac_; }
};

extern "C" void AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" void AppendCursorTag_02041ea4(char* buffer, int entryIndex);
extern "C" void* GetMessageWindow_020421a0();
extern "C" void GetMenuCursorPageRange_0205c508(MenuCursor_0205c508* cursor, int* outPageStartIndex, int* outPageEndIndex);
extern "C" void GetLocalWireless_0202ae18();
extern "C" void AppendText_02042058(char* buffer, const char* text);
extern "C" const char* FindStringInList_02072a68(StringList_02072a68_2* stringList, int stringId);
extern "C" void AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);
extern "C" void __clear(void* arg0, unsigned long arg1);
extern "C" void CopyCapitalizedText_0206819c(const char* text, char* outText, int font);
extern "C" void func_ov012_021842a0(Struct_ov012_0218a5f0_4* arg0, int arg1, int arg2, int arg3);

// USA: func_ov012_0218a5f0
extern "C" ARM void func_ov012_0218a5f0(Struct_ov012_0218a5f0_4* arg0, char* arg1, int arg2)
{
    if (arg1 == 0)
        return;

    int var10 = arg0->unknown_13d8_[5] % 10;
    if (arg2)
        AppendFrameTag_02041c08(arg1, var10, 8, 5, 5, 5);
    AppendCursorTag_02041ea4(arg1, var10);
    GetMessageWindow_020421a0();
    Struct_ov012_0218a5f0_3* var11;
    int var12;
    Struct_ov012_0218a5f0* var13 = arg0->inline_ov012_0218a5f0_2()->inline_ov012_0218a5f0();
    int var14 = var13->unknown_8_[3];
    int var15 = var13->unknown_4_;
    int var16;
    int var17;
    GetMenuCursorPageRange_0205c508((MenuCursor_0205c508*)var13, &var16, &var17);
    GetLocalWireless_0202ae18();
    var11 = (Struct_ov012_0218a5f0_3*)GameState::GetInstance()->GetProtagonist();
    int var18 = 0x50dc;
    for (var12 = var16; var12 < var17; var12++)
    {
        if (var12 != var16)
            AppendText_02042058(arg1, arg0->unknown_1378_);
        if (var12 == 0)
        {
            int var19 = var18;
            if (var11->unknown_150_->unknown_49c_0_ == 1)
                var19 = 0x510e;
            const char* var20 = FindStringInList_02072a68((StringList_02072a68_2*)arg0->unknown_133c_, (short)var19);
            AppendMenuEntry_02041b70(arg1, var12 % 10, var20);
        }
        else
        {
            int var21 = 0x5140;
            if (var11->unknown_150_->unknown_49c_0_ == 1)
                var21 = 0x51a4;
            const char* var22 = FindStringInList_02072a68((StringList_02072a68_2*)arg0->unknown_133c_, (short)(var21 + var12 - 1));
            char var23[0x80];
            __clear(var23, sizeof(var23));
            CopyCapitalizedText_0206819c(var22, var23, 0);
            AppendMenuEntry_02041b70(arg1, var12 % 10, var23);
        }
    }
    func_ov012_021842a0(arg0, 11, var14, var15);
}

#endif
