#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

// USA: GetBattleRecords_020ac4c0
extern "C" ARM int GetBattleRecords_020ac4c0(void* records) {
    char* recordsBase;
    memset(records, 0, 0xb0);
#if defined(jpn)
    recordsBase = (char*)GameState::GetInstance() + 0x2c4 + 0x7000;
#else
    recordsBase = (char*)GameState::GetInstance() + 0x104 + 0x7400;
#endif
    memcpy(records, recordsBase + 0x3c, 0xb0);
    return 1;
}
