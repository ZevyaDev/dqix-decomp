#if defined(jpn)
enum {Enum_ov023_021da100_3460=0xd48, Enum_ov023_021da100_48=0x38, Enum_ov023_021da100_224=0xc0};
#else
enum {Enum_ov023_021da100_3460=0xd84, Enum_ov023_021da100_48=0x30, Enum_ov023_021da100_224=0xe0};
#endif
#include <globaldefs.h>

struct Struct_0201099c_3;
extern "C" int AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char* buffer, int entryIndex);
extern "C" int func_02041bac(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3* stringTable, int stringId);
extern "C" int AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);
extern "C" int AppendText_02042058(char* buffer, const char* text);

// USA: func_ov023_021da100
extern "C" ARM void func_ov023_021da100(char* arg0, char* arg1, int arg2) {
    if (arg1 == NULL) return;

    signed char var0 = *(signed char*)(arg0 + Enum_ov023_021da100_3460);
    if (arg2) {
        AppendFrameTag_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    AppendCursorTag_02041ea4(arg1, var0);

    func_02041bac(arg1, 0, 0, 0, Enum_ov023_021da100_48, 0x28);

    struct Struct_0201099c_3* var1 = (struct Struct_0201099c_3*)(arg0 + Enum_ov023_021da100_224);
    for (int var2 = 0; var2 < 2; var2++) {
        int var3 = FindStringInTable_020e0434(var1, (short)(var2 + 0x465a));
        AppendMenuEntry_02041b70(arg1, var2, (const char*)var3);
        if (var2 != 1) {
            int var4 = FindStringInTable_020e0434(var1, 0x4273);
            AppendText_02042058(arg1, (const char*)var4);
        }
    }
}
