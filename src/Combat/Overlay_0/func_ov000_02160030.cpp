#include <globaldefs.h>
#include "std_library_functions.h"

// USA: InitBattleAction_ov000_02160030
extern "C" ARM void InitBattleAction_ov000_02160030(void* action) {
    memset(action, 0, 0x28);
    *(short*)((char*)action + 0x6) = -1;
    memset((char*)action + 0x18, 0, 0xe);
    *(short*)((char*)action + 0x24) = 0;
}
