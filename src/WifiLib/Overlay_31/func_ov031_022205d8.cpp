#include <globaldefs.h>

extern "C" void GetMACAddress_020c99ac(void* macAddress);

// USA: func_ov031_022205d8
extern "C" THUMB int func_ov031_022205d8(void* arg0) {
    GetMACAddress_020c99ac(arg0);
    return 1;
}
