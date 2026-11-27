#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif


extern "C" unsigned char* func_0205ec34(void);

// USA: SetStorySubStep_020107dc
extern "C" ARM void SetStorySubStep_020107dc(char* gameState, int subStep) {
    unsigned char* storyRecord;
#if defined(jpn)
    *(int*)(gameState + 0x5a58) = subStep;
#else
    *(int*)(gameState + 0x5cb8) = subStep;
#endif
    storyRecord = func_0205ec34();
    storyRecord += storyRecord[0x332] * 0x1c;
    storyRecord[2] = (unsigned char)subStep;
}
