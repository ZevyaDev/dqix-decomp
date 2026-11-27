#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020108f0_2404 = 0x8cc };
#else
enum { Enum_020108f0_2404 = 0x964 };
#endif


// USA: FindPartyMemberDataByIndex_020108f0
extern "C" ARM void* FindPartyMemberDataByIndex_020108f0(void* gameState, int memberIndex) {
    if (memberIndex < 0 || memberIndex >= 4) {
        return NULL;
    }
    for (int i = 0; i < 4; i++) {
        int blockOffset = i * Enum_020108f0_2404;
        short ownerIndex = *(short*)((char*)gameState + blockOffset + 0x9dc);
        if (memberIndex == ownerIndex) {
            return (char*)gameState + 0x74 + 0x400 + blockOffset;
        }
    }
    return NULL;
}
