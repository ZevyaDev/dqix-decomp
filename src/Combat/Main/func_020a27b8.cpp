#include <globaldefs.h>

// USA: DisableCameraTurning_020a27b8
extern "C" ARM void DisableCameraTurning_020a27b8(unsigned char* camera) {
    *(unsigned int*)(camera + 0x23c) = 0;
}
