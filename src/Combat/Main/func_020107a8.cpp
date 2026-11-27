#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif


extern "C" unsigned char* func_0205ec34(void);

// USA: SetStoryStep_020107a8
extern "C" ARM void SetStoryStep_020107a8(char* gameState, int step) {
#if defined(jpn)
    *(int*)(gameState + 0x5a54) = step;
#else
    *(int*)(gameState + 0x5cb4) = step;
#endif
    unsigned char* flagManager = func_0205ec34();
    unsigned char* storyRecord = flagManager + flagManager[0x332] * 0x1c;
    storyRecord[1] = step;
}
