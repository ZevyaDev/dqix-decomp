#include <globaldefs.h>
#include "Graphics/OBJSpriteSet.h"

#if defined(jpn)
#define FLAG_FIELD_021E43F0 0x56c
#else
#define FLAG_FIELD_021E43F0 0x634
#endif

extern "C" void GetLayoutGroupFirstElementPosition_ov023_021e2bdc(void* layout, int groupId, short* outX, short* outY);

// USA: func_ov023_021e43f0
extern "C" ARM void func_ov023_021e43f0(void* arg0) {
    short var0, var1;
    void* var2 = *(void**)((char*)arg0 + 0xcc);
    GetLayoutGroupFirstElementPosition_ov023_021e2bdc((char*)arg0 + 0xd4, 0x1b, &var0, &var1);
    if (*(unsigned short*)((char*)arg0 + FLAG_FIELD_021E43F0) & 0x800) {
        var0++;
        var1++;
        *(unsigned short*)((char*)arg0 + FLAG_FIELD_021E43F0) &= ~0x800;
    }
    *(int*)((char*)var2 + 0x3c) = var0 << 12;
    *(int*)((char*)var2 + 0x40) = var1 << 12;
    *(unsigned char*)((char*)var2 + 0x4a) = 0x79;
    *(unsigned char*)((char*)var2 + 0x4e) = 2;
    ((OBJSpriteSet*)(*(void**)((char*)arg0 + 0xc8)))->DrawMetatile((OBJSpriteSet::Metatile*)((char*)var2 + 0x28));
}
