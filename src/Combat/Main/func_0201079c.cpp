#include <globaldefs.h>

// USA: GetStoryChapter_0201079c
extern "C" ARM int GetStoryChapter_0201079c(char* gameState) {
#if defined(jpn)
    return *(int*)(gameState + 0x5a50);
#else
    return *(int*)(gameState + 0x5cb0);
#endif
}
