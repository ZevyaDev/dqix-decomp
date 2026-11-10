#include <globaldefs.h>

extern int gBattleNumberPopups_02104b6c;

// USA: GetBattleNumberPopups_02039e70
extern "C" ARM void* GetBattleNumberPopups_02039e70(void) {
    return &gBattleNumberPopups_02104b6c;
}
