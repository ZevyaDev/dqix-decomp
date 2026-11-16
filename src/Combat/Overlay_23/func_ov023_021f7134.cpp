#include <globaldefs.h>
#include "Graphics/SPRSprite.h"


// USA: func_ov023_021f7134
extern "C" ARM void func_ov023_021f7134(char* arg0) {
    if (*(unsigned char*)(arg0 + 0xc) & 8) return;
    ((SPRSprite*)(arg0 + 0x20))->DrawTextureScaleTranslate(0, 1);
}
