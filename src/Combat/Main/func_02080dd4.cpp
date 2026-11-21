#include <globaldefs.h>

struct MenuLayoutTextEntry_0207f6ac {
    unsigned char unknown_0_[0x2a];
    unsigned char unknown_2a_;
    unsigned char unknown_2b_[5];
};
struct MenuLayoutTextEntryList_0207f524 {
    MenuLayoutTextEntry_0207f6ac* pEntries_0_;
    short count_4_;
};
struct MenuLayout_02080dd4 {
    void* unknown_0_;
    MenuLayoutTextEntryList_0207f524 textEntries_4_;
};

extern "C" int func_02080e40(void* arg0, int arg1, int arg2, int arg3);
extern "C" struct MenuLayoutTextEntry_0207f6ac* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId);

extern "C" void func_02080558(void* arg0, int arg1, int arg2, int arg3, unsigned char arg4);

// USA: HighlightTouchedMenuLayoutText_02080dd4
extern "C" ARM int HighlightTouchedMenuLayoutText_02080dd4(void* layout, int windowId, int x, int y,
                                  unsigned char* isTouchedAgain, unsigned char isRedrawn) {
    MenuLayout_02080dd4* menuLayout = static_cast<MenuLayout_02080dd4*>(layout);
    int textId;
    struct MenuLayoutTextEntry_0207f6ac* textEntry;
    textId = func_02080e40(menuLayout, windowId, x, y);
    if (textId == -1) {
        return -1;
    }
    *isTouchedAgain = 0;
    textEntry = FindMenuLayoutTextEntry_0207f6ac(&menuLayout->textEntries_4_, textId);
    if (textEntry->unknown_2a_ & 4) {
        *isTouchedAgain = 1;
    }
    func_02080558(menuLayout, windowId, textId, 1, isRedrawn);
    return textId;
}
