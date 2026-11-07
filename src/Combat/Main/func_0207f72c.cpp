#include <globaldefs.h>

struct MenuLayoutTextEntryList_0207f524 {
    void* pEntries_0_;
    short count_4_;
};

struct Struct_0207f72c;

union Struct_0207f72c_2 {
    short unknown_0_;
    struct Struct_0207f72c* unknown1_0_;
};

struct Struct_0207f72c {
    char unknown_0_[0x18];
    union Struct_0207f72c_2 unknown_18_[4];
};

extern "C" void* func_0207f700(unsigned char* arg0, short arg1);
extern "C" struct Struct_0207f72c* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId);

// USA: func_0207f72c
extern "C" ARM void func_0207f72c(struct MenuLayoutTextEntryList_0207f524* arg0) {
    short var0 = arg0->count_4_;
    short var1;
    for (var1 = 0; var1 < var0; var1++) {
        struct Struct_0207f72c* var2 = (struct Struct_0207f72c*)func_0207f700((unsigned char*)arg0, var1);
        if (var2 != NULL) {
            var2->unknown_18_[0].unknown1_0_ = FindMenuLayoutTextEntry_0207f6ac(arg0, var2->unknown_18_[0].unknown_0_);
            var2->unknown_18_[1].unknown1_0_ = FindMenuLayoutTextEntry_0207f6ac(arg0, var2->unknown_18_[1].unknown_0_);
            var2->unknown_18_[2].unknown1_0_ = FindMenuLayoutTextEntry_0207f6ac(arg0, var2->unknown_18_[2].unknown_0_);
            var2->unknown_18_[3].unknown1_0_ = FindMenuLayoutTextEntry_0207f6ac(arg0, var2->unknown_18_[3].unknown_0_);
        }
    }
}
