#include <globaldefs.h>

struct MenuLayoutWindowEntry_0207f0ac_2 {
    char unknown_0_[8];
    short unknown_8_;
    char unknown_a_[0x18 - 0xa];
};

struct MenuLayoutWindowEntryList_0207f0ac {
    struct MenuLayoutWindowEntry_0207f0ac_2* pEntries_0_;
    short count_4_;
};

static inline struct MenuLayoutWindowEntry_0207f0ac_2* inline_0207f0ac(struct MenuLayoutWindowEntryList_0207f0ac* arg0, unsigned int arg1) {
    return &arg0->pEntries_0_[arg1];
}

// USA: FindMenuLayoutWindowEntry_0207f0ac
extern "C" ARM struct MenuLayoutWindowEntry_0207f0ac_2* FindMenuLayoutWindowEntry_0207f0ac(struct MenuLayoutWindowEntryList_0207f0ac* windowEntries, int windowId) {
    short i;
    struct MenuLayoutWindowEntry_0207f0ac_2* windowEntry;
    if (windowId < 0) {
        return NULL;
    }
    for (i = 0; i < windowEntries->count_4_; i++) {
        windowEntry = inline_0207f0ac(windowEntries, i);
        if (windowId == windowEntry->unknown_8_) {
            return windowEntry;
        }
    }
    return NULL;
}
