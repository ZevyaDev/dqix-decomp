#include <globaldefs.h>

struct MenuLayoutTextEntryList_0207f524;
extern "C" void func_0207f7ac(struct MenuLayoutTextEntryList_0207f524*, int, int);

// USA: CapitalizeMenuLayoutText_020805f4
extern "C" ARM void CapitalizeMenuLayoutText_020805f4(void* menuLayout, int textId) {
    func_0207f7ac((struct MenuLayoutTextEntryList_0207f524*)((char*)menuLayout + 4), textId, 0x40);
}
