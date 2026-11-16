#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Graphics/SPRSprite.h"
#include "Graphics/TextureArena.h"

extern "C" void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" void* func_ov011_0218466c(void* arg0, unsigned short arg1);

struct Struct_ov023_021f7290 { char unknown_0_[8]; unsigned short unknown_8_; unsigned short unknown_a_; };

// USA: func_ov023_021f7290
extern "C" ARM void func_ov023_021f7290(struct Struct_ov023_021f7290* arg0, void* arg1, int arg2, int arg3) {
    if (arg2 == 0 || arg3 == 0) return;
    void* var0 = func_ov011_021845f8(arg1, arg0->unknown_8_);
    void* var1 = func_ov011_0218466c(arg1, arg0->unknown_a_);
    if (var0 == NULL || var1 == NULL) return;
    SafeAllocator* var2 = (SafeAllocator*)((char*)var0 + 4);
    var2->GetSizeWithLargestBlockRemoved();
    ((TextureArena*)((char*)var1 + 4))->Restore();
    ((SPRSprite*)((char*)arg0 + 0x20))->Reset();
    ((SPRSprite*)((char*)arg0 + 0x20))->LoadFromSPR((const void*)(arg2), arg3, (SafeAllocator*)((int)((char*)var0 + 4)));
    ((TextureArena*)((char*)var1 + 4))->Save();
    var2->GetSizeWithLargestBlockRemoved();
}
