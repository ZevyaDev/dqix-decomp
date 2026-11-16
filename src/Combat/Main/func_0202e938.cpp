#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

// USA: func_0202e938
extern "C" ARM void func_0202e938(void* arg0, int* arg1) {
    *(Vector3i*)((char*)arg0 + 0x10) = *(const Vector3i*)arg1;
}

void force_emission_of_vector3_copy_assignment_operator(Vector3fix* a)
{
    *a = *a;
}
