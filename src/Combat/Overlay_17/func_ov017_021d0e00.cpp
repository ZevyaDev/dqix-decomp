#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" int GetPartyMemberData_02053c6c(unsigned char* gameObject);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021d0e00 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_[14];
};

// USA: func_ov017_021d0e00
extern "C" ARM void func_ov017_021d0e00(int arg0) {
    void* var0 = GetLocalWirelessPacketQueue_0202ae24();
    struct Struct_ov017_021d0e00 var1;
    var1.unknown_0_ = 0x18;
    unsigned char* var2 = &var1.unknown_4_;

    GameState* var3 = GameState::GetInstance();
    GameObject* var4 = var3->GetPartyMemberByIndex(arg0);
    if (!var4) return;
    int var5 = GetPartyMemberData_02053c6c((unsigned char*)var4);
    if (!var5) return;

    var2[0] = (unsigned char)arg0;
    var2[1] = *(unsigned char*)((char*)var5 + 0x56a);
    QueueOutgoingPacket_0205e330(var0, &var1, 0);
}
