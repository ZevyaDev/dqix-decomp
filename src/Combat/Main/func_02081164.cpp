#include <globaldefs.h>

struct MenuLayoutWindowEntryList_0207f0ac;

struct MenuLayoutWindowEntry_02081164_2 {
    char unknown_0_[0x15];
    unsigned char flags_15_;
};

extern "C" struct MenuLayoutWindowEntry_02081164_2* FindMenuLayoutWindowEntry_0207f0ac(struct MenuLayoutWindowEntryList_0207f0ac* windowEntries, int windowId);

struct MenuLayout_02081164 {
    char unknown_0_[0xc];
};

// USA: SetMenuLayoutWindowFrameless_02081164
extern "C" ARM void SetMenuLayoutWindowFrameless_02081164(struct MenuLayout_02081164* menuLayout, int windowId, int isFrameless) {
    struct MenuLayoutWindowEntry_02081164_2* windowEntry = FindMenuLayoutWindowEntry_0207f0ac((struct MenuLayoutWindowEntryList_0207f0ac*)((char*)menuLayout + 0xc), windowId);
    if (windowEntry == NULL) {
        return;
    }
    if (isFrameless) {
        windowEntry->flags_15_ |= 0x2;
    } else {
        windowEntry->flags_15_ &= ~0x2;
    }
}
