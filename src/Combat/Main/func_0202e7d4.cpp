#include <globaldefs.h>

// USA: GetCameraOrbit_0202e7d4
extern "C" ARM void GetCameraOrbit_0202e7d4(unsigned char* camera, int* yaw, int* height, int* distance) {
    *yaw = *(int*)(camera + 0x70);
    *height = *(int*)(camera + 0x74);
    *distance = *(int*)(camera + 0x78);
}
