#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "World/Zone3D.h"

extern "C" void* GetZone3D_02012fe4(void* arg0);
extern "C" unsigned short GetScriptValueAsInt_ov017_021d60f4(void* value);

// USA: func_ov001_021622a0
extern "C" ARM int func_ov001_021622a0(void* arg0) {
    void* var0 = GetZone3D_02012fe4(arg0);
    unsigned short var1 = GetScriptValueAsInt_ov017_021d60f4(arg0);
    ((Zone3D*)var0)->SwitchZone(var1, 0);
    return 1;
}
