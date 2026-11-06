#include <globaldefs.h>

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021cf650 {
    int unknown_0_;
    int unknown_4_;
    unsigned short unknown_8_;
};

struct Struct_ov017_021cf650_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021cf650 unknown_4_;
    unsigned char unknown_10_[2];
};

// USA: func_ov017_021cf650
extern "C" ARM void func_ov017_021cf650(unsigned short arg0, int arg1, int arg2) {
    Struct_ov017_021cf650_2 var0;
    void* var1 = GetLocalWirelessPacketQueue_0202ae24();
    var0.unknown_0_ = 0x6d;
    Struct_ov017_021cf650* var2 = &var0.unknown_4_;
    var2->unknown_0_ = arg1;
    var2->unknown_4_ = arg2;
    var2->unknown_8_ = arg0;
    QueueOutgoingPacket_0205e330(var1, &var0, 0);
}
