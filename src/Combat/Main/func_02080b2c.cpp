#include <globaldefs.h>

struct MenuLayoutTextEntryList_0207f524;
extern "C" int func_0207f7ac(struct MenuLayoutTextEntryList_0207f524*, int, int);

// USA: HideMenuLayoutText_02080b2c
extern "C" ARM int HideMenuLayoutText_02080b2c(void* menuLayout, int textId) {
    return func_0207f7ac((struct MenuLayoutTextEntryList_0207f524*)((char*)menuLayout + 4), textId, 1);
}
