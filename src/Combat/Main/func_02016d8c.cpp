#include <globaldefs.h>
#include "NitroSDK/Graphics3D/RenderConfig.h"

#if defined(jpn)
#define func_020ca528 func_020cbff4
#endif

#if defined(jpn)
#define func_02016d8c func_02016b2c
#endif

extern "C" void func_020ca528(void* a, void* b);


// USA: func_02016d8c
extern "C" ARM void func_02016d8c(void* arg0) {
    func_020ca528(arg0, &g_nitro3DRenderConfig.objectRotationPosition);
    g_nitro3DRenderConfig.flags &= ~0xa4;
}
