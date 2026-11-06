#include <globaldefs.h>
#include "std_library_functions.h"

// USA: InitSpriteSet_0205a444
extern "C" ARM void InitSpriteSet_0205a444(char* spriteSet) {
    memset(spriteSet, 0, 0x24);
    memset(spriteSet + 0x24, 0, 0x14);
    *(int*)(spriteSet + 0x38) = 0;
    *(int*)(spriteSet + 0x40) = 0;
    *(int*)(spriteSet + 0x44) = 0;
    *(int*)(spriteSet + 0x48) = 0;
    *(short*)(spriteSet + 0x4c) = 0;
    *(short*)(spriteSet + 0x4e) = 0;
    *(int*)(spriteSet + 0x3c) = 0;
    *(char*)(spriteSet + 0x50) = 1;
}
