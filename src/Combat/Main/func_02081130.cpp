#include <globaldefs.h>

struct MenuLayoutWindowEntry_02081130 {
    char unknown_0_[0x15];
    unsigned char flags_15_;
    char unknown_16_[0x18 - 0x16];
};

struct MenuLayoutWindowEntryList_0207f0ac;

extern "C" struct MenuLayoutWindowEntry_02081130* FindMenuLayoutWindowEntry_0207f0ac(struct MenuLayoutWindowEntryList_0207f0ac*, int);

// USA: SetMenuLayoutWindowPageArrows_02081130
extern "C" ARM void SetMenuLayoutWindowPageArrows_02081130(void* menuLayout, int windowId, int hasPageArrows) {
    struct MenuLayoutWindowEntry_02081130* windowEntry = FindMenuLayoutWindowEntry_0207f0ac((struct MenuLayoutWindowEntryList_0207f0ac*)((char*)menuLayout + 0xc), windowId);
    if (windowEntry == NULL) {
        return;
    }
    if (hasPageArrows != 0) {
        windowEntry->flags_15_ |= 1;
    } else {
        windowEntry->flags_15_ &= ~1;
    }
}
