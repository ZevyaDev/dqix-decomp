#include <globaldefs.h>

struct Struct_0207f0ac;
struct MenuLayoutTextEntryList_0207f524;

struct MenuLayoutWindowEntry_020804fc_2 {
    short* pTextIds_0_;
    char unknown_4_[0x13 - 0x4];
    unsigned char textCount_13_;
};

struct MenuLayoutTextEntry_020804fc {
    char unknown_0_[0x2a];
    unsigned char flags_2a_;
};

extern "C" struct MenuLayoutWindowEntry_020804fc_2* func_0207f0ac(struct Struct_0207f0ac* arg0, int arg1);
extern "C" struct MenuLayoutTextEntry_020804fc* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId);

// USA: ClearMenuLayoutWindowHighlights_020804fc
extern "C" ARM void ClearMenuLayoutWindowHighlights_020804fc(void* menuLayout, int windowId) {
    struct MenuLayoutWindowEntry_020804fc_2* windowEntry;
    unsigned char i;
    windowEntry = func_0207f0ac((struct Struct_0207f0ac*)((char*)menuLayout + 0xc), windowId);
    if (windowEntry == NULL) return;
    for (i = 0; i < windowEntry->textCount_13_; i++) {
        struct MenuLayoutTextEntry_020804fc* textEntry = FindMenuLayoutTextEntry_0207f6ac((struct MenuLayoutTextEntryList_0207f524*)((char*)menuLayout + 4), windowEntry->pTextIds_0_[i]);
        if (textEntry != NULL) {
            textEntry->flags_2a_ &= ~4;
        }
    }
}
