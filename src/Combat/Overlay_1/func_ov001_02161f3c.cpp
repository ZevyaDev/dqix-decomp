#include <globaldefs.h>

extern "C" void* GetZone3D_02012fe4(void);
extern "C" int GetScriptValueAsInt_ov017_021d60f4(void*);

// USA: func_ov001_02161f3c
extern "C" ARM int func_ov001_02161f3c(void* arg0) {
    void* var0 = GetZone3D_02012fe4();
    int var1 = GetScriptValueAsInt_ov017_021d60f4(arg0);
#if defined(jpn)
    *(int*)((char*)var0 + 0x2790) = var1;
#else
    *(int*)((char*)var0 + 0x2750) = var1;
#endif
    return 1;
}
