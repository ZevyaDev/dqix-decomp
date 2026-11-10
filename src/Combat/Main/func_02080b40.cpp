#include <globaldefs.h>

struct MenuLayoutTextEntryList_0207f524;
extern "C" int func_0207f7cc(struct MenuLayoutTextEntryList_0207f524*, int, int);

// USA: ShowMenuLayoutText_02080b40
extern "C" ARM int ShowMenuLayoutText_02080b40(void* menuLayout, int textId) {
    return func_0207f7cc((struct MenuLayoutTextEntryList_0207f524*)((char*)menuLayout + 4), textId, 1);
}
