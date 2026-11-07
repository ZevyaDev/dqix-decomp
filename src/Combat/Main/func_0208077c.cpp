#include <globaldefs.h>

struct MenuLayoutTextEntryList_0207f524;

struct Struct_0208077c {
    char unknown_0_[0x28];
    short unknown_28_;
};

extern "C" struct Struct_0208077c* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId);

// USA: func_0208077c
extern "C" ARM void func_0208077c(void* arg0, int arg1, short arg2) {
    struct Struct_0208077c* var0 = FindMenuLayoutTextEntry_0207f6ac((struct MenuLayoutTextEntryList_0207f524*)((char*)arg0 + 4), arg1);
    if (var0 != NULL) {
        var0->unknown_28_ = arg2;
    }
}
