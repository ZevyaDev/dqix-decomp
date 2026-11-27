#include <globaldefs.h>

// USA: SetMessageWindowTextureArena_02042b30
extern "C" ARM void SetMessageWindowTextureArena_02042b30(void* window, void* textureArena) {
#if defined(jpn)
    *(void**)((char*)window + 0x1c4c) = textureArena;
#else
    *(void**)((char*)window + 0x1e28) = textureArena;
#endif
}
