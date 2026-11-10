#include <globaldefs.h>

struct MenuCursor_0205c508;
extern "C" void GetMenuCursorPageRange_0205c508(struct MenuCursor_0205c508* cursor, int* outPageStartIndex, int* outPageEndIndex);

extern "C" int func_ov000_0217542c(void* arg0);
extern "C" int AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char* buffer, int entryIndex);
extern "C" int func_ov000_02171674(void* arg0, int arg1);
extern "C" int AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);
struct Struct_0201099c_3;
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3* stringTable, int stringId);
extern "C" int AppendText_02042058(char* buffer, const char* text);

struct Struct_ov000_02178f28 {
    char unknown_0_[0x20];
    signed char unknown_20_;
};

// USA: func_ov000_02178f28
extern "C" ARM void func_ov000_02178f28(char* arg0, struct Struct_ov000_02178f28* arg1, char* arg2) {
    if (arg1 != NULL && arg2 != NULL) {
        int var0, var1;
        GetMenuCursorPageRange_0205c508((struct MenuCursor_0205c508*)(arg0 + 0x1dc), &var0, &var1);
        signed char var2 = var0;
        signed char var3 = var1;
        signed char var4 = arg1->unknown_20_;
        if (func_ov000_0217542c(arg0)) {
            AppendFrameTag_02041c08(arg2, var4 - var2, 8, 5, 5, 5);
        }
        AppendCursorTag_02041ea4(arg2, var4 - var2);
        for (signed char var5 = var2; var5 < var3; var5++) {
            const char** var6 = (const char**)func_ov000_02171674(arg1, var5);
            if (var6 == NULL) continue;
            AppendMenuEntry_02041b70(arg2, var5 - var2, *var6);
            if (var5 == var3 - 1) continue;
            AppendText_02042058(arg2, (const char*)FindStringInTable_020e0434((struct Struct_0201099c_3*)(arg0 + 0xb8), 0));
        }
    }
}
