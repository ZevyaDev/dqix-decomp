#include <globaldefs.h>

#if defined(jpn)
#define func_020c5188 func_020c6c54
#endif

extern "C" void Mat4x3_WriteViewMatrix(int, int, int, void*);
extern "C" void func_020c5188(int arg0);

// USA: WriteAndLoadViewMatrix_020c57d4
extern "C" ARM void WriteAndLoadViewMatrix_020c57d4(int eyePosition, int upDirection, int targetPosition, int isLoadedAsPositionVector, void* outMatrix) {
    unsigned char localMatrix[0x30];
    void* viewMatrix = outMatrix ? outMatrix : localMatrix;
    Mat4x3_WriteViewMatrix(eyePosition, upDirection, targetPosition, viewMatrix);
    if (!isLoadedAsPositionVector) return;
    *(volatile int*)0x4000440 = 2;
    func_020c5188((int)viewMatrix);
}
