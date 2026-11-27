#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>

extern "C" void AddPlayTimeMinutes_020ac644(struct PlayTime_020ac4f8* playTime, int minutes);

// USA: AddPlayTimeSeconds_020ac6b8
extern "C" ARM void AddPlayTimeSeconds_020ac6b8(struct PlayTime_020ac4f8* playTime, int seconds) {
    playTime->seconds_3_ = playTime->seconds_3_ + seconds;
    unsigned char totalSeconds = playTime->seconds_3_;
    if (totalSeconds <= 0x3b) return;

    unsigned char carriedMinutes = totalSeconds / 0x3c;
    if (playTime->hours_0_ == 0x270f) {
        int totalMinutes = playTime->minutes_2_ + carriedMinutes;
        if (totalMinutes > 0x3b) {
            playTime->hours_0_ = 0x270f;
            playTime->minutes_2_ = 0x3b;
            playTime->seconds_3_ = 0x3b;
            return;
        }
    }
    AddPlayTimeMinutes_020ac644(playTime, carriedMinutes);
    playTime->seconds_3_ = playTime->seconds_3_ % 0x3c;
}
