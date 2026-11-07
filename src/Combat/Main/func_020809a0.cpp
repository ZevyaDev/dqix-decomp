#include <globaldefs.h>

struct Struct_020809a0_2 {
    char unknown_0_[0xa];
    short unknown_a_;
    short unknown_c_;
    char unknown_e_[0x30 - 0xe];
};

struct MenuLayoutTextEntryList_0207f524 {
    struct Struct_020809a0_2* pEntries_0_;
    short count_4_;
};

extern "C" struct Struct_020809a0_2* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId);

struct Struct_020809a0 {
    char unknown_0_[4];
    struct MenuLayoutTextEntryList_0207f524 unknown_4_;
};

// USA: func_020809a0
extern "C" ARM void func_020809a0(struct Struct_020809a0* arg0, int arg1, short arg2, short arg3) {
    struct Struct_020809a0_2* var0 = FindMenuLayoutTextEntry_0207f6ac(&arg0->unknown_4_, arg1);
    if (var0 != NULL) {
        var0->unknown_a_ = arg2;
        var0->unknown_c_ = arg3;
    }
}
