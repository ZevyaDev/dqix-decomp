#include <globaldefs.h>

// USA: EnableCameraFollow_020a2794
extern "C" ARM void EnableCameraFollow_020a2794(void* camera) {
    *(int*)((char*)camera + 0x238) = 1;
}
