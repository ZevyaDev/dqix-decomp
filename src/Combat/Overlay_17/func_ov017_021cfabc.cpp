#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0202ae24 func_0202a9dc
#endif

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

extern "C" void* func_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
extern "C" int IsLocalWirelessGuest_0202c540(void* wireless);
extern "C" void* func_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

// USA: func_ov017_021cfabc
extern "C" ARM void func_ov017_021cfabc(void) {
    void* var0 = func_0202ae18();
    if (IsLocalWirelessOn_0202b7d8((int*)var0) != 0 && IsLocalWirelessGuest_0202c540(var0) == 0) {
        GameState::GetInstance();
        void* var1 = func_0202ae24();
        unsigned char var2[0x14];
        var2[0] = 0xa1;
        QueueOutgoingPacket_0205e330(var1, var2, 0);
    }
}
