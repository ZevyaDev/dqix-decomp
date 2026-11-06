#include <globaldefs.h>

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021d0aa8 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
};

struct Struct_ov017_021d0aa8_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021d0aa8 unknown_4_;
    unsigned char unknown_8_[12];
};

// USA: func_ov017_021d0aa8
extern "C" ARM void func_ov017_021d0aa8(unsigned short arg0, unsigned char arg1) {
    Struct_ov017_021d0aa8_2 var0;
    void* var1 = GetLocalWirelessPacketQueue_0202ae24();
    Struct_ov017_021d0aa8* var2 = &var0.unknown_4_;
    var0.unknown_0_ = 0x8c;
    var2->unknown_0_ = arg0;
    var2->unknown_2_ = arg1;
    QueueOutgoingPacket_0205e330(var1, &var0, 0);
}
