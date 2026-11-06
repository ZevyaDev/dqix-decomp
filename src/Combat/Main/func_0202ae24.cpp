#include <globaldefs.h>

extern int gLocalWirelessPacketQueue_02100044;

// USA: GetLocalWirelessPacketQueue_0202ae24
extern "C" ARM void* GetLocalWirelessPacketQueue_0202ae24(void) {
    return &gLocalWirelessPacketQueue_02100044;
}
