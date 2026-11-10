#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov000_02160f14_24 = 0x394, Enum_ov000_02160f14_3072 = 0x800 };
#else
enum { Enum_ov000_02160f14_24 = 0x18, Enum_ov000_02160f14_3072 = 0xc00 };
#endif

// USA: GetBattleCamera_ov000_02160f14
extern "C" ARM void* GetBattleCamera_ov000_02160f14(void* battleScene) {
    char* partialAddress = (char*)battleScene + Enum_ov000_02160f14_24;
    return partialAddress + Enum_ov000_02160f14_3072;
}
