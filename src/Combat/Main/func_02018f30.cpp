#include <globaldefs.h>
#include "NitroSDK/Graphics3D/Graphics3D.h"


#if defined(jpn)
enum { Enum_02018f30_1260 = 0x50c, Enum_02018f30_54 = 0x56 };
#else
enum { Enum_02018f30_1260 = 0x4ec, Enum_02018f30_54 = 0x36 };
#endif

// USA: func_02018f30
extern "C" ARM void func_02018f30(unsigned char* arg0) {
    int var0;
    for (var0 = 0; var0 < 2; var0++) {
        void* var1 = *(void**)(arg0 + var0 * 0xac + Enum_02018f30_1260);
        if (var1 != NULL) {
            Nitro3D_SetModelDiffuseColor((Nitro3DModel*)(var1), *(unsigned short*)(arg0 + Enum_02018f30_54));
        }
    }
}
