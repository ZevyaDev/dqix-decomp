#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "Graphics/BGLayer.h"
#include "NitroSDK/Cache.h"


struct BGControlSave_02074bd0;
extern "C" void RestoreMainBGControl_02074bd0(struct BGControlSave_02074bd0* save);
struct BGControlSave_02074bf4;
extern "C" void RestoreSubBGControl_02074bf4(struct BGControlSave_02074bf4* save);

struct BGLayer_0204b010;
struct BGLayer_02020cb8_3;
extern "C" void __clear(void* arg0, int arg1);

// USA: DestroyAccoladeDisplay_ov023_021eb26c
extern "C" ARM void DestroyAccoladeDisplay_ov023_021eb26c(void* display) {
    char* displayBytes = (char*)display;
    int backgroundLoader = (int)BackgroundLoader::GetInstance();
    if (*(int*)(displayBytes + 0x434) >= 0) {
        ((BackgroundLoader*)(backgroundLoader))->RemoveTask((int)(*(int*)(displayBytes + 0x434)));
        *(int*)(displayBytes + 0x434) = -1;
    }

    unsigned int* dISPCNT = (unsigned int*)0x4000000;
    *dISPCNT = (*dISPCNT & ~0x1f00) | (*(int*)(displayBytes + 0x3c) << 8);
    unsigned int* dISPCNTSUB = (unsigned int*)0x4001000;
    *dISPCNTSUB = (*dISPCNTSUB & ~0x1f00) | (*(int*)(displayBytes + 0x40) << 8);

    RestoreMainBGControl_02074bd0((struct BGControlSave_02074bd0*)(displayBytes + 0x2a));
    RestoreSubBGControl_02074bf4((struct BGControlSave_02074bf4*)(displayBytes + 0x2a));

    unsigned char kind = *(unsigned char*)(displayBytes + 0x430);
    if (kind == 2 || (kind == 7 && (*(unsigned short*)(displayBytes + 0x438) & 8) != 0)) {
        ((BGLayer*)((struct BGLayer_0204b010*)(displayBytes + 0x44)))->PrepareIndexBuffer((void*)(0));
        ((BGLayer*)(displayBytes + 0x44))->CleanIndexBufferCache((const void*)(0));
        ((BGLayer*)(displayBytes + 0x44))->UploadIndexBuffer((const void*)(0));
        ((BGLayer*)((struct BGLayer_02020cb8_3*)(displayBytes + 0x44)))->MaybeDestroy();
        memset(*(void**)(displayBytes + 0x420), 0, 0x20);
        CleanInvalidateCacheRange((const void*)(*(void**)(displayBytes + 0x420)), 0x20);
        LoadToMainBG1CharacterData((const void*)(*(int*)(displayBytes + 0x420)), 0, 0x20);
    }

    *(int*)(displayBytes + 0x20) = 0;
    *(int*)(displayBytes + 0x24) = 0;
    *(unsigned char*)(displayBytes + 0x430) = 0xff;
    *(unsigned char*)(displayBytes + 0x431) = 0;
    *(unsigned char*)(displayBytes + 0x432) = 0;
    *(unsigned char*)(displayBytes + 0x433) = 0;
    *(int*)(displayBytes + 0x434) = -1;
    *(unsigned short*)(displayBytes + 0x438) = 0;
    *(unsigned short*)(displayBytes + 0x43a) = 0;
    *(unsigned char*)(displayBytes + 0x43c) = 0;
    *(unsigned char*)(displayBytes + 0x43d) = 0;
    *(unsigned short*)(displayBytes + 0x43e) = 0;
    *(unsigned short*)(displayBytes + 0x440) = 0;
    *(unsigned short*)(displayBytes + 0x442) = 0;
    *(unsigned short*)(displayBytes + 0x444) = 0;
    *(unsigned short*)(displayBytes + 0x446) = 0;
    *(unsigned short*)(displayBytes + 0x448) = 0;

    SafeAllocator* allocators[5];
    __clear(allocators, 0x14);
    allocators[0] = (SafeAllocator*)(*(char**)(displayBytes + 0));
    allocators[1] = (SafeAllocator*)(*(char**)(displayBytes + 0) + 0x14);
    allocators[2] = (SafeAllocator*)(*(char**)(displayBytes + 0) + 0x28);
    allocators[3] = (SafeAllocator*)(*(char**)(displayBytes + 0) + 0x3c);

    for (int i = 0; allocators[i] != 0; i++) {
        if (allocators[i]->GetSignedAllocator() != 0) {
            allocators[i]->Destroy();
        }
    }
}
