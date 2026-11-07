#include <globaldefs.h>

// USA: SetCameraTarget_0202e5c8
extern "C" ARM void SetCameraTarget_0202e5c8(unsigned char* camera, int x, int y, int z) {
    *(int*)(camera + 0x10) = x;
    *(int*)(camera + 0x14) = y;
    *(int*)(camera + 0x18) = z;
}
