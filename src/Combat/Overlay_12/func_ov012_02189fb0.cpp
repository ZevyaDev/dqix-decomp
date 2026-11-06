#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov012_02189fb0_5112 = 0x1450, Enum_ov012_02189fb0_4924 = 0x1314, Enum_ov012_02189fb0_4984 = 0x1348 };
#else
enum { Enum_ov012_02189fb0_5112 = 0x13f8, Enum_ov012_02189fb0_4924 = 0x133c, Enum_ov012_02189fb0_4984 = 0x1378 };
#endif

extern "C" ARM int AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" ARM int AppendCursorTag_02041ea4(char* buffer, int entryIndex);
extern "C" ARM int AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);
extern "C" ARM int AppendText_02042058(char* buffer, const char* text);

struct StringList_02072a68_2;
extern "C" void* FindStringInList_02072a68(struct StringList_02072a68_2* stringList, int stringId);

// USA: func_ov012_02189fb0
extern "C" ARM void func_ov012_02189fb0(char* arg0, char* arg1, int arg2) {
    if (arg1 == 0) return;

    int var0 = *(int*)(arg0 + Enum_ov012_02189fb0_5112);
    if (arg2 != 0) {
        AppendFrameTag_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    AppendCursorTag_02041ea4(arg1, var0);

    const char* var1 = (const char*)FindStringInList_02072a68((struct StringList_02072a68_2*)(arg0 + Enum_ov012_02189fb0_4924), 0x10);
    AppendMenuEntry_02041b70(arg1, 0, var1);

    AppendText_02042058(arg1, *(const char**)(arg0 + Enum_ov012_02189fb0_4984));

    const char* var2 = (const char*)FindStringInList_02072a68((struct StringList_02072a68_2*)(arg0 + Enum_ov012_02189fb0_4924), 0x11);
    AppendMenuEntry_02041b70(arg1, 1, var2);
}
