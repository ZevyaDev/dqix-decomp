#if defined(jpn)
#define R(j,u) (j)
extern const char data_ov012_0218bfd7[];
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct StringList_02072a68_2;
extern "C" void* FindStringInList_02072a68(struct StringList_02072a68_2* stringList, int stringId);
extern "C" int AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char* buffer, int entryIndex);
extern "C" int AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);
extern "C" int AppendText_02042058(char* buffer, const char* text);
extern "C" int AppendTextColorTag_02041e70(char* buffer, int colorIndex);

struct Struct_ov012_02189934 {
    unsigned short unknown_0_0_ : 5;
};

// USA: func_ov012_02189934
extern "C" ARM void func_ov012_02189934(char* arg0, char* arg1, int arg2) {
    if (arg1 == NULL) return;

    int var0 = *(int*)(arg0 + R(0x1430, 0x13d8));
    if (arg2 != 0) {
        AppendFrameTag_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    AppendCursorTag_02041ea4(arg1, var0);

    AppendMenuEntry_02041b70(arg1, 0, (const char*)FindStringInList_02072a68((struct StringList_02072a68_2*)(arg0 + R(0x1314, 0x133c)), 7));
    AppendText_02042058(arg1, *(char**)(arg0 + R(0x1348, 0x1378)));

    AppendMenuEntry_02041b70(arg1, 1, (const char*)FindStringInList_02072a68((struct StringList_02072a68_2*)(arg0 + R(0x1314, 0x133c)), 8));
    AppendText_02042058(arg1, *(char**)(arg0 + R(0x1348, 0x1378)));

    if (((struct Struct_ov012_02189934*)(arg0 + R(0x141c, 0x13c4)))->unknown_0_0_ == 0) {
        AppendTextColorTag_02041e70(arg1, 3);
    }

    AppendMenuEntry_02041b70(arg1, 2, (const char*)FindStringInList_02072a68((struct StringList_02072a68_2*)(arg0 + R(0x1314, 0x133c)), 9));
    AppendText_02042058(arg1, *(char**)(arg0 + R(0x1348, 0x1378)));

    if (((struct Struct_ov012_02189934*)(arg0 + R(0x141c, 0x13c4)))->unknown_0_0_ == 0) {
#if defined(jpn)
        AppendText_02042058(arg1, data_ov012_0218bfd7);
#else
        AppendTextColorTag_02041e70(arg1, 0xf);
#endif
    }

    AppendMenuEntry_02041b70(arg1, 3, (const char*)FindStringInList_02072a68((struct StringList_02072a68_2*)(arg0 + R(0x1314, 0x133c)), 0x6d));
}
