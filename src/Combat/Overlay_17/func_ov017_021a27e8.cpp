#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void ClearGameObjectByIndex_0200fd48(GameState* gameState, int index);
extern "C" void* GetEffectManager_02057924(void);
extern "C" void RemoveEffectResource_02057f00(void* effectManager, int effectId);

// USA: ClearEffectResourcesAndMonsterModelTemplates_ov017_021a27e8
extern "C" ARM void ClearEffectResourcesAndMonsterModelTemplates_ov017_021a27e8(void* gameResources) {
    GameState* gameState = GameState::GetInstance();
    void* effectManager = GetEffectManager_02057924();

    int i;
    for (i = 7; i <= 0x12; i++) {
        ClearGameObjectByIndex_0200fd48(gameState, i);
    }

    int effectId;
    for (effectId = 0x78; effectId <= 0x8b; effectId++) {
        RemoveEffectResource_02057f00(effectManager, effectId);
    }
}
