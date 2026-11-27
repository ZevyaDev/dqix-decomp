#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void AddPlayTimeHours_020ac614(struct PlayTime_020ac4f8* playTime, int hours);

extern "C" void AddPlayTimeMinutes_020ac644(struct PlayTime_020ac4f8* playTime, int minutes);

extern "C" void AddPlayTimeSeconds_020ac6b8(PlayTime_020ac4f8* playTime, int seconds);

struct GameState_020103f0;
extern "C" void GetElapsedPlayTime_020103f0(struct GameState_020103f0* gameState, unsigned short* hours, unsigned char* minutes, unsigned char* seconds);

struct GameState_020104cc;
extern "C" void GetElapsedMultiplayerTime_020104cc(struct GameState_020104cc* gameState, unsigned short* hours, unsigned char* minutes, unsigned char* seconds);

extern "C" int GetBattleRecords_020ac4c0(void* records);
extern "C" int SetBattleRecords_020ac494(void* records);

unsigned long long GetCurrentTimestamp(void);

// USA: AddElapsedPlayTime_020ac4f8
extern "C" ARM int AddElapsedPlayTime_020ac4f8(int isMultiplayerTimeIncluded) {
    GameState *gameState;
    BattleRecords_02061c04 records;
    unsigned short hours;
    unsigned char minutes;
    unsigned char seconds;
    unsigned long long timestamp;
    PlayTimes_02061c04_2* var6;

    gameState = GameState::GetInstance();
    GetBattleRecords_020ac4c0(&records);

    hours = 0;
    minutes = 0;
    seconds = 0;
    var6 = &records.unknown_68_;
    GetElapsedPlayTime_020103f0((struct GameState_020103f0*)gameState, &hours, &minutes, &seconds);

    AddPlayTimeHours_020ac614(&records.playTimes_0_.playTime_0_, hours);
    AddPlayTimeMinutes_020ac644(&records.playTimes_0_.playTime_0_, minutes);
    AddPlayTimeSeconds_020ac6b8(&records.playTimes_0_.playTime_0_, seconds);

    AddPlayTimeHours_020ac614(&var6->playTime_0_, hours);
    AddPlayTimeMinutes_020ac644(&var6->playTime_0_, minutes);
    AddPlayTimeSeconds_020ac6b8(&var6->playTime_0_, seconds);

    timestamp = GetCurrentTimestamp();
    gameState->mainTimestamp_ = timestamp;

    if (isMultiplayerTimeIncluded != 0) {
        PlayTime_020ac4f8* multiplayerTime;
        GetElapsedMultiplayerTime_020104cc((struct GameState_020104cc*)gameState, &hours, &minutes, &seconds);
        multiplayerTime = &records.playTimes_0_.multiplayerTime_4_;

        AddPlayTimeHours_020ac614(multiplayerTime, hours);
        AddPlayTimeMinutes_020ac644(multiplayerTime, minutes);
        AddPlayTimeSeconds_020ac6b8(multiplayerTime, seconds);

        AddPlayTimeHours_020ac614(&var6->multiplayerTime_4_, hours);
        AddPlayTimeMinutes_020ac644(&var6->multiplayerTime_4_, minutes);
        AddPlayTimeSeconds_020ac6b8(&var6->multiplayerTime_4_, seconds);

        timestamp = GetCurrentTimestamp();
        gameState->altTimestamp_ = timestamp;
    }

    return SetBattleRecords_020ac494(&records);
}
