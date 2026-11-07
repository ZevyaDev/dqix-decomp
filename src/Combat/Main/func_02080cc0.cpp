#include <globaldefs.h>

struct Struct_02080cc0_2 { char unknown_0_[0x13]; unsigned char unknown_13_; };
struct MenuLayoutTextEntryList_0207f524 { struct Struct_02080cc0_2* pEntries_0_; short count_4_; };
extern "C" struct Struct_02080cc0_2* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId);

struct Struct_02080cc0 { char unknown_0_[4]; struct MenuLayoutTextEntryList_0207f524 unknown_4_; };

// USA: func_02080cc0
extern "C" ARM void func_02080cc0(struct Struct_02080cc0* arg0, int arg1, int arg2) {
    struct Struct_02080cc0_2* var0 = FindMenuLayoutTextEntry_0207f6ac(&arg0->unknown_4_, arg1);
    if (var0 != NULL) {
        var0->unknown_13_ = (var0->unknown_13_ & ~0xf0) | ((arg2 & 0xf) << 4);
    }
}
