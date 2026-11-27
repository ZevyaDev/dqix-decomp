#include <globaldefs.h>

// USA: GetStorySubStep_02010804
extern "C" ARM int GetStorySubStep_02010804(char* gameState) {
#if defined(jpn)
    return *(int*)(gameState + 0x5a58);
#else
    return *(int*)(gameState + 0x5cb8);
#endif
}
