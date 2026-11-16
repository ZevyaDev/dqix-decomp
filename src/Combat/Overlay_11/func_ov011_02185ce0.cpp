#include <globaldefs.h>
#include "Graphics/OBJSpriteSet.h"

extern int data_ov023_021feb40;

// USA: func_ov011_02185ce0
extern "C" ARM void* func_ov011_02185ce0(void* arg0) {
    *(void**)arg0 = &data_ov023_021feb40;
    ((OBJSpriteSet*)((char*)arg0 + 0x24))->Reset();
    return arg0;
}
