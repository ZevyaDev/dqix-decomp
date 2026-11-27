#include <globaldefs.h>

// USA: SetCameraClassFlags_0202e08c
extern "C" ARM void SetCameraClassFlags_0202e08c(unsigned int* camera, unsigned int flags) {
    *camera |= flags;
}
