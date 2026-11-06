#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#if defined(jpn)
extern char data_ov012_0218bfdf[];
#endif
#include <globaldefs.h>

struct StringListEntry_02072a68 {
    short id_0_;
    void* pText_4_;
};

struct StringList_02072a68_2 {
    struct StringListEntry_02072a68* unknown_0_;
    short capacity_4_;
};

extern "C" int AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char* buffer, int entryIndex);
extern "C" void* FindStringInList_02072a68(struct StringList_02072a68_2* stringList, int stringId);
extern "C" int AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);
extern "C" int AppendText_02042058(char* buffer, const char* text);
extern "C" int func_02041e70(char* arg0, int arg1);

// USA: func_ov012_0218a4b0
extern "C" ARM void func_ov012_0218a4b0(unsigned char* arg0, char* arg1, int arg2) {
    if (arg1 == 0) return;

    int var0 = *(int*)(arg0 + R(0x1440,0x13e8));
    if (arg2 != 0) {
        AppendFrameTag_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    AppendCursorTag_02041ea4(arg1, var0);

    void* var1 = FindStringInList_02072a68((struct StringList_02072a68_2*)(arg0 + R(0x1314,0x133c)), 0xa);
    AppendMenuEntry_02041b70(arg1, 0, (const char*)var1);

    AppendText_02042058(arg1, *(char**)(arg0 + R(0x1348,0x1378)));

    unsigned short var2 = *(unsigned short*)(arg0 + R(0x141c,0x13c4));
    unsigned int var3 = ((unsigned int)var2 << 16) >> 21;
    if (var3 == 0) {
#if defined(jpn)
        AppendText_02042058(arg1, data_ov012_0218bfdf);
#else
        func_02041e70(arg1, 3);
#endif
    }

    void* var4 = FindStringInList_02072a68((struct StringList_02072a68_2*)(arg0 + R(0x1314,0x133c)), 0xb);
    AppendMenuEntry_02041b70(arg1, 1, (const char*)var4);
}
