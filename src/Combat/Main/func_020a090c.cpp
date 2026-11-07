#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

// USA: GetAlchenomiconCompletion_020a090c
extern "C" ARM int GetAlchenomiconCompletion_020a090c(BattleRecords_02061c04* records) {
    unsigned int alchenomiconCount = records->alchenomiconCount_12_7_;
    unsigned int percent = alchenomiconCount * 100 / 448;
    if (percent != 0) {
        return percent;
    }
    if (alchenomiconCount != 0) {
        return 1;
    }
    return percent;
}
