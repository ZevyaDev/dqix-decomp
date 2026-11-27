#include <globaldefs.h>

// USA: CountLeadingZeros_020c9a4c
extern "C" ARM unsigned int CountLeadingZeros_020c9a4c(unsigned int value) {
    asm {
        clz value, value
    }
    return value;
}
