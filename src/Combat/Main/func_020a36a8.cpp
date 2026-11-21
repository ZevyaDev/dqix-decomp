#include <globaldefs.h>
#include "GameState/GameState.h"
extern "C" int GetProtagonistObjectIndex_020100a8(GameState*);

struct BattleSetup_020a36a8 {
    char unknown_0_[0x2a];
    signed char ownerObjectIndex_2a_;
};

// USA: IsProtagonistBattleOwner_020a36a8
extern "C" ARM int IsProtagonistBattleOwner_020a36a8(struct BattleSetup_020a36a8* battleSetup) {
    return battleSetup->ownerObjectIndex_2a_ == GetProtagonistObjectIndex_020100a8((GameState*)(GameState::GetInstance()));
}
