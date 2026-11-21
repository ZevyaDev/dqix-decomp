#include <globaldefs.h>

// USA: SetMenuTaskSetupFunction_ov017_021b2bd0
extern "C" ARM void SetMenuTaskSetupFunction_ov017_021b2bd0(void* menuTask, int setupFunction, int overlayId) {
    *(int*)((char*)menuTask + 0x30) = setupFunction;
    *(int*)((char*)menuTask + 0x34) = overlayId;
}
