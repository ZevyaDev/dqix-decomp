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

// USA: func_ov023_021eb26c
extern "C" ARM void func_ov023_021eb26c(void* arg0) {
    char* var0 = (char*)arg0;
    int var1 = (int)BackgroundLoader::GetInstance();
    if (*(int*)(var0 + 0x434) >= 0) {
        ((BackgroundLoader*)(var1))->RemoveTask((int)(*(int*)(var0 + 0x434)));
        *(int*)(var0 + 0x434) = -1;
    }

    unsigned int* var2 = (unsigned int*)0x4000000;
    *var2 = (*var2 & ~0x1f00) | (*(int*)(var0 + 0x3c) << 8);
    unsigned int* var3 = (unsigned int*)0x4001000;
    *var3 = (*var3 & ~0x1f00) | (*(int*)(var0 + 0x40) << 8);

    RestoreMainBGControl_02074bd0((struct BGControlSave_02074bd0*)(var0 + 0x2a));
    RestoreSubBGControl_02074bf4((struct BGControlSave_02074bf4*)(var0 + 0x2a));

    unsigned char var4 = *(unsigned char*)(var0 + 0x430);
    if (var4 == 2 || (var4 == 7 && (*(unsigned short*)(var0 + 0x438) & 8) != 0)) {
        ((BGLayer*)((struct BGLayer_0204b010*)(var0 + 0x44)))->PrepareIndexBuffer((void*)(0));
        ((BGLayer*)(var0 + 0x44))->CleanIndexBufferCache((const void*)(0));
        ((BGLayer*)(var0 + 0x44))->UploadIndexBuffer((const void*)(0));
        ((BGLayer*)((struct BGLayer_02020cb8_3*)(var0 + 0x44)))->MaybeDestroy();
        memset(*(void**)(var0 + 0x420), 0, 0x20);
        CleanInvalidateCacheRange((const void*)(*(void**)(var0 + 0x420)), 0x20);
        LoadToMainBG1CharacterData((const void*)(*(int*)(var0 + 0x420)), 0, 0x20);
    }

    *(int*)(var0 + 0x20) = 0;
    *(int*)(var0 + 0x24) = 0;
    *(unsigned char*)(var0 + 0x430) = 0xff;
    *(unsigned char*)(var0 + 0x431) = 0;
    *(unsigned char*)(var0 + 0x432) = 0;
    *(unsigned char*)(var0 + 0x433) = 0;
    *(int*)(var0 + 0x434) = -1;
    *(unsigned short*)(var0 + 0x438) = 0;
    *(unsigned short*)(var0 + 0x43a) = 0;
    *(unsigned char*)(var0 + 0x43c) = 0;
    *(unsigned char*)(var0 + 0x43d) = 0;
    *(unsigned short*)(var0 + 0x43e) = 0;
    *(unsigned short*)(var0 + 0x440) = 0;
    *(unsigned short*)(var0 + 0x442) = 0;
    *(unsigned short*)(var0 + 0x444) = 0;
    *(unsigned short*)(var0 + 0x446) = 0;
    *(unsigned short*)(var0 + 0x448) = 0;

    SafeAllocator* var5[5];
    __clear(var5, 0x14);
    var5[0] = (SafeAllocator*)(*(char**)(var0 + 0));
    var5[1] = (SafeAllocator*)(*(char**)(var0 + 0) + 0x14);
    var5[2] = (SafeAllocator*)(*(char**)(var0 + 0) + 0x28);
    var5[3] = (SafeAllocator*)(*(char**)(var0 + 0) + 0x3c);

    for (int var6 = 0; var5[var6] != 0; var6++) {
        if (var5[var6]->GetSignedAllocator() != 0) {
            var5[var6]->Destroy();
        }
    }
}
