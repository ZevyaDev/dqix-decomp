#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

extern "C" void AddPlayTimeHours_020ac614(struct PlayTime_020ac4f8* playTime, int hours);

// USA: AddPlayTimeMinutes_020ac644
extern "C" ARM void AddPlayTimeMinutes_020ac644(struct PlayTime_020ac4f8* playTime, int minutes) {
    playTime->minutes_2_ = playTime->minutes_2_ + minutes;
    unsigned char totalMinutes = playTime->minutes_2_;
    if (totalMinutes <= 0x3b) return;

    unsigned short carriedHours = totalMinutes / 0x3c;
    if ((int)(playTime->hours_0_ + carriedHours) > 0x270f) {
        playTime->hours_0_ = 0x270f;
        playTime->minutes_2_ = 0x3b;
        playTime->seconds_3_ = 0x3b;
        return;
    }

    AddPlayTimeHours_020ac614(playTime, carriedHours);
    playTime->minutes_2_ = playTime->minutes_2_ % 0x3c;
}
