#include <globaldefs.h>


extern "C" int Memcpy16Bit_020ca3b8(int, int, int);

// USA: Set3DEdgeColors_020c555c
extern "C" ARM int Set3DEdgeColors_020c555c(int edgeColors) {
    return Memcpy16Bit_020ca3b8(edgeColors, 0x4000330, 0x10);
}
