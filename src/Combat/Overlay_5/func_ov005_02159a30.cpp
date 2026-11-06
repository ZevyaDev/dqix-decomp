#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include <globaldefs.h>
#include "Resource/CharacterCreationUI.h"

struct Struct_ov005_02153954 {
    char unknown_0_[0xdf8];
    Struct_0201099c_3 unknown_df8_;
    char unknown_e00_[LOW_REGION(0xf80, 0xf84) - 0xdf8 - sizeof(Struct_0201099c_3)];
    short unknown_f84_;
    short unknown_f86_;
    short unknown_f88_;
    short unknown_f8a_;
    char unknown_f8c_[LOW_REGION(0x3d33 - 0xf88, 0x3dbb - 0xf8c)];
    signed char unknown_3dbb_;
    char unknown_3dbc_[LOW_REGION(0x3d54, 0x3ddc) - LOW_REGION(0x3d34, 0x3dbc)];
    unsigned char unknown_3ddc_;
    unsigned char unknown_3ddd_;
    signed char unknown_3dde_;
    unsigned char unknown_3ddf_;
};

extern "C" void AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" void AppendCursorTag_02041ea4(char* buffer, int entryIndex);
extern "C" const char* FindStringInTable_020e0434(Struct_0201099c_3* stringTable, int stringId);
extern "C" int func_020420e8(const char* arg0, int arg1);
extern "C" void AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);
extern "C" void AppendText_02042058(char* buffer, const char* text);

// USA: func_ov005_02159a30
extern "C" ARM void func_ov005_02159a30(Struct_ov005_02153954* arg0, char* arg1, int arg2) {
    if (arg1 == NULL)
        return;
    int var0 = arg0->unknown_3dde_;
    if (arg2)
        AppendFrameTag_02041c08(arg1, var0, 8, 5, 5, 5);
    AppendCursorTag_02041ea4(arg1, var0);
    int var1 = 4;
    int var2 = 0;
    if (arg0->unknown_3dbb_ >= 0 && arg0->unknown_3dbb_ < 8) {
        var1--;
        var2 = 1;
    }
#if defined(jpn)
    for (int var3 = 0; var3 < var1; var3++) {
        if (var2) {
            if (var3 == 0)
                AppendMenuEntry_02041b70(arg1, var3, FindStringInTable_020e0434(&arg0->unknown_df8_, 4));
            else
                AppendMenuEntry_02041b70(arg1, var3, FindStringInTable_020e0434(&arg0->unknown_df8_, (short)(var3 + 1)));
        } else {
            AppendMenuEntry_02041b70(arg1, var3, FindStringInTable_020e0434(&arg0->unknown_df8_, (short)var3));
        }
        if (var3 != var1 - 1)
            AppendText_02042058(arg1, FindStringInTable_020e0434(&arg0->unknown_df8_, 0x64));
    }
#else
    Struct_0201099c_3* var4 = &arg0->unknown_df8_;
    const char* var5 = FindStringInTable_020e0434(var4, 0x64);
    int var6 = 0;
    for (int var7 = 0; var7 < var1; var7++) {
        short var8 = var7;
        if (var2) {
            var8++;
            if (var7 == 0)
                var8 = 4;
        }
        const char* var9 = FindStringInTable_020e0434(var4, var8);
        int var10 = func_020420e8(var9, 0);
        if (var6 < var10)
            var6 = var10;
        AppendMenuEntry_02041b70(arg1, var7, var9);
        if (var7 != var1 - 1)
            AppendText_02042058(arg1, var5);
    }
    int var11 = ((var6 + 0x1b) & ~7) >> 3;
    var11 += var11 & 1;
    arg0->unknown_f84_ = var11;
    arg0->unknown_f86_ = 7;
    arg0->unknown_f88_ = (0x20 - var11) >> 1;
    arg0->unknown_f8a_ = 9;
#endif
}
