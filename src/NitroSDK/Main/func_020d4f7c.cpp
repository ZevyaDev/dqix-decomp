#include <globaldefs.h>
extern "C" int func_020d4fa4(int, int, int, int);

// USA: StartWirelessDriver_020d4f7c
extern "C" ARM int StartWirelessDriver_020d4f7c(int wirelessDriver, int callback, int dmaChannel) {
    return func_020d4fa4((int)(wirelessDriver), (int)(callback), (int)(dmaChannel), (int)(0));
}
