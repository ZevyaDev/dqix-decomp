#include <globaldefs.h>

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021cbfb8 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
};

struct Struct_ov017_021cbfb8_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021cbfb8 unknown_4_;
    unsigned char unknown_8_[9];
};

// USA: func_ov017_021cbfb8
extern "C" ARM void func_ov017_021cbfb8(unsigned short arg0, unsigned char arg1) {
    Struct_ov017_021cbfb8_2 var0;
    void* var1 = GetLocalWirelessPacketQueue_0202ae24();
    var0.unknown_0_ = 0x81;
    Struct_ov017_021cbfb8* var2 = &var0.unknown_4_;
    var2->unknown_0_ = arg0;
    var2->unknown_2_ = arg1;
    QueueOutgoingPacket_0205e330(var1, &var0, 0);
}
