#include <globaldefs.h>

// USA: GetMenuCallbacks_ov011_02184a30
extern "C" ARM void* GetMenuCallbacks_ov011_02184a30(void* menu, unsigned int* outCallbackCount) {
    *outCallbackCount = *(unsigned int*)((char*)menu + 0x1b8);
    return *(void**)((char*)menu + 0x1b4);
}
