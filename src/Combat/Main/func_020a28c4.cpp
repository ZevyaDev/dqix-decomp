#include <globaldefs.h>

// USA: EnableZoneCameraTurning_020a28c4
extern "C" ARM void EnableZoneCameraTurning_020a28c4(unsigned char* camera) {
    *(unsigned int*)(camera + 0x240) = 1;
}
