#include <globaldefs.h>

struct MenuLayoutTextEntryList_0207f524;

struct Struct_02080798 {
    char unknown_0_[0x14];
    unsigned char unknown_14_;
};

extern "C" struct Struct_02080798* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId);

// USA: func_02080798
extern "C" ARM void func_02080798(void* arg0, int arg1, int arg2) {
    struct Struct_02080798* var0 = FindMenuLayoutTextEntry_0207f6ac((struct MenuLayoutTextEntryList_0207f524*)((char*)arg0 + 4), arg1);
    if (var0 != NULL) {
        var0->unknown_14_ = (var0->unknown_14_ & ~3) | (arg2 & 3);
    }
}
