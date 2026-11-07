#include <globaldefs.h>
#include "std_library_functions.h"

// USA: ClearMonsterTable_0206efc4
extern "C" ARM void* ClearMonsterTable_0206efc4(void* monsterTable) {
    return memset(monsterTable, 0, 0xc);
}
