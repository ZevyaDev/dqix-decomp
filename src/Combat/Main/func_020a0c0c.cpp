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

// USA: func_020a0c0c
extern "C" ARM void func_020a0c0c() {
    unsigned int var0;
    void* var1;
    BackgroundLoader* var2;
    unsigned int var3;

    if (data_02109d90 != NULL)
        return;

    var3 = LoadROMFilesystemFileTables(NULL, 0);
    var0 = func_02012dd0((Struct_02114e20*)&gMainHeap_02114e20);
    if (var3 + 0x10 > var0)
        return;

    var2 = BackgroundLoader::GetInstance();
    if (var2 != NULL)
        var2->AddLock();

    var1 = AllocateRoundedSize_02012d88(&gMainHeap_02114e20, var0 - (var3 + 0x10));
    data_02109d90 = AllocateRoundedSize_02012d88(&gMainHeap_02114e20, var3);
    FreeMemory_02012da4(&gMainHeap_02114e20, var1);

    if (data_02109d90 != NULL)
        LoadROMFilesystemFileTables(data_02109d90, var3);

    if (var2 != NULL)
        var2->RemoveLock();

    CacheMainFileAccessors();
}
