#include <globaldefs.h>

struct MenuLayoutWindowEntryList_0207f0ac;
struct MenuLayoutTextEntryList_0207f524;

struct MenuLayoutWindowEntry_02080bac {
    short* pTextIds_0_;
    char unknown_4_[0x13 - 0x4];
    unsigned char textCount_13_;
};

extern "C" struct MenuLayoutWindowEntry_02080bac* FindMenuLayoutWindowEntry_0207f0ac(struct MenuLayoutWindowEntryList_0207f0ac* windowEntries, int windowId);
extern "C" void ClearMenuLayoutTextEntryFlags_0207f7cc(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId, int flags);

// USA: ShowMenuLayoutWindowTexts_02080bac
extern "C" ARM void ShowMenuLayoutWindowTexts_02080bac(void* menuLayout, int windowId) {
    struct MenuLayoutWindowEntry_02080bac* windowEntry;
    short i;
    windowEntry = FindMenuLayoutWindowEntry_0207f0ac((struct MenuLayoutWindowEntryList_0207f0ac*)((char*)menuLayout + 0xc), windowId);
    if (windowEntry == NULL) return;
    for (i = 0; i < windowEntry->textCount_13_; i++) {
        ClearMenuLayoutTextEntryFlags_0207f7cc((struct MenuLayoutTextEntryList_0207f524*)((char*)menuLayout + 4), windowEntry->pTextIds_0_[i], 1);
    }
}
