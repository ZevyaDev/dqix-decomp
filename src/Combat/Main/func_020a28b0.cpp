#include <globaldefs.h>

// USA: ClearCameraFlags_020a28b0
extern "C" ARM void ClearCameraFlags_020a28b0(unsigned char* camera, int flags) {
    camera[0x244] &= ~flags;
}
