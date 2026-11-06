#include <globaldefs.h>

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

// USA: func_ov017_021ced48
extern "C" ARM void func_ov017_021ced48(unsigned char arg0, unsigned char arg1) {
    void* var0 = GetLocalWirelessPacketQueue_0202ae24();
    unsigned char var1[0x14];
    unsigned char* var2 = var1 + 4;
    var1[0] = 0x35;
    var2[0] = arg0;
    var2[1] = arg1;
    QueueOutgoingPacket_0205e330(var0, var1, 0);
}
