#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"
#include "Graphics/TextureArena.h"

#if defined(jpn)
enum { Enum_ov017_021a316c_4544 = 0xfb0, Enum_ov017_021a316c_4412 = 0xf2c, Enum_ov017_021a316c_4676 = 0x1034, Enum_ov017_021a316c_1500 = 0x58c, Enum_ov017_021a316c_9828 = 0x26a4 };
#else
enum { Enum_ov017_021a316c_4544 = 0x11c0, Enum_ov017_021a316c_4412 = 0x113c, Enum_ov017_021a316c_4676 = 0x1244, Enum_ov017_021a316c_1500 = 0x5dc, Enum_ov017_021a316c_9828 = 0x2664 };
#endif

extern "C" void func_020da244(void* arg0);
extern "C" void* GetZone3D_02012fe4(void);
extern int data_ov017_021d82fc;

extern "C" void ClearEffectResourcesAndMonsterModelTemplates_ov017_021a27e8(void* gameResources);

extern "C" void* GetNPCManager_0203cf4c(void);
struct NPCManager_0203cfb4;
extern "C" void ResetNPCManager_0203cfb4(struct NPCManager_0203cfb4* npcManager);

struct Struct_0201c014;
extern "C" void func_0208f7ec(struct Struct_0201c014* arg0);

struct Struct_0200ffc0;
extern "C" void* func_0200ffc0(struct Struct_0200ffc0* arg0);
struct Struct_0200ffd0;
extern "C" void* func_0200ffd0(struct Struct_0200ffd0* arg0);

extern "C" void ClearGameObjectByIndex_0200fd48(GameState* gameState, int index);

struct TextureVRAMArea_0203d028;

// USA: UnloadFieldObjects_ov017_021a316c
extern "C" ARM void UnloadFieldObjects_ov017_021a316c(unsigned char* gameResources) {
    GameState* gameState = GameState::GetInstance();
    unsigned char* zone = (unsigned char*)GetZone3D_02012fe4();
    int firstPassIndex;
    int secondPassIndex;
    int i;

    if (((SafeAllocator*)(gameResources + Enum_ov017_021a316c_4544))->GetSignedAllocator()) {
        ((SafeAllocator*)(gameResources + Enum_ov017_021a316c_4544))->Destroy();
        ((SafeAllocator*)(gameResources + Enum_ov017_021a316c_4544))->ResetAllocatorPointer();
    }

    if (((SafeAllocator*)(gameResources + Enum_ov017_021a316c_4412))->GetSignedAllocator()) {
        ((SafeAllocator*)(gameResources + Enum_ov017_021a316c_4412))->Destroy();
        ((SafeAllocator*)(gameResources + Enum_ov017_021a316c_4412))->ResetAllocatorPointer();
    }

    if (((SafeAllocator*)(gameResources + Enum_ov017_021a316c_4412))->GetSignedAllocator()) {
        ((SafeAllocator*)(gameResources + Enum_ov017_021a316c_4412))->Destroy();
        ((SafeAllocator*)(gameResources + Enum_ov017_021a316c_4412))->ResetAllocatorPointer();
    }

    if (((SafeAllocator*)(gameResources + Enum_ov017_021a316c_4676))->GetSignedAllocator()) {
        ((SafeAllocator*)(gameResources + Enum_ov017_021a316c_4676))->Destroy();
        ((SafeAllocator*)(gameResources + Enum_ov017_021a316c_4676))->ResetAllocatorPointer();
    }

    func_020da244(&data_ov017_021d82fc);
    ClearEffectResourcesAndMonsterModelTemplates_ov017_021a27e8(gameResources);

    for (firstPassIndex = 0; firstPassIndex < 0x30; firstPassIndex++) {
        GameObject* monster = gameState->GetMaybeFieldMonsterByIndex(firstPassIndex + 0x70);
        if (monster) {
            ((Object3D*)((unsigned char*)monster))->Destroy();
        }
    }

    ((SafeAllocator*)(gameResources + 0xc4))->Reset();
    ((TextureArena*)((struct TextureVRAMArea_0203d028*)(gameResources + Enum_ov017_021a316c_1500)))->Reset();

    for (secondPassIndex = 0; secondPassIndex < 0x30; secondPassIndex++) {
        GameObject* monster = gameState->GetMaybeFieldMonsterByIndex(secondPassIndex + 0x70);
        if (monster) {
            ((Object3D*)((unsigned char*)monster))->Destroy();
        }
    }

    ResetNPCManager_0203cfb4((struct NPCManager_0203cfb4*)GetNPCManager_0203cf4c());
    func_0208f7ec((struct Struct_0201c014*)(zone + Enum_ov017_021a316c_9828));

    if (func_0200ffc0((struct Struct_0200ffc0*)gameState)) {
        ClearGameObjectByIndex_0200fd48(gameState, 0xc9);
    }
    if (func_0200ffd0((struct Struct_0200ffd0*)gameState)) {
        ClearGameObjectByIndex_0200fd48(gameState, 0xca);
    }

    for (i = 1; i < 4; i++) {
        if (gameState->GetGameObjectByIndex(i + 0xca)) {
            ClearGameObjectByIndex_0200fd48(gameState, i + 0xca);
        }
    }
    ClearGameObjectByIndex_0200fd48(gameState, 0xce);
}
