#include <globaldefs.h>

#if defined(jpn)
#define func_ov012_0218a1f4 func_ov012_0218ae20
#endif

struct StringListEntry_02072a68 {
    short id_0_;
    void* pText_4_;
};

struct StringList_02072a68_2 {
    struct StringListEntry_02072a68* unknown_0_;
    short capacity_4_;
};

struct MessageWindow_020465c0 {
    char unknown_0_[0x8b0];
    int numbers_8b0_[0x10];
};

extern "C" int GetMessageWindow_020421a0();
extern "C" void SetMessageNumber_020465c0(struct MessageWindow_020465c0* window, int index, int number);
extern "C" void func_020465f0(unsigned char* arg0, int arg1, unsigned char arg2);
extern "C" void func_020465d8(unsigned char* arg0, int arg1, unsigned char arg2);
extern "C" int func_02041d9c(char* arg0, int arg1);
extern "C" void* FindStringInList_02072a68(struct StringList_02072a68_2* stringList, int stringId);
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int func_020420e8(char* arg0, int arg1);
extern "C" int func_02041a90(char* arg0, int arg1, int arg2);
extern "C" int AppendText_02042058(char* buffer, const char* text);
#if defined(jpn)
extern "C" void func_02042428(char* arg0, int arg1);
#endif

// USA: func_ov012_0218a1f4
extern "C" ARM void func_ov012_0218a1f4(unsigned char* arg0, char* arg1) {
    if (arg1 == 0) return;

    struct MessageWindow_020465c0* var0 = (struct MessageWindow_020465c0*)GetMessageWindow_020421a0();
#if defined(jpn)
    SetMessageNumber_020465c0(var0, 0, arg0[0x1457]);
    func_020465f0((unsigned char*)var0, 0, 2);
    func_020465d8((unsigned char*)var0, 0, 1);
    func_02042428(arg1, 0xc);
    if (arg0[0x1341] == 9) {
        void* var1 = FindStringInList_02072a68((struct StringList_02072a68_2*)(arg0 + 0x1314), 0x69);
        func_02041b70(arg1, 0, (const char*)var1);
    } else {
        void* var2 = FindStringInList_02072a68((struct StringList_02072a68_2*)(arg0 + 0x1314), 0x66);
        func_02041b70(arg1, 0, (const char*)var2);
    }
#else
    SetMessageNumber_020465c0(var0, 0, *(unsigned short*)(arg0 + 0x13fc));
    func_020465f0((unsigned char*)var0, 0, 4);
    func_020465d8((unsigned char*)var0, 0, 1);

    func_02041d9c(arg1, 0xc);

    int var3 = 0x64;
    if (arg0[0x1371] == 7) var3 = 0x67;
    void* var4 = FindStringInList_02072a68((struct StringList_02072a68_2*)(arg0 + 0x133c), var3);
    func_02041b70(arg1, 0, (const char*)var4);

    void* var5 = FindStringInList_02072a68((struct StringList_02072a68_2*)(arg0 + 0x133c), 0x2a);
    int var6 = func_020420e8((char*)var5, 0);
    func_02041a90(arg1, (0x60 - var6) >> 1, 1);
    AppendText_02042058(arg1, (const char*)var5);
#endif
}
