#include <globaldefs.h>

// USA: GetCameraDistance_0202e800
extern "C" ARM int GetCameraDistance_0202e800(void* camera) {
    return *(int*)((char*)camera + 0x78);
}
