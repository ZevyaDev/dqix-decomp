#include <globaldefs.h>

// USA: GetCameraRoll_0202e88c
extern "C" ARM short GetCameraRoll_0202e88c(void* camera) {
    return *(short*)((char*)camera + 0x7c);
}
