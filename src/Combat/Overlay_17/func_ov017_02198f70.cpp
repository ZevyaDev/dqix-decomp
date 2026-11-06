#include <globaldefs.h>


extern "C" void* GetFlagManager_0205ec34(void);

// USA: func_ov017_02198f70
extern "C" ARM void func_ov017_02198f70(void* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)GetFlagManager_0205ec34();
    var0[0x491] = arg1;
}
