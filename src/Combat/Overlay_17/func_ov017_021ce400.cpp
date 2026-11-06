#include <globaldefs.h>

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);
extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsNotLocalWirelessGuest_0202c508(void* wireless);

struct Struct_ov017_021ce400 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    short unknown_4_;
    short unknown_6_;
    unsigned char unknown_8_[12];
};

// USA: func_ov017_021ce400
extern "C" ARM void func_ov017_021ce400(int arg0, int arg1) {
    void* var0 = GetLocalWirelessPacketQueue_0202ae24();
    if (IsNotLocalWirelessGuest_0202c508(GetLocalWireless_0202ae18()) != 0 && arg0 > 0) {
        Struct_ov017_021ce400 var1;
        var1.unknown_0_ = 0x27;
        var1.unknown_4_ = arg0;
        var1.unknown_6_ = arg1;
        QueueOutgoingPacket_0205e330(var0, &var1, 0);
    }
}
