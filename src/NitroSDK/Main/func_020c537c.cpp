#include <globaldefs.h>

extern "C" int func_020c5650(int* arg0);
extern "C" int func_020c5680(int* arg0);

// USA: ResetMatrixStacksToIdentity_020c537c
extern "C" ARM void ResetMatrixStacksToIdentity_020c537c(void) {
    int positionStackLevel;
    int projectionStackLevel;
    *(volatile unsigned int*)0x4000600 |= 0x8000;
    while (func_020c5650(&positionStackLevel) != 0) {}
    while (func_020c5680(&projectionStackLevel) != 0) {}
    *(volatile unsigned int*)0x4000440 = 3;
    *(volatile unsigned int*)0x4000454 = 0;
    *(volatile unsigned int*)0x4000440 = 0;
    if (projectionStackLevel != 0) *(volatile unsigned int*)0x4000448 = projectionStackLevel;
    *(volatile unsigned int*)0x4000454 = 0;
    *(volatile unsigned int*)0x4000440 = 2;
    *(volatile unsigned int*)0x4000448 = positionStackLevel;
    *(volatile unsigned int*)0x4000454 = 0;
}
