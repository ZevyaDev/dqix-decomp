#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void ClearGameObjectByIndex_0200fd48(GameState* gameState, int index);

struct EffectResource_02057f00 {
    int id_0_;
    char unknown_4_[0x1ec - 4];
    struct EffectResource_02057f00* pNext_1ec_;
};

struct EffectManager_02057f00_2 {
    struct EffectResource_02057f00* pEffectResources_0_;
};

// USA: RemoveEffectResource_02057f00
extern "C" ARM void RemoveEffectResource_02057f00(void* effectManager, int effectId) {
    struct EffectResource_02057f00* effect = ((struct EffectManager_02057f00_2*)effectManager)->pEffectResources_0_;
    struct EffectResource_02057f00* previous = 0;
    GameState* gameState = GameState::GetInstance();
    int i;
    for (i = 0; i < 16; i++) {
        if (effectId == *(int*)((char*)effectManager + i * 0xd4 + 0xd8)) {
            ClearGameObjectByIndex_0200fd48(gameState, i + 0xd0);
        }
    }
    while (effect != 0) {
        if (effectId == effect->id_0_) break;
        previous = effect;
        effect = effect->pNext_1ec_;
    }
    if (effect == 0) return;
    if (previous == 0) {
        ((struct EffectManager_02057f00_2*)effectManager)->pEffectResources_0_ = effect->pNext_1ec_;
    } else {
        previous->pNext_1ec_ = effect->pNext_1ec_;
    }
}
