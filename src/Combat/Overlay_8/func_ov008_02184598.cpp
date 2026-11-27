#include <globaldefs.h>
#include "GameState/BattleRecordSnapshot.h"

// USA: ClearPlayTime_ov008_02184598
extern "C" ARM void ClearPlayTime_ov008_02184598(PlayTime_020ac4f8* playTime) {
    playTime->hours_0_ = 0;
    playTime->minutes_2_ = 0;
    playTime->seconds_3_ = 0;
}
