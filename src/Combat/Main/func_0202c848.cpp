#include <globaldefs.h>

extern char gLocalWirelessLink_021015a0;

// USA: SetLocalWirelessLinkError_0202c848
extern "C" ARM void SetLocalWirelessLinkError_0202c848(int errorCode) {
    if ((unsigned)(*(int*)(&gLocalWirelessLink_021015a0 + 0x10) - 9) > 1)
        *(int*)(&gLocalWirelessLink_021015a0 + 0x48) = errorCode;
}
