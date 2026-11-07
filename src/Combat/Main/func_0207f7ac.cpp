#include <globaldefs.h>

struct MenuLayoutTextEntryList_0207f524;

struct Struct_0207f7ac {
    char unknown_0_[0x2a];
    unsigned char unknown_2a_;
};

extern "C" struct Struct_0207f7ac* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId);

// USA: func_0207f7ac
extern "C" ARM void func_0207f7ac(struct MenuLayoutTextEntryList_0207f524* arg0, int arg1, int arg2) {
    struct Struct_0207f7ac* var0 = FindMenuLayoutTextEntry_0207f6ac(arg0, arg1);
    if (var0 != NULL) {
        var0->unknown_2a_ |= arg2;
    }
}
