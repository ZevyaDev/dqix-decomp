#include <globaldefs.h>

// USA: GetCameraFieldOfView_0202e9ec
extern "C" ARM int GetCameraFieldOfView_0202e9ec(void* camera) {
    return *(int*)((char*)camera + 0x58);
}
