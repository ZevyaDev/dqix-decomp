#include <globaldefs.h>
#include "std_library_functions.h"


extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsNotLocalWirelessGuest_0202c508(void* wireless);
extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void* GetFlagManager_0205ec34(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021d2184 {
    unsigned char unknown_0_[14];
    unsigned short unknown_e_0_ : 4;
    unsigned short unknown_e_4_ : 2;
    unsigned short unknown_e_6_ : 10;
};

struct Struct_ov017_021d2184_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    struct Struct_ov017_021d2184 unknown_4_;
};

// USA: func_ov017_021d2184
extern "C" ARM void func_ov017_021d2184(unsigned short arg0) {
    if (IsNotLocalWirelessGuest_0202c508(GetLocalWireless_0202ae18())) {
        struct Struct_ov017_021d2184_2 var0;
        void* var1 = GetLocalWirelessPacketQueue_0202ae24();
        struct Struct_ov017_021d2184* var2 = &var0.unknown_4_;
        var0.unknown_0_ = 0x9c;
        var2->unknown_e_4_ = arg0;
        char* var3 = (char*)GetFlagManager_0205ec34() + 0x2cc;
        int var4 = 0x66;
        unsigned char var5 = 0;
        while (var4 > 0) {
            if (var4 > 14) {
                var2->unknown_e_0_ = 14;
            } else {
                var2->unknown_e_0_ = var4;
            }
            var2->unknown_e_6_ = var5;
            memcpy(var2->unknown_0_, var3, var2->unknown_e_0_);
            QueueOutgoingPacket_0205e330(var1, &var0, 0);
            var3 += 14;
            var4 -= 14;
            var5 = (unsigned char)(var5 + 1);
        }
    }
}
