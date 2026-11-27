#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void SetPartyWipedOut_0201075c(char* gameState, unsigned char isWipedOut);

// USA: func_ov017_021d2428
extern "C" ARM void func_ov017_021d2428() {
	SetPartyWipedOut_0201075c((char*)GameState::GetInstance(), 1);
}
