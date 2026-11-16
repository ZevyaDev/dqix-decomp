#if defined(jpn)
enum { Enum_ov017_021b5dc4_1536 = 0x620, Enum_ov017_021b5dc4_716 = 0x27c };
#else
enum { Enum_ov017_021b5dc4_1536 = 0x600, Enum_ov017_021b5dc4_716 = 0x2cc };
#endif

#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/GameResources.h"
#include "Graphics/SPRSprite.h"
#include "Graphics/TextureArena.h"

struct Struct_ov017_0218d618_2;
extern "C" int func_ov017_0218d618(struct Struct_ov017_0218d618_2* arg0);

extern "C" void* GetZone3D_02012fe4(void);
extern "C" int GetProtagonistObjectIndex_020100a8(GameState* gameState);
extern "C" void* AllocateRoundedSize_02012d88(AllocatorUnion* allocator, unsigned int size);
extern AllocatorUnion gMainHeap_02114e20;

struct Struct_02012fa4;

struct TextureVRAMArea_02015ef4_5;

// USA: func_ov017_021b5dc4
extern "C" ARM int func_ov017_021b5dc4(char* arg0) {
    if (*(unsigned char*)(arg0 + 0x54) != 0) {
        if (!func_ov017_0218d618((struct Struct_ov017_0218d618_2*)((char*)GetGameResources())))
            return 3;
    } else {
        BackgroundLoader* var0 = BackgroundLoader::GetInstance();
        if (var0->GetTaskStatus(*(int*)(arg0 + 0x28)) != 0) {
            if (var0->GetDetailedTaskStatus(*(int*)(arg0 + 0x28)) == BackgroundLoader::TaskStatus_Complete) {
                void* var1;
                unsigned int var2;
                var0->GetLoadedFileByID(*(int*)(arg0 + 0x28), &var1, &var2);
                void* var3 = AllocateRoundedSize_02012d88(&gMainHeap_02114e20, 0x100);
                if (var2 != 0 && var3 != 0) {
                    ((SafeAllocator*)(arg0 + 0x40))->CreateTypeA(var3, 0x100);
                    GameState* var4 = GameState::GetInstance();
                    char* var5 = (char*)GetZone3D_02012fe4();
                    int var6 = GetProtagonistObjectIndex_020100a8(var4);
                    char* var7 = var5 + Enum_ov017_021b5dc4_1536 + var6 * 0x88;
                    *(int*)(arg0 + 0x20) = (int)var7;
                    ((SPRSprite*)((struct Struct_02012fa4*)*(int*)(arg0 + 0x20)))->Release();
                    ((SPRSprite*)((struct Struct_02012fa4*)*(int*)(arg0 + 0x20)))->Reset();
                    unsigned char var8[0x70];
                    short* var9 = (short*)(((char*)GetGameResources()) + Enum_ov017_021b5dc4_716);
                    ((TextureArena*)((struct TextureVRAMArea_02015ef4_5*)((char*)var9 + 0x230)))->CreateDescendant((TextureArena*)((struct TextureVRAMArea_02015ef4_5*)var8));
                    ((TextureArena*)((char*)var8))->Restore();
                    ((SPRSprite*)((void*)*(int*)(arg0 + 0x20)))->LoadFromSPR((const void*)((int)var1), (int)var2, (SafeAllocator*)((int)(arg0 + 0x40)));
                    ((TextureArena*)((char*)var8))->Save();
                }
            }
            var0->RemoveTask(*(int*)(arg0 + 0x28));
            *(int*)(arg0 + 0x28) = -1;
        }
    }
    return (*(int*)(arg0 + 0x28) < 0) ? 4 : 3;
}
