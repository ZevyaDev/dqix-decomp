#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* GetParty_02010828(GameState* gameState);
struct ItemBag_0207cf30_3;
extern "C" signed char GetBagItemCount_020a0b3c(struct ItemBag_0207cf30_3* bag, int itemId);

extern "C" int GetScriptValueAsInt_ov017_021d60f4(void*);
extern "C" void SetScriptRefInt_ov017_021d6134(void*, int);

// USA: func_0209d9c4
extern "C" ARM int func_0209d9c4(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = GetParty_02010828(var0);
    int var2 = GetScriptValueAsInt_ov017_021d60f4(arg0);
    struct ItemBag_0207cf30_3* var3 = (struct ItemBag_0207cf30_3*)((char*)var1 + 0x204 + 0xc00);
    signed char var4 = GetBagItemCount_020a0b3c(var3, (short)var2);
    SetScriptRefInt_ov017_021d6134((char*)arg0 + 0x8, var4);
    return 1;
}
