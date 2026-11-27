#include <globaldefs.h>
#include "GameState/BattleRecordSnapshot.h"

// USA: AddDefeatedMonsterListCount_020a0460
extern "C" ARM void AddDefeatedMonsterListCount_020a0460(BattleRecords_02061c04* records, unsigned int count) {
    unsigned int newCount = records->defeatedMonsterListCount_14_0_ + count;
    if (newCount > 500) {
        newCount = 500;
    }
    records->defeatedMonsterListCount_14_0_ = newCount;
}
