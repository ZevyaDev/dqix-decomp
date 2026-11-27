#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_02040258;
extern "C" ARM void func_02040258(struct Struct_02040258* arg0);

struct NPCSpriteCache_0203d028_6 {
    unsigned int slotCount_0_;
    unsigned char loadCount_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_[2];
    void* pSlots_8_;
};

// USA: InitNPCSpriteCache_020401fc
extern "C" ARM void InitNPCSpriteCache_020401fc(struct NPCSpriteCache_0203d028_6* spriteCache, unsigned int slotCount, SafeAllocator* allocator) {
    unsigned int i;
    spriteCache->loadCount_4_ = 0;
    spriteCache->slotCount_0_ = slotCount;
    spriteCache->unknown_5_ = 0;
    spriteCache->pSlots_8_ = allocator->Allocate(spriteCache->slotCount_0_ * 0x3c);
    for (i = 0; i < spriteCache->slotCount_0_; i++) {
        func_02040258((struct Struct_02040258*)((char*)spriteCache->pSlots_8_ + i * 0x3c));
    }
}
