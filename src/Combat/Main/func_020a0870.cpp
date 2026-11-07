#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

// USA: GetDefeatedMonsterListCompletion_020a0870
extern "C" ARM int GetDefeatedMonsterListCompletion_020a0870(BattleRecords_02061c04* records) {
    unsigned int defeatedMonsterListCount = records->defeatedMonsterListCount_14_0_;
    unsigned int percent = defeatedMonsterListCount * 100 / 307;
    if (percent != 0) {
        return percent;
    }
    if (defeatedMonsterListCount != 0) {
        return 1;
    }
    return percent;
}
