#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov002_0215f644_7166 = 0x1ac6, Enum_ov002_0215f644_32 = 0x8 };
#else
enum { Enum_ov002_0215f644_7166 = 0x1bfe, Enum_ov002_0215f644_32 = 0x20 };
#endif

struct Struct_0201099c_3;
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3* stringTable, int stringId);
extern "C" int AppendText_02042058(char* buffer, const char* text);
extern "C" void func_ov002_02156080(void* arg0, short* arg1, short* arg2);

struct Struct_ov002_0215f644 {
    short unknown_0_;
    short unknown_2_[9];
};

// USA: func_ov002_0215f644
extern "C" ARM void func_ov002_0215f644(void* arg0, char* arg1, int) {
    if (arg1 == NULL) {
        return;
    }
    struct Struct_ov002_0215f644 var0;
    func_ov002_02156080(arg0, var0.unknown_2_, &var0.unknown_0_);
    int var1 = *(short*)((char*)arg0 + Enum_ov002_0215f644_7166);
    short var2 = var0.unknown_2_[var1];
    int var3 = (short)(var2 + 0xfb4);
    int var4 = FindStringInTable_020e0434((struct Struct_0201099c_3*)((char*)arg0 + Enum_ov002_0215f644_32), var3);
    AppendText_02042058(arg1, (const char*)var4);
}
