#include <globaldefs.h>

#if defined(jpn)
#define func_02041d9c func_02042428
#endif

#if defined(jpn)
#define func_ov013_02185be0 func_ov013_02186db0
#endif

struct Struct_ov013_021846a0_2 {
#if defined(jpn)
    char unknown_0_[0x5ac];
#else
    char unknown1_0_[0x620];
#endif
    char unknown_620_[0x18];
    unsigned char unknown_638_[4];
    unsigned char unknown_63c_;
    unsigned char unknown_63d_;
    unsigned char unknown_63e_;
    bool unknown_63f_;
    bool unknown_640_;
    unsigned int unknown_644_;
    int unknown_648_;
#if !defined(jpn)
    int unknown_64c_;
#endif
    int unknown_650_;
    void* unknown_654_;
    char* unknown_658_;
    int unknown_65c_;
    int unknown_660_;
    unsigned char unknown_664_[4];
    int unknown_668_;
    int unknown_66c_;
    int unknown_670_;
    int unknown_674_[5];
    int unknown_688_[5];
    unsigned char unknown_69c_[5];
    char unknown_6a1_[8];
    unsigned char unknown_6a9_[5];
};

struct Struct_0201099c_3;
extern "C" int AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char* buffer, int entryIndex);
extern "C" void* __clear(void* arg0, int arg1);
extern "C" int func_02041d9c(char* arg0, int arg1);
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3* stringTable, int stringId);
extern "C" int AppendText_02042058(char* buffer, const char* text);
extern "C" int AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);

// USA: func_ov013_02185be0
extern "C" ARM void func_ov013_02185be0(Struct_ov013_021846a0_2* arg0, char* arg1) {
    char var0[0x20];
    int var1;

    if (arg0->unknown_648_ == 2) {
        AppendFrameTag_02041c08(arg1, arg0->unknown_660_, 9, 3, 6, 2);
    }
    AppendCursorTag_02041ea4(arg1, arg0->unknown_660_);

    for (var1 = 0; var1 < 2; var1++) {
        __clear(var0, 0x20);
        func_02041d9c(var0, 0xc);
        AppendText_02042058(var0, (const char*)FindStringInTable_020e0434((Struct_0201099c_3*)arg0->unknown_620_, (short)(var1 + 0xa)));
        AppendMenuEntry_02041b70(arg1, var1, var0);
        if (var1 < 1) {
            AppendText_02042058(arg1, (const char*)FindStringInTable_020e0434((Struct_0201099c_3*)arg0->unknown_620_, 0));
        }
    }
}
