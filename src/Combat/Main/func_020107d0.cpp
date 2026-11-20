#include <globaldefs.h>

// USA: GetStoryStep_020107d0
extern "C" ARM int GetStoryStep_020107d0(char* gameState) {
#if defined(jpn)
    return *(int*)(gameState + 0x5a54);
#else
    return *(int*)(gameState + 0x5cb4);
#endif
}
