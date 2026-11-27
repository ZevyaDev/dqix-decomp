#include <globaldefs.h>


// USA: GetProjectionMatrixStackLevel_020c5680
extern "C" ARM int GetProjectionMatrixStackLevel_020c5680(int* outLevel) {
    volatile unsigned int* geometryStatus = (volatile unsigned int*)0x4000600;
    if (*geometryStatus & 0x4000) return -1;
    *outLevel = (*geometryStatus & 0x2000) >> 13;
    return 0;
}
