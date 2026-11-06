#include <globaldefs.h>

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021cc68c {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_[14];
};

// USA: func_ov017_021cc68c
extern "C" ARM void func_ov017_021cc68c(int arg0) {
    Struct_ov017_021cc68c var0;
    void* var1 = GetLocalWirelessPacketQueue_0202ae24();
    var0.unknown_0_ = 9;
    var0.unknown_5_ = (unsigned char)arg0;
    var0.unknown_4_ = 1;
    QueueOutgoingPacket_0205e330(var1, &var0, 0);
}
