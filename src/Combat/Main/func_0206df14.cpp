#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void SetStoryChapter_02010774(char* gameState, int chapter);
extern "C" void SetStoryStep_020107a8(char* gameState, int step);
extern "C" void SetStorySubStep_020107dc(char* gameState, int subStep);

// USA: func_0206df14
extern "C" ARM void func_0206df14(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    SetStoryChapter_02010774((char*)var0, (arg0 + arg0[0x332] * 0x1c)[0]);
    SetStoryStep_020107a8((char*)var0, (arg0 + arg0[0x332] * 0x1c)[1]);
    SetStorySubStep_020107dc((char*)var0, (arg0 + arg0[0x332] * 0x1c)[2]);
}
