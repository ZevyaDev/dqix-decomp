#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void UpdateQuestDisplay_0208bb78(void* display, int ticks);

// USA: func_ov004_021678d8
extern "C" ARM void func_ov004_021678d8(void* arg0) {
    unsigned char var0 = *((unsigned char*)arg0 + 0xc);
    if (var0 & 0x10) return;
    unsigned int var1 = GameState::GetInstance()->GetTickCount();
    if (var1 == 0) var1 = 1;
    UpdateQuestDisplay_0208bb78((char*)arg0 + 0x34, var1);
}
