#include <globaldefs.h>

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021d196c {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    int unknown_4_;
};

struct Struct_ov017_021d196c_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021d196c unknown_4_;
    unsigned char unknown_c_[8];
};

// USA: func_ov017_021d196c
extern "C" ARM void func_ov017_021d196c(unsigned short arg0, unsigned short arg1, int arg2) {
    Struct_ov017_021d196c_2 var0;
    void* var1 = GetLocalWirelessPacketQueue_0202ae24();
    Struct_ov017_021d196c* var2 = &var0.unknown_4_;
    var0.unknown_0_ = 0xaf;
    var2->unknown_0_ = arg0;
    var2->unknown_2_ = arg1;
    var2->unknown_4_ = arg2;
    QueueOutgoingPacket_0205e330(var1, &var0, 0);
}
