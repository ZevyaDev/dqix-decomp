#include <globaldefs.h>

struct MenuLayoutTextEntryList_0207f524;

struct Struct_0207f7cc {
    char unknown_0_[0x2a];
    unsigned char unknown_2a_;
};

extern "C" struct Struct_0207f7cc* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId);

// USA: ClearMenuLayoutTextEntryFlags_0207f7cc
extern "C" ARM void ClearMenuLayoutTextEntryFlags_0207f7cc(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId, int flags) {
    struct Struct_0207f7cc* entry = FindMenuLayoutTextEntry_0207f6ac(textEntries, textId);
    if (entry != NULL) {
        entry->unknown_2a_ &= ~flags;
    }
}
