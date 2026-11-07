#include <globaldefs.h>

struct MenuLayoutTextEntryList_0207f524;
struct StringList_02072a68_2;

struct Struct_02080fe0 {
    void* unknown_0_;
};

extern "C" struct Struct_02080fe0* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId);
extern "C" void* FindStringInList_02072a68(struct StringList_02072a68_2* stringList, int stringId);

// USA: func_02080fe0
extern "C" ARM void func_02080fe0(void* arg0, int arg1, int arg2) {
    struct Struct_02080fe0* var0 = FindMenuLayoutTextEntry_0207f6ac((struct MenuLayoutTextEntryList_0207f524*)((char*)arg0 + 0x4), arg1);
    if (var0 == NULL) {
        return;
    }
    var0->unknown_0_ = FindStringInList_02072a68(*(struct StringList_02072a68_2**)arg0, arg2);
}
