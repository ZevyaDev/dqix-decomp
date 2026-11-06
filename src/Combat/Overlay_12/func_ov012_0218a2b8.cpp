#include <globaldefs.h>

#if defined(jpn)
#define func_ov012_0218a2b8 func_ov012_0218ad7c
#endif

struct StringListEntry_02072a68 {
    short id_0_;
    void* pText_4_;
};

struct StringList_02072a68_2 {
    struct StringListEntry_02072a68* unknown_0_;
    short capacity_4_;
};

extern "C" int GetMessageWindow_020421a0();
extern "C" int func_02041dd0(char* arg0, int arg1);
extern "C" void* FindStringInList_02072a68(struct StringList_02072a68_2* stringList, int stringId);
extern "C" int AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);
extern "C" int func_020420e8(char* arg0, int arg1);
extern "C" int AppendPositionTag_02041a90(char* buffer, int x, int y);
extern "C" int AppendText_02042058(char* buffer, const char* text);
#if defined(jpn)
struct MessageWindow_020465c0;
extern "C" void SetMessageNumber_020465c0(struct MessageWindow_020465c0* window, int index, int number);
extern "C" void SetMessageNumberWidth_020465f0(unsigned char* window, int index, unsigned char width);
extern "C" void SetMessageNumberAlignment_020465d8(unsigned char* window, int index, unsigned char alignment);
extern "C" void func_02042428(char* arg0, int arg1);
#endif

// USA: func_ov012_0218a2b8
extern "C" ARM void func_ov012_0218a2b8(unsigned char* arg0, char* arg1) {
    if (arg1 == 0) return;
#if defined(jpn)
    struct MessageWindow_020465c0* var0 = (struct MessageWindow_020465c0*)GetMessageWindow_020421a0();
    SetMessageNumber_020465c0(var0, 0, arg0[0x1456]);
    SetMessageNumberWidth_020465f0((unsigned char*)var0, 0, 2);
    SetMessageNumberAlignment_020465d8((unsigned char*)var0, 0, 1);
    func_02042428(arg1, 0xc);
    if (arg0[0x1341] == 8) {
        void* var1 = FindStringInList_02072a68((struct StringList_02072a68_2*)(arg0 + 0x1314), 0x68);
        AppendMenuEntry_02041b70(arg1, 0, (const char*)var1);
    } else {
        void* var2 = FindStringInList_02072a68((struct StringList_02072a68_2*)(arg0 + 0x1314), 0x65);
        AppendMenuEntry_02041b70(arg1, 0, (const char*)var2);
    }
#else
    GetMessageWindow_020421a0();

    if (arg0[0x1371] == 8) {
        func_02041dd0(arg1, 4);
    }

    void* var3 = FindStringInList_02072a68((struct StringList_02072a68_2*)(arg0 + 0x133c), (short)(arg0[0x13fe] + 0x13));
    AppendMenuEntry_02041b70(arg1, 0, (const char*)var3);

    if (arg0[0x1371] == 8) {
        func_02041dd0(arg1, 0);
    }

    void* var4 = FindStringInList_02072a68((struct StringList_02072a68_2*)(arg0 + 0x133c), 0x29);
    int var5 = func_020420e8((char*)var4, 0);
    AppendPositionTag_02041a90(arg1, (0x48 - var5) >> 1, 1);
    AppendText_02042058(arg1, (const char*)var4);
#endif
}
