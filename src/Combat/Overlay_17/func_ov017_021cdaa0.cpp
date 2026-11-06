#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021cdaa0 {
    float unknown_0_;
};

struct Struct_ov017_021cdaa0_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021cdaa0 unknown_4_;
    unsigned char unknown_8_[12];
};

// USA: func_ov017_021cdaa0
extern "C" ARM void func_ov017_021cdaa0(void) {
    GameState* var0 = GameState::GetInstance();
    Struct_ov017_021cdaa0_2 var1;
    void* var2 = GetLocalWirelessPacketQueue_0202ae24();
    var1.unknown_0_ = 0x93;
    Struct_ov017_021cdaa0* var3 = &var1.unknown_4_;
    var3->unknown_0_ = var0->GetDayTimer();
    QueueOutgoingPacket_0205e330(var2, &var1, 0);
}
