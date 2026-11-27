#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Graphics/OBJSpriteSet.h"

struct Sprite_02043368_2;

struct Struct_020e8cd0 {
    unsigned int unknown_0_[5];
};
extern Struct_020e8cd0 data_020e8cd0;

struct QuestDisplay_0208b8c4 {
    SafeAllocator* pAllocators_0_;
    char unknown_4_[0xb0];
    void* pMetatiles_b4_;
    char unknown_b8_[0x27];
    unsigned char isQuestList_df_;
};

// USA: AllocateQuestDisplay_0208b8c4
extern "C" ARM void AllocateQuestDisplay_0208b8c4(struct QuestDisplay_0208b8c4* display, SafeAllocator* allocator) {
    int i;

    display->pAllocators_0_ = (SafeAllocator*)allocator->Allocate(0x64);
    display->pMetatiles_b4_ = allocator->Allocate(0x78);

    for (i = 0; i < 3; i++) {
        ((OBJSpriteSet::Metatile*)((struct Sprite_02043368_2*)((char*)display->pMetatiles_b4_ + i * 0x28)))->Reset();
    }

    unsigned char isQuestList = display->isQuestList_df_;
    unsigned int lastBlockSize = 0x7000;
    if (isQuestList != 0) {
        lastBlockSize = 0;
    }
    Struct_020e8cd0 blockSizes;
    blockSizes = data_020e8cd0;
    blockSizes.unknown_0_[4] = lastBlockSize;

    for (i = 0; i < 5; i++) {
        display->pAllocators_0_[i].ResetAllocatorPointer();
        void* block = allocator->Allocate(blockSizes.unknown_0_[i]);
        display->pAllocators_0_[i].CreateTypeA(block, blockSizes.unknown_0_[i]);
    }
}
