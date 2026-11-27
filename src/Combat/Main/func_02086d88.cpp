#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_02053c6c func_02054fe4
#endif

struct ItemBag_02061c04_23;
extern "C" int RemoveItemFromBag_020a0a08(struct ItemBag_02061c04_23* bag, int itemId, int count);

extern "C" int func_0207c894(void* arg0, int arg1, int arg2);

extern "C" int func_02053c6c(unsigned char* gameObject);

struct Struct_020838c4;
extern "C" int func_020838c4(struct Struct_020838c4* arg0, int arg1);

// USA: RemoveItemFromBagsOrHeldItems_02086d88
extern "C" ARM int RemoveItemFromBagsOrHeldItems_02086d88(unsigned char* party, int itemId) {
    if (itemId < 0) {
        return 0;
    }
    if (RemoveItemFromBag_020a0a08((struct ItemBag_02061c04_23*)party, itemId, 1) != 0) {
        return 1;
    }
    if (func_0207c894(party + 0x1d4, itemId, 9) != 0) {
        return 1;
    }
    if (RemoveItemFromBag_020a0a08((struct ItemBag_02061c04_23*)(party + 0xe04), itemId, 1) != 0) {
        return 1;
    }
    GameState* gameState = GameState::GetInstance();
    GameObject* partyMemberBase;
    unsigned char i;
    for (i = 0; i < party[0xf7c]; i++) {
        unsigned char* memberIndexBase = party + i;
        partyMemberBase = GetPartyMemberBaseByIndex_0200ff1c(gameState, memberIndexBase[0xf78]);
        if (partyMemberBase != 0) {
            int memberData = func_02053c6c((unsigned char*)partyMemberBase);
            if (memberData != 0) {
                if (func_020838c4((struct Struct_020838c4*)memberData, itemId) != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
