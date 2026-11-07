#include <globaldefs.h>

struct MenuLayoutTextEntry_02080fa8_2 { int value_0_; };
struct MenuLayoutTextEntryList_0207f524 { struct MenuLayoutTextEntry_02080fa8_2* pEntries_0_; short count_4_; };
extern "C" struct MenuLayoutTextEntry_02080fa8_2* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId);

struct MenuLayout_02080fa8 { char unknown_0_[4]; struct MenuLayoutTextEntryList_0207f524 textEntries_4_; };

// USA: SetMenuLayoutTextValue_02080fa8
extern "C" ARM void SetMenuLayoutTextValue_02080fa8(struct MenuLayout_02080fa8* menuLayout, int textId, int value) {
    struct MenuLayoutTextEntry_02080fa8_2* textEntry = FindMenuLayoutTextEntry_0207f6ac(&menuLayout->textEntries_4_, textId);
    if (textEntry != NULL) {
        textEntry->value_0_ = value;
    }
}
