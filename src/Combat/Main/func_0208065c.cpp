#include <globaldefs.h>

struct MenuLayoutWindowEntry_0207f0ac_2 {
    short* unknown_0_;
    char unknown_4_[4];
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    char unknown_e_[5];
    unsigned char unknown_13_;
    char unknown_14_[4];
};
struct MenuLayoutTextEntry_0207f6ac;
struct MenuLayoutWindowEntryList_0207f0ac { MenuLayoutWindowEntry_0207f0ac_2* pEntries_0_; short count_4_; };
struct MenuLayoutTextEntryList_0207f524 { MenuLayoutTextEntry_0207f6ac* pEntries_0_; short count_4_; };
struct MenuLayout_0208065c {
    void* unknown_0_;
    MenuLayoutTextEntryList_0207f524 textEntries_4_;
    MenuLayoutWindowEntryList_0207f0ac windowEntries_c_;
};

extern "C" MenuLayoutWindowEntry_0207f0ac_2* FindMenuLayoutWindowEntry_0207f0ac(MenuLayoutWindowEntryList_0207f0ac* windowEntries, int windowId);
extern "C" void func_0207f7cc(struct MenuLayoutTextEntryList_0207f524* arg0, int arg1, int arg2);

// USA: SetMenuLayoutWindowTextsSelectable_0208065c
extern "C" ARM void SetMenuLayoutWindowTextsSelectable_0208065c(void* layout, int windowId) {
    MenuLayout_0208065c* menuLayout = (MenuLayout_0208065c*)layout;
    MenuLayoutWindowEntry_0207f0ac_2* windowEntry = FindMenuLayoutWindowEntry_0207f0ac(&menuLayout->windowEntries_c_, windowId);
    if (windowEntry == NULL) return;
    for (unsigned char i = 0; i < windowEntry->unknown_13_; i++) {
        func_0207f7cc(&menuLayout->textEntries_4_, windowEntry->unknown_0_[i], 2);
    }
}
