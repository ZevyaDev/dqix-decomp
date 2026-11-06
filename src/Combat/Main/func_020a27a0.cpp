#include <globaldefs.h>

// USA: DisableCameraFollow_020a27a0
extern "C" ARM void DisableCameraFollow_020a27a0(void* camera) {
    *(int*)((char*)camera + 0x238) = 0;
}
