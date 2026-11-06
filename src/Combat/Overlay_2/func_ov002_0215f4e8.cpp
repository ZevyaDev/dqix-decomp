#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov002_0215f4e8_7166 = 0x1ac6, Enum_ov002_0215f4e8_3036 = 0xaa4, Enum_ov002_0215f4e8_32 = 0x8 };
#define func_02041cc0 func_0204234c
#else
enum { Enum_ov002_0215f4e8_7166 = 0x1bfe, Enum_ov002_0215f4e8_3036 = 0xbdc, Enum_ov002_0215f4e8_32 = 0x20 };
#endif

struct Struct_0201099c_3;
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3 *stringTable, int stringId);
extern "C" int AppendFrameTag_02041c08(char *buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char *buffer, int entryIndex);
extern "C" const char *GetStandardString_020e51cc(int stringId);
extern "C" int AppendText_02042058(char *buffer, const char *text);
#if defined(jpn)
extern "C" int func_0204234c(char *arg0, int arg1);
#else
extern "C" int func_02041cc0(char *arg0, int arg1);
#endif
extern "C" int AppendPositionTag_02041a90(char *buffer, int x, int y);
extern "C" int AppendTextColorTag_02041e70(char *buffer, int colorIndex);
extern "C" int AppendMenuEntry_02041b70(char *buffer, int entryIndex, const char *text);
extern "C" void func_ov002_02156080(void *arg0, short *arg1, short *arg2);
extern "C" int func_ov002_02161920(void *arg0);

// USA: func_ov002_0215f4e8
extern "C" ARM void func_ov002_0215f4e8(unsigned char *arg0, char *arg1, int arg2) {
    if (arg1 == NULL) return;

    int var0 = *(short *) (arg0 + Enum_ov002_0215f4e8_7166);
    if (arg2) {
        AppendFrameTag_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    AppendCursorTag_02041ea4(arg1, var0);
#if defined(jpn)
    AppendText_02042058(arg1, (const char *) FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + Enum_ov002_0215f4e8_32), 0xfa0));
#else
    AppendText_02042058(arg1, GetStandardString_020e51cc(0x16));
#endif
    AppendText_02042058(arg1, *(const char **) (arg0 + 0x1000 + Enum_ov002_0215f4e8_3036));
    func_02041cc0(arg1, 0x18);
    AppendPositionTag_02041a90(arg1, 0xc, 0x1f);

    short var1 = 0;
    short var2[9];
    func_ov002_02156080(arg0, var2, &var1);
    int var3 = func_ov002_02161920(arg0);
    for (unsigned char var4 = 0; var4 < var1; var4++) {
        short var5 = var2[var4];
        if (var3 == 1 && var5 == 6) {
            AppendTextColorTag_02041e70(arg1, 3);
        }
        AppendMenuEntry_02041b70(arg1, var4,
                      (const char *) FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + Enum_ov002_0215f4e8_32), (short) (var5 + 0xfa1)));
        if (var4 != var1 - 1) {
            AppendText_02042058(arg1, *(const char **) (arg0 + 0x1000 + Enum_ov002_0215f4e8_3036));
        }
        if (var3 == 1 && var5 == 6) {
            AppendTextColorTag_02041e70(arg1, 0xf);
        }
    }
}
