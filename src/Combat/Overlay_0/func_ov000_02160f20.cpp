#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov000_02160f20_668 = 0x218, Enum_ov000_02160f20_1804 = 0x8fc, Enum_ov000_02160f20_1496 = 0x7c8 };
#else
enum { Enum_ov000_02160f20_668 = 0x29c, Enum_ov000_02160f20_1804 = 0x70c, Enum_ov000_02160f20_1496 = 0x5d8 };
#endif

// USA: GetCurrentBattleAction_ov000_02160f20
extern "C" ARM void* GetCurrentBattleAction_ov000_02160f20(void* battleScene) {
    void* battle = *(void**)((char*)battleScene + Enum_ov000_02160f20_668);
    void* action;
    if (battle == 0) return 0;
    action = *(void**)((char*)battleScene + 0x7000 + Enum_ov000_02160f20_1804);
    if (action == 0) {
        int actionIndex = *(int*)((char*)battleScene + 0x5000 + Enum_ov000_02160f20_1496);
        action = (char*)battle + 0x21c + 0x8000 + actionIndex * 0x28;
    }
    return action;
}
