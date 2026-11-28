#include <globaldefs.h>

// USA: SetStoryProgress_02010810
extern "C" ARM void SetStoryProgress_02010810(char* gameState, int progress) {
#if defined(jpn)
    *(int*)(gameState + 0x5a5c) = progress;
#else
    *(int*)(gameState + 0x5cbc) = progress;
#endif
}
