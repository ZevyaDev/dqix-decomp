#include <globaldefs.h>

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021d1810 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
};

struct Struct_ov017_021d1810_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021d1810 unknown_4_;
    unsigned char unknown_a_[10];
};

// USA: func_ov017_021d1810
extern "C" ARM void func_ov017_021d1810(int arg0, int arg1, signed char arg2) {
    Struct_ov017_021d1810_2 var0;
    void* var1 = GetLocalWirelessPacketQueue_0202ae24();
    var0.unknown_0_ = 0xad;
    Struct_ov017_021d1810* var2 = &var0.unknown_4_;
    var2->unknown_0_ = arg0;
    var2->unknown_2_ = arg1;
    var2->unknown_4_ = arg2;
    QueueOutgoingPacket_0205e330(var1, &var0, 0);
}
