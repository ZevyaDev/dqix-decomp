#include <globaldefs.h>

struct Struct_0205c570;
extern "C" int GetMenuCursorsIndex_0205c570(struct Struct_0205c570* cursors);

// USA: GetChoiceListCursorIndex_0205cb64
extern "C" ARM int GetChoiceListCursorIndex_0205cb64(void* choiceList) {
    return GetMenuCursorsIndex_0205c570((struct Struct_0205c570*)((char*)choiceList + 0x1c));
}
