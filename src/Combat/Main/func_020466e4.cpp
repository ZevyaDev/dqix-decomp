#include <globaldefs.h>

// USA: SetGlobalFlags_020466e4
extern "C" ARM void SetGlobalFlags_020466e4(unsigned int* globalFlags, unsigned int mask) {
    *globalFlags |= mask;
}
