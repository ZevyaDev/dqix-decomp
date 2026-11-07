#include <globaldefs.h>

// USA: GetCameraYaw_0202e7f0
extern "C" ARM int GetCameraYaw_0202e7f0(void* camera) {
    return *(int*)((char*)camera + 0x70);
}
