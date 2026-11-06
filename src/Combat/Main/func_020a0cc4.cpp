#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

struct Struct_02114e20;
extern "C" unsigned int func_02012dd0(struct Struct_02114e20* arg0);



struct NitroHandle;
NitroHandle* NitroHandle_FindBySignature(const char* sig, int a);
void NitroHandle_ReleaseFileTables(NitroHandle* h);

extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);

struct Struct_020a0cc4;

extern struct Struct_02114e20 gMainHeap_02114e20;
extern void* data_02109d90;
extern const char data_020f18e8[];

// USA: ReleaseFileTablesForSpace_020a0cc4
extern "C" ARM int ReleaseFileTablesForSpace_020a0cc4(int neededSize) {
    if (neededSize >= 0) {
        unsigned int maxAllocation = func_02012dd0(&gMainHeap_02114e20);
        if (maxAllocation >= neededSize) goto fail;
    }
    if (data_02109d90 == NULL) goto fail;

    {
        int backgroundLoader = (int)BackgroundLoader::GetInstance();
        if (backgroundLoader != 0) {
            ((BackgroundLoader*)(backgroundLoader))->MaybeWaitIdle();
        }

        NitroHandle_ReleaseFileTables(NitroHandle_FindBySignature(data_020f18e8, 3));
        FreeMemory_02012da4((AllocatorUnion*)&gMainHeap_02114e20, data_02109d90);
        data_02109d90 = NULL;

        if (backgroundLoader != 0) {
            ((BackgroundLoader*)((struct Struct_020a0cc4*)backgroundLoader))->RemoveLock();
        }
    }
    return 1;
fail:
    return 0;
}
