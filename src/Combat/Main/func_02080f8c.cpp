#include <globaldefs.h>

struct MenuLayoutTextEntry_02080f8c_2 { int value_0_; };
struct MenuLayoutTextEntryList_0207f524 { struct MenuLayoutTextEntry_02080f8c_2* pEntries_0_; short count_4_; };
extern "C" struct MenuLayoutTextEntry_02080f8c_2* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId);

struct MenuLayout_02080f8c { char unknown_0_[4]; struct MenuLayoutTextEntryList_0207f524 textEntries_4_; };

// USA: SetMenuLayoutTextString_02080f8c
extern "C" ARM void SetMenuLayoutTextString_02080f8c(struct MenuLayout_02080f8c* menuLayout, int textId, int text) {
    struct MenuLayoutTextEntry_02080f8c_2* textEntry = FindMenuLayoutTextEntry_0207f6ac(&menuLayout->textEntries_4_, textId);
    if (textEntry != NULL) {
        textEntry->value_0_ = text;
    }
}
