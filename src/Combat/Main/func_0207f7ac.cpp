#include <globaldefs.h>

struct MenuLayoutTextEntryList_0207f524;

struct Struct_0207f7ac {
    char unknown_0_[0x2a];
    unsigned char unknown_2a_;
};

extern "C" struct Struct_0207f7ac* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId);

// USA: SetMenuLayoutTextEntryFlags_0207f7ac
extern "C" ARM void SetMenuLayoutTextEntryFlags_0207f7ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId, int flags) {
    struct Struct_0207f7ac* entry = FindMenuLayoutTextEntry_0207f6ac(textEntries, textId);
    if (entry != NULL) {
        entry->unknown_2a_ |= flags;
    }
}
