#include <globaldefs.h>
#include "GameState/GameState.h"

int CheckBitsInField0x63dc(void* obj, int mask);

// USA: func_ov004_021688bc
ARM int CheckBattleStructBitsMask2_021688bc_021688bc(void) {
    CheckBitsInField0x63dc(GameState::GetInstance(), 2);
    return 0;
}
