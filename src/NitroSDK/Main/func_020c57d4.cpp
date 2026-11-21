#include <globaldefs.h>

#if defined(jpn)
#define func_020c5188 func_020c6c54
#endif

extern "C" void Mat4x3_WriteViewMatrix(int, int, int, void*);
extern "C" void func_020c5188(int arg0);

// USA: WriteAndLoadViewMatrix_020c57d4
extern "C" ARM void WriteAndLoadViewMatrix_020c57d4(int eyePosition, int upDirection, int targetPosition, int arg3, void* outMatrix) {
    unsigned char var0[0x30];
    void* viewMatrix = outMatrix ? outMatrix : var0;
    Mat4x3_WriteViewMatrix(eyePosition, upDirection, targetPosition, viewMatrix);
    if (!arg3) return;
    *(volatile int*)0x4000440 = 2;
    func_020c5188((int)viewMatrix);
}
