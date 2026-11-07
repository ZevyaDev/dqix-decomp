#include <globaldefs.h>

struct MenuLayoutTextEntry_0207f6ac {
    char unknown_0_[4];
    short unknown_4_;
    char unknown_6_[0x30 - 0x6];
};

struct MenuLayoutTextEntryList_0207f524 {
    struct MenuLayoutTextEntry_0207f6ac* pEntries_0_;
    short count_4_;
};

static inline struct MenuLayoutTextEntry_0207f6ac* inline_0207f6ac(struct MenuLayoutTextEntryList_0207f524* arg0, unsigned int arg1) {
    return &arg0->pEntries_0_[arg1];
}

// USA: FindMenuLayoutTextEntry_0207f6ac
extern "C" ARM struct MenuLayoutTextEntry_0207f6ac* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId) {
    short i;
    struct MenuLayoutTextEntry_0207f6ac* textEntry;
    if (textId < 0) {
        return NULL;
    }
    for (i = 0; i < textEntries->count_4_; i++) {
        textEntry = inline_0207f6ac(textEntries, i);
        if (textId == textEntry->unknown_4_) {
            return textEntry;
        }
    }
    return NULL;
}
