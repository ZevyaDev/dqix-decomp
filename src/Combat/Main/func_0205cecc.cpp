#include <globaldefs.h>

struct Struct_0205bd20;
extern "C" int func_0205bd20(struct Struct_0205bd20* arg0, int arg1);
struct Struct_0205c570;
extern "C" int GetMenuCursorsIndex_0205c570(struct Struct_0205c570*);

// USA: GetChoiceListEntryTouchedAgain_0205cecc
extern "C" ARM int GetChoiceListEntryTouchedAgain_0205cecc(void* choiceList) {
    if (func_0205bd20(
            (struct Struct_0205bd20*)((char*)choiceList + 0x20), 1) == 0) {
        return -1;
    }
    return GetMenuCursorsIndex_0205c570((struct Struct_0205c570*)((char*)choiceList + 0x1c));
}
