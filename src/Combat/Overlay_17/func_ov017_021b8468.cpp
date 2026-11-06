#include <globaldefs.h>

// USA: GetBattleScene_ov017_021b8468
extern "C" ARM void* GetBattleScene_ov017_021b8468(void* battleManager) {
    return *(void**)((char*)battleManager + 0x6ac);
}
