#include <globaldefs.h>

extern "C" void SetCameraOrbit_0202e5d8(void*, int, int, int);

// USA: SetCameraOrbitFromArray_0202e694
extern "C" ARM void SetCameraOrbitFromArray_0202e694(void* camera, int* orbit) {
    SetCameraOrbit_0202e5d8(camera, orbit[0], orbit[1], orbit[2]);
}
