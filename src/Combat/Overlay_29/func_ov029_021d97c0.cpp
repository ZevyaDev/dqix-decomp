#include <globaldefs.h>

// USA: func_ov029_021d97c0
extern "C" ARM asm void func_ov029_021d97c0(void* arg0, unsigned int arg1) {
    mov r12, #0
    add r1, r1, r0
    bic r0, r0, #31
@1:
    mcr p15, 0, r12, c7, c10, 4
    mcr p15, 0, r0, c7, c14, 1
    mcr p15, 0, r0, c7, c5, 1
    add r0, r0, #32
    cmp r0, r1
    blt @1
    bx lr
}
