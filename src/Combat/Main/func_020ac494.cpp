#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

// USA: SetBattleRecords_020ac494
extern "C" ARM int SetBattleRecords_020ac494(void* records) {
#if defined(jpn)
    int* recordsBase = (int*)((char*)GameState::GetInstance() + 0x2c4);
#else
    int* recordsBase = (int*)((char*)GameState::GetInstance() + 0x104);
#endif
#if defined(jpn)
    memcpy((char*)(recordsBase + 0x1c00) + 0x3c, records, 0xb0);
#else
    memcpy((char*)(recordsBase + 0x1d00) + 0x3c, records, 0xb0);
#endif
    return 1;
}
