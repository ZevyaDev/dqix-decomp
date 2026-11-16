#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

// USA: func_0202ef04
extern "C" ARM void func_0202ef04(int* arg0, int* arg1) {
    *(Vector3i*)(arg0 + 1) = *(const Vector3i*)arg1;
}

void force_emission_of_vector3_copy_assignment_operator(Vector3fix* a)
{
    *a = *a;
}
