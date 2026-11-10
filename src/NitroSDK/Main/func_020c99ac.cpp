#include <globaldefs.h>
#include "NitroSDK/Memory.h"

// USA: GetMACAddress_020c99ac
extern "C" ARM void GetMACAddress_020c99ac(void* macAddress) {
    VectorizedInvertedMemcpy((const void*)0x27ffcf4, macAddress, 6);
}
