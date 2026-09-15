#include <globaldefs.h>
#include "GameState/GameState.h"

struct ListNode020378dc;
extern "C" void _ZN8Object3D6DetachEv(struct ListNode020378dc* node);
void ClearCombatantSlot(GameState* battleStruct, int id);
extern "C" void _ZN8Object3D11MakeVisibleEv(unsigned char* obj);

struct Param2_021e7470 { char pad[0x10]; unsigned char* node; };

// USA: func_ov025_021e7470
extern "C" ARM int func_ov025_021e7470(void* unused, struct Param2_021e7470* p2) {
    GameState* bs = GameState::GetInstance();
    GameObject* c = bs->GetGameObjectByIndex(0xc8);
    if (c) {
        _ZN8Object3D6DetachEv((struct ListNode020378dc*)c);
        ClearCombatantSlot(bs, 0xc8);
    }
    unsigned short idx = *(unsigned short*)(p2->node + 0x20);
    GameObject* c2 = bs->GetGameObjectByIndex(idx * 0xc + 0x1c);
    if (c2) {
        _ZN8Object3D11MakeVisibleEv((unsigned char*)c2);
    }
    return 1;
}
