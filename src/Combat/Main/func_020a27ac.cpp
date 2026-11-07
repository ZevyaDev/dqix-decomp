#include <globaldefs.h>

// USA: EnableCameraTurning_020a27ac
extern "C" ARM void EnableCameraTurning_020a27ac(void* camera) {
    *(int*)((char*)camera + 0x23c) = 1;
}
