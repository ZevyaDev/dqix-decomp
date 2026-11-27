#include <globaldefs.h>

extern "C" void func_020c6938(const void* src, volatile void* fifo);

// USA: LoadMatrix4x4_020c516c
extern "C" ARM void LoadMatrix4x4_020c516c(const void* matrix) {
    *(volatile unsigned int*)0x4000400 = 0x16;
    func_020c6938(matrix, (volatile void*)0x4000400);
}
