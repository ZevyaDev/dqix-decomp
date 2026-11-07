#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

// USA: GetAlchemyCount_020ac0b4
extern "C" ARM int GetAlchemyCount_020ac0b4(void* count) {
#if defined(jpn)
    memcpy(count, (char*)GameState::GetInstance() + 0x7880, 4);
#else
    memcpy(count, (char*)GameState::GetInstance() + 0x7ac0, 4);
#endif
    return 1;
}
