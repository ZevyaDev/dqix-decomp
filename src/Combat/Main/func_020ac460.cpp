#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

// USA: GetEarnedAccoladeBits_020ac460
extern "C" ARM int GetEarnedAccoladeBits_020ac460(void* earnedBits) {
    memset(earnedBits, 0, 0x3c);
#if defined(jpn)
    memcpy(earnedBits, (char*)GameState::GetInstance() + 0x2c4 + 0x7000, 0x3c);
#else
    memcpy(earnedBits, (char*)GameState::GetInstance() + 0x104 + 0x7400, 0x3c);
#endif
    return 1;
}
