#include <globaldefs.h>

struct Struct_02080fc4_2 { int unknown_0_; };
struct MenuLayoutTextEntryList_0207f524 { struct Struct_02080fc4_2* pEntries_0_; short count_4_; };
extern "C" struct Struct_02080fc4_2* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId);

struct Struct_02080fc4 { char unknown_0_[4]; struct MenuLayoutTextEntryList_0207f524 unknown_4_; };

// USA: func_02080fc4
extern "C" ARM void func_02080fc4(struct Struct_02080fc4* arg0, int arg1, int arg2) {
    struct Struct_02080fc4_2* var0 = FindMenuLayoutTextEntry_0207f6ac(&arg0->unknown_4_, arg1);
    if (var0 != NULL) {
        var0->unknown_0_ = arg2;
    }
}
