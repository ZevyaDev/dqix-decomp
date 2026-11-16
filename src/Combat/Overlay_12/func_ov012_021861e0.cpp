#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "Graphics/OBJSpriteSet.h"
#include "Resource/PAC.h"

#if defined(jpn)
enum { Enum_ov012_021861e0_19 = 17, Enum_ov012_021861e0_4964 = 0x133c, Enum_ov012_021861e0_4960 = 0x1338, Enum_ov012_021861e0_4956 = 0x1334, Enum_ov012_021861e0_5008 = 0x135c, Enum_ov012_021861e0_92 = 0x54 };
#else
enum { Enum_ov012_021861e0_19 = 19, Enum_ov012_021861e0_4964 = 0x1364, Enum_ov012_021861e0_4960 = 0x1360, Enum_ov012_021861e0_4956 = 0x135c, Enum_ov012_021861e0_5008 = 0x1390, Enum_ov012_021861e0_92 = 0x5c };
#endif

struct Sprite_02043368_2;
struct SpriteAnimationList_02043368;
struct PacEntry_02020cb8_4;
struct PacEntry_02020aec;

// USA: func_ov012_021861e0
extern "C" ARM void func_ov012_021861e0(char* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    for (unsigned char var1 = 0; var1 < Enum_ov012_021861e0_19; ++var1)
        ((OBJSpriteSet::Metatile*)((Sprite_02043368_2*)(*(char**)(arg0 + Enum_ov012_021861e0_4964) + var1 * 0x28)))->Reset();
    ((OBJSpriteSet::List*)(*(SpriteAnimationList_02043368**)(arg0 + Enum_ov012_021861e0_4960)))->Reset();
    ((OBJSpriteSet*)(*(char**)(arg0 + Enum_ov012_021861e0_4956)))->Reset();
    *(unsigned char*)(*(char**)(arg0 + Enum_ov012_021861e0_4956) + 0x50) = 0;
    char* var2 = *(char**)(arg0 + Enum_ov012_021861e0_4956);
    *(void**)(var2 + 0x40) = *(void**)(arg0 + Enum_ov012_021861e0_4964);
    *(short*)(var2 + 0x4c) = Enum_ov012_021861e0_19;
    void* var3 = *(void**)(arg0 + Enum_ov012_021861e0_4960);
    char* var4 = *(char**)(arg0 + Enum_ov012_021861e0_4956);
    *(void**)(var4 + 0x3c) = var3;

    void* var5;
    void* var6;
    unsigned int var7;
    int var8;
    var0->GetLoadedFileByID(*(int*)(arg0 + Enum_ov012_021861e0_5008), &var6, &var7);
    int var9 = GetNumFilesInPAC((const void*)((PacEntry_02020cb8_4*)var6));
    ((SafeAllocator*)(arg0 + Enum_ov012_021861e0_92))->Reset();
    for (int var10 = 0; var10 < var9; ++var10) {
        void* var11 = GetFileInPACByIndex((void*)((PacEntry_02020aec*)var6), var10, (const char**)(&var5), (unsigned int*)(&var8));
        ((OBJSpriteSet*)(*(char**)(arg0 + Enum_ov012_021861e0_4956)))->LoadFromNitroFile((void*)(var11), var8, (SafeAllocator*)(arg0 + Enum_ov012_021861e0_92));
    }
    var0->RemoveTask(*(int*)(arg0 + Enum_ov012_021861e0_5008));
    *(int*)(arg0 + Enum_ov012_021861e0_5008) = -1;
}
