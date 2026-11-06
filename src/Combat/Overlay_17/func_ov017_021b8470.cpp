#include <globaldefs.h>

// USA: GetBattle_ov017_021b8470
extern "C" ARM void* GetBattle_ov017_021b8470(void* battleManager) {
    return *(void**)((char*)battleManager + 0x6b0);
}
