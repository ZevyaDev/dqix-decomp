#include <globaldefs.h>

#if defined(jpn)
struct Struct_02073bc4_2 { int unknown_0_; const char* unknown_4_; };
struct Struct_02073bc4 { Struct_02073bc4_2* unknown_0_; short unknown_4_; };

extern "C" int GetStringLength_020d2ff0(const char* string);
extern "C" int CompareBytes_02001aec(const char* left, const char* right, int count);

// JPN: func_02073bc4
extern "C" ARM short func_02073bc4(Struct_02073bc4* arg0, const char* arg1) {
    int var0 = GetStringLength_020d2ff0(arg1);
    for (int var1 = 0; var1 < arg0->unknown_4_; var1++) {
        const char* var2 = arg0->unknown_0_[var1].unknown_4_;
        if (CompareBytes_02001aec(var2, arg1, var0) == 0 && var0 == GetStringLength_020d2ff0(var2)) {
            return var1;
        }
    }
    return -1;
}
#endif
