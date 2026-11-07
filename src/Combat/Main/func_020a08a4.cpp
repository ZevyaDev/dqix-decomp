#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

// USA: GetItemListCompletion_020a08a4
extern "C" ARM int GetItemListCompletion_020a08a4(BattleRecords_02061c04* records) {
    unsigned int itemListCount = records->itemListCount_15_1_;
    unsigned int percent = itemListCount * 100 / 232;
    if (percent != 0) {
        return percent;
    }
    if (itemListCount != 0) {
        return 1;
    }
    return percent;
}
