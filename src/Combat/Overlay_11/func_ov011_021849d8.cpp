#include <globaldefs.h>

// USA: GetMenuArchiveLoadTaskId_ov011_021849d8
extern "C" ARM int GetMenuArchiveLoadTaskId_ov011_021849d8(void* menu) {
    return *(int*)((char*)menu + 0x18c);
}
