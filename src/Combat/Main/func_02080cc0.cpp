#include <globaldefs.h>

struct MenuLayoutTextEntry_02080cc0_2 { char unknown_0_[0x13]; unsigned char unknown_13_; };
struct MenuLayoutTextEntryList_0207f524 { struct MenuLayoutTextEntry_02080cc0_2* pEntries_0_; short count_4_; };
extern "C" struct MenuLayoutTextEntry_02080cc0_2* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId);

struct MenuLayout_02080cc0 { char unknown_0_[4]; struct MenuLayoutTextEntryList_0207f524 unknown_4_; };

// USA: SetMenuLayoutTextColor_02080cc0
extern "C" ARM void SetMenuLayoutTextColor_02080cc0(struct MenuLayout_02080cc0* menuLayout, int textId, int color) {
    struct MenuLayoutTextEntry_02080cc0_2* textEntry = FindMenuLayoutTextEntry_0207f6ac(&menuLayout->unknown_4_, textId);
    if (textEntry != NULL) {
        textEntry->unknown_13_ = (textEntry->unknown_13_ & ~0xf0) | ((color & 0xf) << 4);
    }
}
