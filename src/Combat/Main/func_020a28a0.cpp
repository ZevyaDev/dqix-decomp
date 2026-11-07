#include <globaldefs.h>

// USA: SetCameraFlags_020a28a0
extern "C" ARM void SetCameraFlags_020a28a0(unsigned char* camera, unsigned char flags) {
    camera[0x244] |= flags;
}
