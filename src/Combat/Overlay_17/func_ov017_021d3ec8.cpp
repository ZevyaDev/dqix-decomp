#include <globaldefs.h>

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021d3ec8 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[0x13];
};

// USA: func_ov017_021d3ec8
extern "C" ARM void func_ov017_021d3ec8(void) {
    Struct_ov017_021d3ec8 var0;
    void* var1 = GetLocalWirelessPacketQueue_0202ae24();
    var0.unknown_0_ = 0xa7;
    QueueOutgoingPacket_0205e330(var1, &var0, 0);
}
