#include <globaldefs.h>


// USA: GetPositionMatrixStackLevel_020c5650
extern "C" ARM int GetPositionMatrixStackLevel_020c5650(int* outLevel) {
    volatile unsigned int* geometryStatus = (volatile unsigned int*)0x4000600;
    if (*geometryStatus & 0x4000) return -1;
    *outLevel = (*geometryStatus & 0x1f00) >> 8;
    return 0;
}
