#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

extern "C" void SetCameraOrbit_0202e5d8(void* camera, int angle, int height, int distance);

// USA: SetCameraOrbitTarget_0202ec5c
extern "C" ARM void SetCameraOrbitTarget_0202ec5c(char* camera, int* target) {
    *(Vector3i*)(camera + 0x10) = *(Vector3i*)target;
    SetCameraOrbit_0202e5d8(camera, *(int*)(camera + 0x70), *(int*)(camera + 0x74), *(int*)(camera + 0x78));
}

void force_emission_of_vector3_copy_assignment_operator(Vector3fix* a)
{
    *a = *a;
}
