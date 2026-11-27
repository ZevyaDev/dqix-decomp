#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

// USA: SetAlchemyCount_020ac08c
extern "C" ARM int SetAlchemyCount_020ac08c(void* count) {
#if defined(jpn)
    memcpy((char*)GameState::GetInstance() + 0x7880, count, 4);
#else
    memcpy((char*)GameState::GetInstance() + 0x7ac0, count, 4);
#endif
    return 1;
}
