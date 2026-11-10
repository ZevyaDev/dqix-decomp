#include <globaldefs.h>

// USA: SetTitleIdleTimeoutEnabled_02012028
extern "C" ARM void SetTitleIdleTimeoutEnabled_02012028(void* gameState, unsigned char isEnabled) {
#if defined(jpn)
    ((unsigned char*)gameState + 0x7000)[0xc9c] = isEnabled;
#else
    ((unsigned char*)gameState + 0x7000)[0xf70] = isEnabled;
#endif
}
