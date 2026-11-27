#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"
#include "Graphics/SPRSprite.h"

struct BattleNumberPopups_0203a54c {
    struct Struct_02012fa4 digitSprites_0_[5];
    struct Struct_02012fa4 frameSprites_2a8_[5];
};


// USA: ReleaseBattleNumberPopupSprites_0203a54c
extern "C" ARM void ReleaseBattleNumberPopupSprites_0203a54c(struct BattleNumberPopups_0203a54c* popups) {
    int i;
    for (i = 0; i < 5; i++) {
        ((SPRSprite*)(&popups->digitSprites_0_[i]))->Release();
        ((SPRSprite*)(&popups->frameSprites_2a8_[i]))->Release();
    }
}
