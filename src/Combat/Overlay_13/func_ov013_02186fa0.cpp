#if defined(jpn)
#define R(j,u) (j)
#define func_ov006_02155480 func_ov006_02156b68
#define data_ov011_021889a0 data_ov011_02189700
#define data_ov013_02187dd8 data_ov013_02188cf0
#define func_ov006_02154fe4 func_ov006_02156730
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "Graphics/BGLayer.h"
#include "NitroSDK/Cache.h"

struct BGLayer_0204af14;


struct BGLayer_02020cb8_2;

struct BGControlSave_02074bd0;
extern "C" void RestoreMainBGControl_02074bd0(struct BGControlSave_02074bd0* save);

struct BGControlSave_02074bf4;
extern "C" void RestoreSubBGControl_02074bf4(struct BGControlSave_02074bf4* save);

// USA: func_ov013_02186fa0
extern "C" ARM void func_ov013_02186fa0(unsigned char* arg0) {
    FontLoader_0208cb08* var0 = GetFontLoader_02094a00();
    ClearLoadedFontSet_02094b38(var0, 0x68);
    CancelFontLoad_02094ab0(var0);

    if (arg0[R(0x50,0x64)] == 0) {
        void* var1 = ((void*)((BGLayer*)((struct BGLayer_0204af14*)(arg0 + 0x28)))->GetSprite(0));
        void* var2;
        if (var1 != 0 && (var2 = *(void**)((char*)var1 + 0xc)) != 0) {
            memset(var2, 0, 0x600);
            CleanInvalidateCacheRange((const void*)(var2), 0x20);
            LoadToMainBG1CharacterData((const void*)((int)var2), 0, 0x20);
            ((BGLayer*)((struct BGLayer_02020cb8_2*)(arg0 + 0x28)))->CleanCacheAndUploadIndexBuffer((const void*)(var2));
        }

        RestoreMainBGControl_02074bd0((struct BGControlSave_02074bd0*)(arg0 + 0x14));
        {
            volatile unsigned int* var3 = (unsigned int*)0x4000000;
            *var3 = (*var3 & ~0x1f00) | (*(unsigned int*)(arg0 + R(0x4c,0x60)) << 8);
        }
    } else {
        RestoreSubBGControl_02074bf4((struct BGControlSave_02074bf4*)(arg0 + 0x14));
        {
            volatile unsigned int* var4 = (unsigned int*)0x4001000;
            *var4 = (*var4 & ~0x1f00) | (*(unsigned int*)(arg0 + R(0x4c,0x60)) << 8);
        }
    }

    if (*(int*)(arg0 + R(0x48,0x5c)) >= 0) {
        int var5 = (int)BackgroundLoader::GetInstance();
        ((BackgroundLoader*)(var5))->RemoveTask((int)(*(int*)(arg0 + R(0x48,0x5c))));
        *(int*)(arg0 + R(0x48,0x5c)) = -1;
    }

    if (*(void**)(arg0 + 0x0) == 0) return;

    unsigned char var6;
    for (var6 = 0; var6 < R(4,5); var6++) {
        ((SafeAllocator*)(*(void**)(arg0 + 0x0)))[var6].Destroy();
    }
}
