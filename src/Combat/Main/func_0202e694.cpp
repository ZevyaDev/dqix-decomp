#include <globaldefs.h>

extern "C" void SetCameraOrbit_0202e5d8(void*, int, int, int);

// USA: SetCameraOrbitFromArray_0202e694
extern "C" ARM void SetCameraOrbitFromArray_0202e694(void* camera, int* arg1) {
    SetCameraOrbit_0202e5d8(camera, arg1[0], arg1[1], arg1[2]);
}
