#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02010954_2404 = 0x8cc };
#else
enum { Enum_02010954_2404 = 0x964 };
#endif

// USA: FindFreePartyMemberData_02010954
extern "C" ARM void* FindFreePartyMemberData_02010954(char* gameState) {
    int i;
    for (i = 0; i < 4; i++) {
        if (*(short*)(gameState + i * Enum_02010954_2404 + 0x9dc) < 0) {
            return gameState + 0x474 + i * Enum_02010954_2404;
        }
    }
    return NULL;
}
