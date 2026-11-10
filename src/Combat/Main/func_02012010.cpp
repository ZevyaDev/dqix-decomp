#include <globaldefs.h>

// USA: SetTitleState_02012010
extern "C" ARM void SetTitleState_02012010(void* arg0, int state) {
    unsigned char* var0 = (unsigned char*)arg0;
#if defined(jpn)
    *(int*)(var0 + 0x7c98) = state;
#else
    *(int*)(var0 + 0x7f6c) = state;
#endif
}
