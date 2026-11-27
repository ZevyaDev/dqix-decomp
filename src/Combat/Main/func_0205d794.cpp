#include <globaldefs.h>

struct Struct_0205c570;
extern "C" int GetMenuCursorsIndex_0205c570(struct Struct_0205c570*);

// USA: GetCursorIndex_0205d794
extern "C" ARM int GetCursorIndex_0205d794(struct Struct_0205c570* windowManager) {
    return GetMenuCursorsIndex_0205c570(windowManager);
}
