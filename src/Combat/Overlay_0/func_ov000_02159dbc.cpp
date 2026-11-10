#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/BattleSkillEligibility.h"
#include "Grotto/Main/ActiveGrottoClass.h"

extern "C" GameObject* GetEnemyByIndex_0200fea4(GameState* gameState, int index);
extern "C" void* func_ov000_02153758(void* arg0, int arg1);
extern "C" char* GetZone3D_02012fe4(void);

struct Struct_ov000_02159dbc {
    char unknown_0_[0xa];
    unsigned short level_a_0_ : 7;
};

struct Struct_ov000_02159dbc_2 {
    char unknown_0_[0x25];
    unsigned char unknown_25_;
};

// USA: GetEnemyLevel_ov000_02159dbc
extern "C" ARM int GetEnemyLevel_ov000_02159dbc(char* battle, int combatantIndex) {
    GameState* gameState = GameState::GetInstance();
    GameObject* enemy = GetEnemyByIndex_0200fea4(GameState::GetInstance(), combatantIndex);
    if (enemy == 0) {
        return 1;
    }
    struct Struct_ov000_02159dbc* species =
        (struct Struct_ov000_02159dbc*)func_ov000_02153758(battle, combatantIndex);
    if (species == 0) {
        return 1;
    }
    char* zone = GetZone3D_02012fe4();
    if (func_020117f0(gameState) && (*(struct Struct_ov000_02159dbc_2**)(battle + 0x8e18))->unknown_25_ != 0) {
#if defined(jpn)
        enum { Enum_ov000_02159dbc_9196 = 0x240c };
#else
        enum { Enum_ov000_02159dbc_9196 = 0x23ec };
#endif
        DetailedTreasureMapData* treasureMap = ((ActiveGrottoClass*)(zone + Enum_ov000_02159dbc_9196))->GetDetailedData();
        short monsterId = enemy->obj3D_.unknown_2_;
        unsigned short bossMonsterId = treasureMap->legacy_.MaybeGetCurrentAlternateID();
        if (bossMonsterId == monsterId) {
            return treasureMap->legacy_.level_;
        }
    }
    return species->level_a_0_;
}
