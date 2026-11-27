#include <globaldefs.h>

unsigned long long GetCurrentTimestamp(void);
extern "C" unsigned long long _ll_udiv(unsigned long long arg0, unsigned long long arg1);
extern "C" unsigned int _ull_mod(unsigned long long arg0, unsigned long long arg1);

struct GameState_020103f0 {
    unsigned char unknown_0_[0x3e8];
    long long mainTimestamp_3e8_;   // 0x3e8
};

// USA: GetElapsedPlayTime_020103f0
extern "C" ARM void GetElapsedPlayTime_020103f0(GameState_020103f0* gameState, unsigned short* hours, unsigned char* minutes, unsigned char* seconds) {
    unsigned long long totalSeconds = _ll_udiv(GetCurrentTimestamp() << 6, 0x1ff6210)
                                - _ll_udiv(gameState->mainTimestamp_3e8_ << 6, 0x1ff6210);
    unsigned long long totalHours = _ll_udiv(totalSeconds, 3600);
    unsigned int remainingMinutes = _ull_mod(_ll_udiv(totalSeconds, 60), 60);
    unsigned int remainingSeconds = _ull_mod(totalSeconds, 60);
    if (totalHours > 10000) totalHours = 9999;
    *hours = (unsigned short)totalHours;
    *minutes = remainingMinutes;
    *seconds = remainingSeconds;
}
