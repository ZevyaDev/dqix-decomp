#include <globaldefs.h>

// USA: SetMenuCallbacks_ov011_02184a24
extern "C" ARM void SetMenuCallbacks_ov011_02184a24(void* menu, int callbacks, int callbackCount) {
    *(int*)((char*)menu + 0x1b4) = callbacks;
    *(int*)((char*)menu + 0x1b8) = callbackCount;
}
