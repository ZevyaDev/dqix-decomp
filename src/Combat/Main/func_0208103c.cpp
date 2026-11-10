#include <globaldefs.h>

struct MenuLayoutTextEntry_0208103c {
    char unknown_0_[0xe];
    short stringId_e_;
    char unknown_10_[0x30 - 0x10];
};

struct MenuLayoutTextEntryList_0207f524;

extern "C" struct MenuLayoutTextEntry_0208103c* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524*, int);

// USA: SetMenuLayoutTextStringId_0208103c
extern "C" ARM void SetMenuLayoutTextStringId_0208103c(void* menuLayout, int textId, int stringId) {
    struct MenuLayoutTextEntry_0208103c* textEntry = FindMenuLayoutTextEntry_0207f6ac((struct MenuLayoutTextEntryList_0207f524*)((char*)menuLayout + 4), textId);
    if (textEntry != NULL) {
        textEntry->stringId_e_ = (short)stringId;
    }
}
