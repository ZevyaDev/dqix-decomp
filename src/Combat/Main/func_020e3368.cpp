#include <globaldefs.h>

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

extern "C" void* func_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);

// USA: QueueWirelessLockRequest_020e3368
extern "C" ARM void QueueWirelessLockRequest_020e3368(unsigned char* lockTable, unsigned char lockId) {
    unsigned char* requestSlot;
    int i;
    if (!IsLocalWirelessOn_0202b7d8((int*)func_0202ae18())) return;
    requestSlot = lockTable + 0x20;
    for (i = 0; i < 8; i++, requestSlot++) {
        if (*requestSlot == 0) {
            *requestSlot = lockId;
            return;
        }
    }
}
