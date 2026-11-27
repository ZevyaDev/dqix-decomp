#include <globaldefs.h>

struct MenuLayoutTextEntry_0207f6ac;
struct MenuLayoutTextEntryList_0207f524 { MenuLayoutTextEntry_0207f6ac* pEntries_0_; short count_4_; };
struct MenuLayout_020806b0 {
    void* unknown_0_;
    MenuLayoutTextEntryList_0207f524 textEntries_4_;
};
extern "C" void SetMenuLayoutTextEntryFlags_0207f7ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId, int flags);

// USA: SetMenuLayoutTextUnselectable_020806b0
extern "C" ARM void SetMenuLayoutTextUnselectable_020806b0(void* layout, int textId) {
    MenuLayout_020806b0* menuLayout = (MenuLayout_020806b0*)layout;
    SetMenuLayoutTextEntryFlags_0207f7ac(&menuLayout->textEntries_4_, textId, 2);
}
