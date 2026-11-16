#include <globaldefs.h>

#if defined(jpn)
#define func_020c555c func_020c7028
#endif


extern "C" int Memcpy16Bit_020ca3b8(int, int, int);

// USA: func_020c555c
extern "C" ARM int func_020c555c(int edgeColors) {
    return Memcpy16Bit_020ca3b8(edgeColors, 0x4000330, 0x10);
}
