#include <globaldefs.h>

// USA: SetObject3DRotation_0203db34
extern "C" ARM void SetObject3DRotation_0203db34(unsigned char* object, int x, int y, int z) {
    *(int*)(object + 0x50) = x;
    *(int*)(object + 0x54) = y;
    *(int*)(object + 0x58) = z;
}
