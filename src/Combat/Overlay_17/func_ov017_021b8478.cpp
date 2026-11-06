#include <globaldefs.h>

// USA: GetBattleSetup_ov017_021b8478
extern "C" ARM void* GetBattleSetup_ov017_021b8478(void* battleManager) {
    return (char*)battleManager + 0x1c;
}
