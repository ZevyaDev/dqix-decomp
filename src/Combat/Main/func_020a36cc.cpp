#include <globaldefs.h>

#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/GameResources.h"

extern "C" void ReleaseFileTablesForSpace_020a0cc4(unsigned int);
struct AllocatorTypeB_02114e20;
extern "C" unsigned int GetMaxPossibleAllocation_02012dd0(AllocatorTypeB_02114e20* allocator);
extern "C" void* AllocateRoundedSize_02012d88(AllocatorUnion* allocator, unsigned int size);
extern AllocatorUnion gMainHeap_02114e20;

// USA: AllocateFromMainHeapFreeingFileTables_020a36cc
extern "C" ARM int AllocateFromMainHeapFreeingFileTables_020a36cc(void** outBlock, unsigned int size) {
    GameResources* gameResources = GetGameResources();
    unsigned int maxAllocation = GetMaxPossibleAllocation_02012dd0((AllocatorTypeB_02114e20*)&gMainHeap_02114e20);
    if (maxAllocation < size) {
        ReleaseFileTablesForSpace_020a0cc4(size);
        gameResources->unknown_4490_[0] = 1;
    }
    *outBlock = AllocateRoundedSize_02012d88(&gMainHeap_02114e20, size);
    return 1;
}
