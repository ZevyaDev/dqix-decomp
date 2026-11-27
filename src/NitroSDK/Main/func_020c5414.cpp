#include <globaldefs.h>

extern "C" int GetPositionMatrixStackLevel_020c5650(int* outLevel);
extern "C" int GetProjectionMatrixStackLevel_020c5680(int* outLevel);

// USA: ResetMatrixStacks_020c5414
extern "C" ARM void ResetMatrixStacks_020c5414(void) {
    int positionStackLevel;
    int projectionStackLevel;
    *(volatile unsigned int*)0x4000600 |= 0x8000;
    while (GetPositionMatrixStackLevel_020c5650(&positionStackLevel) != 0) {}
    while (GetProjectionMatrixStackLevel_020c5680(&projectionStackLevel) != 0) {}
    *(volatile unsigned int*)0x4000440 = 3;
    *(volatile unsigned int*)0x4000454 = 0;
    *(volatile unsigned int*)0x4000440 = 0;
    if (projectionStackLevel != 0) *(volatile unsigned int*)0x4000448 = projectionStackLevel;
    *(volatile unsigned int*)0x4000440 = 2;
    *(volatile unsigned int*)0x4000448 = positionStackLevel;
    *(volatile unsigned int*)0x4000454 = 0;
}
