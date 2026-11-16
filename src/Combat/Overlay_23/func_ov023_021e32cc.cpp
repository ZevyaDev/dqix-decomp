#include <globaldefs.h>
#include "Graphics/OBJSpriteSet.h"


// USA: func_ov023_021e32cc
extern "C" ARM void func_ov023_021e32cc(void* arg0, int arg1, int arg2) {
    char* var0 = *(char**)((char*)arg0 + 0xcc);
    *(int*)(var0 + 0x154) = arg1 << 12;
    *(int*)(var0 + 0x158) = arg2 << 12;
    *(unsigned char*)(var0 + 0x162) = 0x72;
    *(unsigned char*)(var0 + 0x166) = 2;
    ((OBJSpriteSet*)(*(void**)((char*)arg0 + 0xc8)))->DrawMetatile((OBJSpriteSet::Metatile*)(var0 + 0x140));
}
