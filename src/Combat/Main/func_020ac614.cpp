#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

// USA: AddPlayTimeHours_020ac614
extern "C" ARM void AddPlayTimeHours_020ac614(struct PlayTime_020ac4f8* playTime, int hours) {
    playTime->hours_0_ += hours;
    if (playTime->hours_0_ > 0x270f) {
        playTime->hours_0_ = 0x270f;
        playTime->minutes_2_ = 0x3b;
        playTime->seconds_3_ = 0x3b;
    }
}
