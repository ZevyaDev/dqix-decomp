#include <globaldefs.h>

// USA: SetBGScreenSize_0204b11c
extern "C" ARM void SetBGScreenSize_0204b11c(unsigned char* layer, int screenSize) {
    *(int*)(layer + 0x18) = screenSize;
    layer[0x1f] = 0;
}
