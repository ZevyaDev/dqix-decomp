#include <globaldefs.h>

struct Struct_0201099c_3;
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3* stringTable, int stringId);
extern "C" int AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char* buffer, int entryIndex);
extern "C" int AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);
extern "C" int AppendText_02042058(char* buffer, const char* text);
extern "C" int func_02041fac(char* arg0, int arg1, int arg2);
extern "C" int GetStandardString_020e51cc(int stringId);

// USA: func_ov002_0216186c
#if defined(jpn)
extern "C" int func_02042638(char* arg0, int arg1, int arg2);
extern const char data_ov002_0216da9a[];
extern const char data_ov002_0216daa3[];
extern const char data_ov002_0216daa8[];

extern "C" ARM void func_ov002_0216186c(char* arg0, char* arg1, int arg2) {
    if (arg1 == NULL) {
        return;
    }

    int var0 = *(short*)(arg0 + 0x1adc);
    if (arg2) {
        AppendFrameTag_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    AppendCursorTag_02041ea4(arg1, var0);

    func_02042638(arg1, (int)data_ov002_0216da9a, 0x10);

    AppendMenuEntry_02041b70(arg1, 0, data_ov002_0216daa3);

    void* var1 = *(void**)(arg0 + 0x1aa4);
    AppendText_02042058(arg1, (const char*)var1);

    AppendMenuEntry_02041b70(arg1, 1, data_ov002_0216daa8);
}
#else
extern "C" ARM void func_ov002_0216186c(char* arg0, char* arg1, int arg2) {
    if (arg1 == NULL) {
        return;
    }

    int var2 = *(short*)(arg0 + 0x1c00 + 0x14);
    if (arg2) {
        AppendFrameTag_02041c08(arg1, var2, 8, 5, 5, 5);
    }
    AppendCursorTag_02041ea4(arg1, var2);

    int var3 = FindStringInTable_020e0434((struct Struct_0201099c_3*)(arg0 + 0x20), 0x23f0);
    func_02041fac(arg1, var3, 0x10);

    AppendMenuEntry_02041b70(arg1, 0, (const char*)GetStandardString_020e51cc(0x1b));

    void* var4 = *(void**)(arg0 + 0x1000 + 0xbdc);
    AppendText_02042058(arg1, (const char*)var4);

    AppendMenuEntry_02041b70(arg1, 1, (const char*)GetStandardString_020e51cc(0x1c));
}
#endif
