#include <globaldefs.h>

struct MenuLayoutWindowEntryList_0207f0ac;
struct MenuLayoutTextEntryList_0207f524;

struct Struct_02080b54 {
    short* unknown_0_;
    char unknown_4_[0x13 - 0x4];
    unsigned char unknown_13_;
};

extern "C" struct Struct_02080b54* FindMenuLayoutWindowEntry_0207f0ac(struct MenuLayoutWindowEntryList_0207f0ac* windowEntries, int windowId);
extern "C" void func_0207f7ac(struct MenuLayoutTextEntryList_0207f524* arg0, int arg1, int arg2);

// USA: func_02080b54
extern "C" ARM void func_02080b54(void* arg0, int arg1) {
    struct Struct_02080b54* var0;
    short var1;
    var0 = FindMenuLayoutWindowEntry_0207f0ac((struct MenuLayoutWindowEntryList_0207f0ac*)((char*)arg0 + 0xc), arg1);
    if (var0 == NULL) return;
    for (var1 = 0; var1 < var0->unknown_13_; var1++) {
        func_0207f7ac((struct MenuLayoutTextEntryList_0207f524*)((char*)arg0 + 4), var0->unknown_0_[var1], 1);
    }
}
