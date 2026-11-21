#include <globaldefs.h>

struct MenuLayoutTextEntryList_0207f524;
extern "C" void func_0207f7ac(struct MenuLayoutTextEntryList_0207f524*, int, int);

// USA: CenterMenuLayoutText_0208108c
extern "C" ARM void CenterMenuLayoutText_0208108c(void* menuLayout, int textId) {
    func_0207f7ac((struct MenuLayoutTextEntryList_0207f524*)((char*)menuLayout + 4), textId, 8);
}
