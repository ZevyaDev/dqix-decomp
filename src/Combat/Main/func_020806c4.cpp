#include <globaldefs.h>

struct MenuLayoutTextEntryList_0207f524;
extern "C" void ClearMenuLayoutTextEntryFlags_0207f7cc(struct MenuLayoutTextEntryList_0207f524* textEntries, int textId, int flags);

// USA: func_020806c4
extern "C" ARM void func_020806c4(void* arg0, int arg1) {
    ClearMenuLayoutTextEntryFlags_0207f7cc((struct MenuLayoutTextEntryList_0207f524*)((char*)arg0 + 4), arg1, 2);
}
