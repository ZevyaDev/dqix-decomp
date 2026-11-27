#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov000_02160fbc_22004 = 0x57e4 };
#else
enum { Enum_ov000_02160fbc_22004 = 0x55f4 };
#endif

// USA: ClearBattleSceneFlags_ov000_02160fbc
extern "C" ARM void ClearBattleSceneFlags_ov000_02160fbc(void* battleScene, int flags) {
    *(int*)((char*)battleScene + Enum_ov000_02160fbc_22004) &= ~flags;
}
