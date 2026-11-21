#include <globaldefs.h>

struct GameState_0200f3a4_9 {
    char unknown_0_[0x3b4];
    int effectiveDeltaTimeMilliseconds_3b4_;
    int trueDeltaTimeMilliseconds_3b8_;
    unsigned short gameSpeed_3bc_;
    char unknown_3be_[2];
    int animationDeltaTime_3c0_;
    int numTicks_3c4_;
};

// USA: ResetGameSpeedAndDeltaTime_02010124
extern "C" ARM void ResetGameSpeedAndDeltaTime_02010124(struct GameState_0200f3a4_9* gameState) {
    gameState->effectiveDeltaTimeMilliseconds_3b4_ = 0x21;
    gameState->trueDeltaTimeMilliseconds_3b8_ = 0x21;
    gameState->gameSpeed_3bc_ = 0x1000;
    gameState->numTicks_3c4_ = 2;
    gameState->animationDeltaTime_3c0_ = 0x2000;
}
