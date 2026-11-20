#include <globaldefs.h>

// USA: SetTitleState_02012010
extern "C" ARM void SetTitleState_02012010(void* gameState, int state) {
    unsigned char* gameStateBytes = (unsigned char*)gameState;
#if defined(jpn)
    *(int*)(gameStateBytes + 0x7c98) = state;
#else
    *(int*)(gameStateBytes + 0x7f6c) = state;
#endif
}
