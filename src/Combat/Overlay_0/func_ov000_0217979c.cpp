#include <globaldefs.h>

struct MenuCursor_0205c508;
extern "C" void GetMenuCursorPageRange_0205c508(struct MenuCursor_0205c508* cursor, int* outPageStartIndex, int* outPageEndIndex);
struct Struct_0201099c_3;
extern "C" char* FindStringInTable_020e0434(struct Struct_0201099c_3* stringTable, int stringId);
extern "C" int func_ov000_0217542c(void* arg0);
extern "C" int AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char* buffer, int entryIndex);
extern "C" void* func_ov000_02171b9c(void* arg0, int arg1);
extern "C" int AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);
extern "C" void __clear(void* arg0, int arg1);
extern "C" int AppendText_02042058(char* buffer, const char* text);
#if defined(jpn)
extern "C" int func_02042158(char* arg0, int arg1);
#define func_02041acc func_02042158
#else
extern "C" int func_02041acc(char* arg0, int arg1);
#endif
extern "C" void CopyCapitalizedText_0206819c(const char* text, char* outText, int font);

#if defined(jpn)
#define data_ov000_02184069 data_ov000_021851a9
#endif
extern char data_ov000_02184069[];

struct Struct_ov000_0217979c {
    int unknown_0_;
    const char* unknown_4_;
    unsigned int unknown_8_0_ : 4;
};

struct Struct_ov000_0217979c_2 {
    char unknown_0_[0x22];
    signed char unknown_22_;
};

// USA: func_ov000_0217979c
extern "C" ARM void func_ov000_0217979c(char* arg0, struct Struct_ov000_0217979c_2* arg1, char* arg2) {
    if (arg1 == NULL || arg2 == NULL) {
        return;
    }
    int var0;
    int var1;
    GetMenuCursorPageRange_0205c508((struct MenuCursor_0205c508*)(arg0 + 0x1dc), &var0, &var1);
    signed char var2 = var0;
    signed char var3 = var1;
    signed char var4 = arg1->unknown_22_;
#if !defined(jpn)
    char* var5 = FindStringInTable_020e0434((struct Struct_0201099c_3*)(arg0 + 0xb8), 0x13);
    char* var6 = FindStringInTable_020e0434((struct Struct_0201099c_3*)(arg0 + 0xb8), 0);
#endif
    if (func_ov000_0217542c(arg0)) {
        AppendFrameTag_02041c08(arg2, var4 - var2, 8, 5, 5, 5);
    }
    AppendCursorTag_02041ea4(arg2, var4 - var2);
    for (signed char var7 = var2; var7 < var3; var7++) {
        struct Struct_ov000_0217979c* var8 = (struct Struct_ov000_0217979c*)func_ov000_02171b9c(arg1, var7);
        if (var8 == NULL) {
            AppendMenuEntry_02041b70(arg2, var7 - var2, data_ov000_02184069);
            continue;
        }
        char var9[0x80];
        __clear(var9, 0x80);
        int var10 = var8->unknown_8_0_ <= 7;
        if (var10) {
#if defined(jpn)
            AppendText_02042058(var9, FindStringInTable_020e0434((struct Struct_0201099c_3*)(arg0 + 0xb8), 0x13));
#else
            AppendText_02042058(var9, var5);
            func_02041acc(var9, 3);
#endif
        } else {
            func_02041acc(var9, 8);
        }
#if defined(jpn)
        AppendText_02042058(var9, var8->unknown_4_);
#else
        char var11[0x100];
        __clear(var11, 0x100);
        CopyCapitalizedText_0206819c(var8->unknown_4_, var11, 0);
        AppendText_02042058(var9, var11);
#endif
        AppendMenuEntry_02041b70(arg2, var7 - var2, var9);
        if (var7 != var3 - 1) {
#if defined(jpn)
            AppendText_02042058(arg2, FindStringInTable_020e0434((struct Struct_0201099c_3*)(arg0 + 0xb8), 0));
#else
            AppendText_02042058(arg2, var6);
#endif
        }
    }
}
