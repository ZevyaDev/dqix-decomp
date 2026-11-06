#include <globaldefs.h>

extern "C" void* func_ov000_02174da4(int arg0, void* arg1);
extern "C" int func_ov000_0217542c(void* arg0);
extern "C" int AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char* buffer, int entryIndex);
extern "C" int AppendText_02042058(char* buffer, const char* text);
extern "C" int AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);

struct Struct_0201099c_3;
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3* stringTable, int stringId);
extern "C" int GetStandardString_020e51cc(int stringId);

extern short data_ov000_021834c4[4];

#if defined(jpn)
struct Struct_ov000_021845c6 { char unknown_0_[4][9]; };
extern const Struct_ov000_021845c6 data_ov000_021845c6;
#endif

// USA: func_ov000_0217737c
extern "C" ARM void func_ov000_0217737c(void* arg0, char* arg1) {
    char* var0 = (char*)arg0;
    if (arg1 == 0) {
        return;
    }
    int var1[4];
    func_ov000_02174da4((int)var0, var1);
#if defined(jpn)
    int var4 = 0;
    Struct_ov000_021845c6 var2(data_ov000_021845c6);
    signed char var3 = *(signed char*)(var0 + 0x1fa1);
#else
    signed char var3 = *(signed char*)(var0 + 0x1d69);
#endif
#if !defined(jpn)
    int var4 = 0;
#endif
    if (func_ov000_0217542c(var0)) {
        AppendFrameTag_02041c08(arg1, var3, 8, 5, 5, 5);
    }
    AppendCursorTag_02041ea4(arg1, var3);
    int var5 = 0;
    for (int var6 = 0; var6 < 4; var6++) {
        int var7 = var1[var6];
        if (var7 < 0) {
            continue;
        }
        if (var4 != 0) {
            int var8 = FindStringInTable_020e0434((struct Struct_0201099c_3*)(var0 + 0xb8), var5);
            AppendText_02042058(arg1, (const char*)var8);
        }
#if defined(jpn)
        char* var9 = var2.unknown_0_[var7];
#else
        int var9 = GetStandardString_020e51cc(data_ov000_021834c4[var7]);
#endif
        AppendMenuEntry_02041b70(arg1, var4, (const char*)var9);
        var4++;
    }
}
