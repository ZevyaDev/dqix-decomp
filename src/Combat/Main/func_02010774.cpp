#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif


extern "C" unsigned char* func_0205ec34(void);

// USA: SetStoryChapter_02010774
extern "C" ARM void SetStoryChapter_02010774(char* gameState, int chapter) {
#if defined(jpn)
    *(int*)(gameState + 0x5a50) = chapter;
#else
    *(int*)(gameState + 0x5cb0) = chapter;
#endif
    unsigned char* flagManager = func_0205ec34();
    flagManager[flagManager[0x332] * 0x1c] = chapter;
}
