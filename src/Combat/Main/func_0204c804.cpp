#include <globaldefs.h>
#include "std_library_functions.h"

// USA: CloseTextWindow_0204c804
extern "C" ARM void CloseTextWindow_0204c804(void* textWindow) {
    unsigned char* textWindowBytes = (unsigned char*)textWindow;
    *(int*)(textWindowBytes + 0x9c) = 0;
    *(short*)(textWindowBytes + 0xac) = 0;
    *(short*)(textWindowBytes + 0xae) = 0;
    *(short*)(textWindowBytes + 0xa8) = 0;
    *(short*)(textWindowBytes + 0xaa) = 0;
    *(short*)(textWindowBytes + 0xb0) = 4;
    *(short*)(textWindowBytes + 0xb2) = 4;
    *(short*)(textWindowBytes + 0xb8) = 0;
    *(short*)(textWindowBytes + 0xba) = 0;
    *(short*)(textWindowBytes + 0xc0) = 0;
    textWindowBytes[0xc5] &= ~0x8;
    textWindowBytes[0xd8] &= ~0x1;
    textWindowBytes[0xd8] &= ~0x2;
#if !defined(jpn)
    textWindowBytes[0xd8] &= ~0x4;
#endif
    textWindowBytes[0xc4] = 0xff;
    textWindowBytes[0xc5] = 0;
    memset(textWindowBytes + 0xdb, 0, 4);
}
