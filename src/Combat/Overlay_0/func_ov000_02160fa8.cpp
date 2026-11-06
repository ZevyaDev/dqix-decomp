#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov000_02160fa8_22004 = 0x57e4 };
#else
enum { Enum_ov000_02160fa8_22004 = 0x55f4 };
#endif

// USA: SetBattleSceneFlags_ov000_02160fa8
extern "C" ARM void SetBattleSceneFlags_ov000_02160fa8(void* battleScene, int flags) {
    *(int*)((char*)battleScene + Enum_ov000_02160fa8_22004) |= flags;
}
