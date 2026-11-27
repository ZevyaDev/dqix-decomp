#include <globaldefs.h>

struct MenuLayoutTextEntryList_0207f524;
struct StringList_02072a68_2;

struct Struct_02081010 {
    char unknown_0_[0xe];
    short unknown_e_;
};

extern "C" struct Struct_02081010* FindMenuLayoutTextEntry_0207f6ac(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId);
extern "C" void* FindStringInList_02072a68(struct StringList_02072a68_2* stringList, int stringId);

// USA: FindMenuLayoutTextStringIdString_02081010
extern "C" ARM void* FindMenuLayoutTextStringIdString_02081010(void* menuLayout, int textId) {
    struct Struct_02081010* textEntry = FindMenuLayoutTextEntry_0207f6ac((struct MenuLayoutTextEntryList_0207f524*)((char*)menuLayout + 0x4), textId);
    if (textEntry == NULL) {
        return NULL;
    }
    return FindStringInList_02072a68(*(struct StringList_02072a68_2**)menuLayout, textEntry->unknown_e_);
}
