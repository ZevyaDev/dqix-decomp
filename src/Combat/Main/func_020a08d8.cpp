#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

// USA: GetWardrobeCompletion_020a08d8
extern "C" ARM int GetWardrobeCompletion_020a08d8(BattleRecords_02061c04* records) {
    unsigned int wardrobeCount = records->wardrobeCount_16_2_;
    unsigned int percent = wardrobeCount * 100 / 944;
    if (percent != 0) {
        return percent;
    }
    if (wardrobeCount != 0) {
        return 1;
    }
    return percent;
}
