#include <globaldefs.h>

struct MenuLayoutWindowEntryList_0207f0ac;
struct MenuLayoutWindowEntry_0207f0ac_2;
extern "C" MenuLayoutWindowEntry_0207f0ac_2* FindMenuLayoutWindowEntry_0207f0ac(MenuLayoutWindowEntryList_0207f0ac* windowEntries, int windowId);

struct MenuLayoutTextEntryList_0207f524;
struct MenuLayoutTextEntry_0207f6ac;
extern "C" MenuLayoutTextEntry_0207f6ac* FindMenuLayoutTextEntry_0207f6ac(MenuLayoutTextEntryList_0207f524* textEntries, int textId);

struct MenuLayoutWindowEntry_02080468 {
    short* pTextIds_0_;
    char unknown_4_[0x13 - 4];
    unsigned char textCount_13_;
};

struct MenuLayoutTextEntry_02080468_2 {
    char unknown_0_[4];
    short textId_4_;
    char unknown_6_[0x18 - 6];
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
    char unknown_28_[0x2a - 0x28];
    unsigned char flags_2a_;
};

// USA: GetMenuLayoutWindowFirstSelectableTextId_02080468
extern "C" ARM short GetMenuLayoutWindowFirstSelectableTextId_02080468(void* menuLayout, int windowId) {
    short textId = -1;
    MenuLayoutWindowEntry_02080468* windowEntry = (MenuLayoutWindowEntry_02080468*)FindMenuLayoutWindowEntry_0207f0ac((MenuLayoutWindowEntryList_0207f0ac*)((char*)menuLayout + 0xc), windowId);
    if (windowEntry != NULL) {
        unsigned char i;
        for (i = 0; i < windowEntry->textCount_13_; i++) {
            textId = windowEntry->pTextIds_0_[i];
            MenuLayoutTextEntry_02080468_2* textEntry = (MenuLayoutTextEntry_02080468_2*)FindMenuLayoutTextEntry_0207f6ac((MenuLayoutTextEntryList_0207f524*)((char*)menuLayout + 4), textId);
            if (textEntry == NULL) continue;
            if (textEntry->flags_2a_ & 2) continue;
            if (textEntry->unknown_18_ == 0 && textEntry->unknown_1c_ == 0 && textEntry->unknown_20_ == 0 && textEntry->unknown_24_ == 0) continue;
            textId = textEntry->textId_4_;
            break;
        }
    }
    return textId;
}
