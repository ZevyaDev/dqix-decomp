#include <globaldefs.h>

// USA: IsAsleep_020882f8
extern "C" ARM int IsAsleep_020882f8(unsigned char* currentStats) {
    return (*(int*)(currentStats + 0x14) & 0x10) != 0;
}
