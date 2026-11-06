#include <globaldefs.h>

struct Struct_0201099c_3;
extern "C" int AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char* buffer, int entryIndex);
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3* stringTable, int stringId);
extern "C" int AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);
extern "C" int AppendText_02042058(char* buffer, const char* text);

extern char data_ov003_0217fe7f;

// USA: func_ov003_0215b6f0
extern "C" ARM void func_ov003_0215b6f0(char* arg0, char* arg1, int arg2) {
    if (arg1 == NULL) return;

    signed char var0 = *(signed char*)(arg0 + 0x584);
    if (arg2) {
        AppendFrameTag_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    AppendCursorTag_02041ea4(arg1, var0);

    struct Struct_0201099c_3* var1 = (struct Struct_0201099c_3*)(arg0 + 0x64);
    int var2 = 0;
    while (var2 < *(unsigned char*)(arg0 + 0x589)) {
        signed char var3 = *(signed char*)(arg0 + var2 + 0x58a);
        int var4 = FindStringInTable_020e0434(var1, var3);
        AppendMenuEntry_02041b70(arg1, var2, (const char*)var4);
        if (var2 != *(unsigned char*)(arg0 + 0x589) - 1) {
            AppendText_02042058(arg1, &data_ov003_0217fe7f);
        }
        var2++;
    }
}
