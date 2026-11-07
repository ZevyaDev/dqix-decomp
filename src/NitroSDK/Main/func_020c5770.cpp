#include <globaldefs.h>

extern "C" void Mat4x4_WriteProjectionUnknown(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, void* arg7);
extern "C" void func_020c516c(const void* arg0);

// USA: SetOrthographicProjection_020c5770
extern "C" ARM void SetOrthographicProjection_020c5770(int top, int bottom, int left, int right, int nearPlane, int farPlane, int arg6, int isLoadedAsProjection, void* projectionMatrix) {
    int localMatrix[16];
    void* matrix = projectionMatrix ? projectionMatrix : localMatrix;
    Mat4x4_WriteProjectionUnknown(top, bottom, left, right, nearPlane, farPlane, arg6, matrix);
    if (isLoadedAsProjection == 0) return;
    *(volatile unsigned int*)0x4000440 = 0;
    func_020c516c(matrix);
}
