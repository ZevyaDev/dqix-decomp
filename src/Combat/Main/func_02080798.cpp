#include <globaldefs.h>

struct MenuLayoutTextEntryList_0207f524;

struct MenuLayoutTextEntry_02080798 {
    char unknown_0_[0x14];
    unsigned char unknown_14_;
};

extern "C" struct MenuLayoutTextEntry_02080798* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId);

// USA: SetMenuLayoutTextAlignment_02080798
extern "C" ARM void SetMenuLayoutTextAlignment_02080798(void* menuLayout, int textId, int alignment) {
    struct MenuLayoutTextEntry_02080798* textEntry = FindMenuLayoutTextEntry_0207f6ac((struct MenuLayoutTextEntryList_0207f524*)((char*)menuLayout + 4), textId);
    if (textEntry != NULL) {
        textEntry->unknown_14_ = (textEntry->unknown_14_ & ~3) | (alignment & 3);
    }
}
