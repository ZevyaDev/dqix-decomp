#include <globaldefs.h>

#if defined(jpn)
#define BYTE_LOOKUP_COUNT 0x54c1
#define BYTE_LOOKUP_VALUES 0x54bd
#else
#define BYTE_LOOKUP_COUNT 0x5721
#define BYTE_LOOKUP_VALUES 0x571d
#endif

// USA: GetPartyOrderEntry_02011518
extern "C" ARM int GetPartyOrderEntry_02011518(void* gameState, unsigned int index) {
    if (index < ((unsigned char*)gameState)[BYTE_LOOKUP_COUNT]) {
        return ((signed char*)gameState + index)[BYTE_LOOKUP_VALUES];
    }
    return -1;
}
