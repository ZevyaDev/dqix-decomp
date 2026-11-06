#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

struct Struct_02114e20;
extern "C" unsigned int func_02012dd0(struct Struct_02114e20* arg0);
extern "C" void* AllocateRoundedSize_02012d88(AllocatorUnion* allocator, unsigned int size);
extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);
unsigned int LoadROMFilesystemFileTables(void* where, unsigned int capacity);
void CacheMainFileAccessors();

extern AllocatorUnion gMainHeap_02114e20;
extern void* data_02109d90;

// USA: LoadFileTables_020a0c0c
extern "C" ARM void LoadFileTables_020a0c0c() {
    unsigned int maxAllocation;
    void* padding;
    BackgroundLoader* backgroundLoader;
    unsigned int tablesSize;

    if (data_02109d90 != NULL)
        return;

    tablesSize = LoadROMFilesystemFileTables(NULL, 0);
    maxAllocation = func_02012dd0((Struct_02114e20*)&gMainHeap_02114e20);
    if (tablesSize + 0x10 > maxAllocation)
        return;

    backgroundLoader = BackgroundLoader::GetInstance();
    if (backgroundLoader != NULL)
        backgroundLoader->AddLock();

    padding = AllocateRoundedSize_02012d88(&gMainHeap_02114e20, maxAllocation - (tablesSize + 0x10));
    data_02109d90 = AllocateRoundedSize_02012d88(&gMainHeap_02114e20, tablesSize);
    FreeMemory_02012da4(&gMainHeap_02114e20, padding);

    if (data_02109d90 != NULL)
        LoadROMFilesystemFileTables(data_02109d90, tablesSize);

    if (backgroundLoader != NULL)
        backgroundLoader->RemoveLock();

    CacheMainFileAccessors();
}
