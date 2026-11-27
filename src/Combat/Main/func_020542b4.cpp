#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "Memory/SafeAllocator.h"

extern "C" ARM void func_020543ec(char* arg0, char* arg1);

extern unsigned int data_020e7c40[];

struct PartyMemberSlot_020542b4 {
    unsigned char unknown_0_[4];
    SafeAllocator allocators_4_[10];
};

// USA: InitPartyMemberSlotAllocators_020542b4
extern "C" ARM void InitPartyMemberSlotAllocators_020542b4(struct PartyMemberSlot_020542b4* slot, SafeAllocator* sourceAllocator, char* textureArena) {
    int i;
    void* block;
    unsigned int blockSize;

    sourceAllocator->Reset();

    for (i = 0; i < 10; i++) {
        blockSize = data_020e7c40[i];
        block = sourceAllocator->Allocate(blockSize);
        VectorizedMemset(block, 0, blockSize);
        slot->allocators_4_[i].CreateTypeA(block, blockSize);
    }

    func_020543ec((char*)slot, textureArena);

    block = sourceAllocator->Allocate(0x2000);
    VectorizedMemset(block, 0, 0x2000);
    ((SafeAllocator*)((char*)slot + 0x52c))->CreateTypeA(block, 0x2000);

    block = sourceAllocator->Allocate(0x5400);
    VectorizedMemset(block, 0, 0x5400);
    ((SafeAllocator*)((char*)slot + 0x540))->CreateTypeA(block, 0x5400);

    block = sourceAllocator->Allocate(0x1000);
    VectorizedMemset(block, 0, 0x1000);
    ((SafeAllocator*)((char*)slot + 0x554))->CreateTypeA(block, 0x1000);

    block = sourceAllocator->Allocate(0xc00);
    VectorizedMemset(block, 0, 0xc00);
    ((SafeAllocator*)((char*)slot + 0x5d8))->CreateTypeA(block, 0xc00);
}
