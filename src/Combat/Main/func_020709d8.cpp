#include <globaldefs.h>
#include "std_library_functions.h"

// USA: ClearMonsterBattleDataTable_020709d8
extern "C" ARM void *ClearMonsterBattleDataTable_020709d8(void *table) {
    return memset(table, 0, 0xc);
}
