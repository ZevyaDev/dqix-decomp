#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include <globaldefs.h>

struct Struct_0205c508;
struct Struct_0201099c_3;

struct Struct_ov012_0218a844
{
    int unknown_0_;
    int unknown_4_;
    int unknown_8_[6];
};

struct Struct_0201099c_22
{
    char unknown_0_[0x54];
    Struct_ov012_0218a844 unknown_54_;
    char unknown_74_[LOW_REGION(0x128c, 0x1298) - 0x74];

    Struct_ov012_0218a844* inline_ov012_0218a844() { return &unknown_54_; }
};

struct Struct_ov012_0218a844_2
{
    char unknown_0_[LOW_REGION(0x90, 0xac)];
    Struct_0201099c_22 unknown_ac_;
    char unknown_1344_[LOW_REGION(0x1348, 0x1378) - LOW_REGION(0x131c, 0x1344)];
    const char* unknown_1378_;
    char unknown_137c_[LOW_REGION(0x1420, 0x13c8) - LOW_REGION(0x134c, 0x137c)];
    short* unknown_13c8_;
    char unknown_13cc_[LOW_REGION(0x1448, 0x13f0) - LOW_REGION(0x1424, 0x13cc)];
    int unknown_13f0_;

    Struct_0201099c_22* inline_ov012_0218a844_2() { return &unknown_ac_; }
};

extern "C" void AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" void AppendCursorTag_02041ea4(char* buffer, int entryIndex);
extern "C" void* GetMessageWindow_020421a0();
extern "C" void func_0205c508(Struct_0205c508* arg0, int* arg1, int* arg2);
extern "C" void AppendText_02042058(char* buffer, const char* text);
extern "C" void AppendXPositionTag_02041a28(char* buffer, int x);
extern "C" const char* FindStringInTable_020e0434(Struct_0201099c_3* stringTable, int stringId);
extern "C" void AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);
extern "C" void AppendPositionTag_02041a90(char* buffer, int x, int y);
#if !defined(jpn)
extern "C" void func_ov012_021842a0(Struct_ov012_0218a844_2* arg0, int arg1, int arg2, int arg3);

extern "C" const char data_ov012_0218b310[];
#endif

#if defined(jpn)
struct MessageWindow_020465c0;
struct StringList_02072a68_2;
extern "C" void ClearMessageParams_02046380(void*);
extern "C" void SetMessageNumber_020465c0(MessageWindow_020465c0*, int, int);
extern "C" void SetMessageNumberWidth_020465f0(unsigned char*, int, unsigned char);
extern "C" void SetMessageNumberAlignment_020465d8(unsigned char*, int, unsigned char);
extern "C" void func_02042428(char*, int);
extern "C" const char* FindStringInList_02072a68(StringList_02072a68_2*, int);
#endif

// USA: func_ov012_0218a844
extern "C" ARM void func_ov012_0218a844(Struct_ov012_0218a844_2* arg0, char* arg1, int arg2)
{
    if (arg1 == 0)
        return;

    int var0 = arg0->unknown_13f0_ & 0xf;
    if (arg2)
        AppendFrameTag_02041c08(arg1, var0, 8, 5, 5, 5);
    AppendCursorTag_02041ea4(arg1, var0);
#if defined(jpn)
    void* var1 = GetMessageWindow_020421a0();
#else
    GetMessageWindow_020421a0();
#endif
    int var2;
    Struct_ov012_0218a844* var3 = arg0->inline_ov012_0218a844_2()->inline_ov012_0218a844();
    int var4 = var3->unknown_8_[3];
    int var5 = var3->unknown_4_;
    int var6;
    int var7;
    func_0205c508((Struct_0205c508*)var3, &var6, &var7);
    for (var2 = var6; var2 < var7; var2++)
    {
        if (var2 % 2 == 0)
        {
            if (var2 != var6)
                AppendText_02042058(arg1, arg0->unknown_1378_);
        }
        else
        {
            AppendXPositionTag_02041a28(arg1, LOW_REGION(0x7c, 0x88));
        }
        AppendMenuEntry_02041b70(arg1, var2 & 0xf, FindStringInTable_020e0434((Struct_0201099c_3*)arg0->unknown_1344_, arg0->unknown_13c8_[var2]));
    }
    if (var5 > 1)
    {
#if defined(jpn)
        ClearMessageParams_02046380(var1);
        SetMessageNumber_020465c0((MessageWindow_020465c0*)var1, 0, var4 + 1);
        SetMessageNumber_020465c0((MessageWindow_020465c0*)var1, 1, var5);
        SetMessageNumberWidth_020465f0((unsigned char*)var1, 0, 2);
        SetMessageNumberWidth_020465f0((unsigned char*)var1, 1, 2);
        SetMessageNumberAlignment_020465d8((unsigned char*)var1, 0, 1);
        SetMessageNumberAlignment_020465d8((unsigned char*)var1, 1, 0);
        func_02042428(arg1, 8);
        AppendText_02042058(arg1, FindStringInList_02072a68((StringList_02072a68_2*)((char*)arg0 + 0x1314), 0x7a));
#else
        func_ov012_021842a0(arg0, 12, var4, var5);
        AppendPositionTag_02041a90(arg1, 0x56, 0x94);
        AppendText_02042058(arg1, data_ov012_0218b310);
#endif
    }
}
