#include <globaldefs.h>

// USA: GetTitleState_0201201c
extern "C" ARM int GetTitleState_0201201c(void* gameState) {
    unsigned char* gameStateBytes = (unsigned char*)gameState;
#if defined(jpn)
    return *(int*)(gameStateBytes + 0x7c98);
#else
    return *(int*)(gameStateBytes + 0x7f6c);
#endif
}
