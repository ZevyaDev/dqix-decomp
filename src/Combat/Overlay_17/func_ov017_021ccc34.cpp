#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* GetPartyMemberBaseByIndex_0200ff1c(GameState* gameState, int index);
extern "C" int GetPartyMemberData_02053c6c(unsigned char* gameObject);
extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021ccc34 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned char unknown_4_0_ : 3;
    unsigned char unknown_4_3_ : 1;
    unsigned char unknown_4_4_ : 4;
    unsigned char unknown_5_[15];
};

struct Struct_ov017_021ccc34_2 {
    char unknown_0_[0x464];
    unsigned char unknown_464_;
};

// USA: func_ov017_021ccc34
extern "C" ARM void func_ov017_021ccc34(int arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = GetPartyMemberBaseByIndex_0200ff1c(var0, arg0);
    if (!var1) return;
    int var2 = GetPartyMemberData_02053c6c((unsigned char*)var1);
    if (!var2) return;

    void* var3 = GetLocalWirelessPacketQueue_0202ae24();
    struct Struct_ov017_021ccc34 var4;
    unsigned char var5 = (unsigned char)arg0;
    var4.unknown_0_ = 0xe;
    var4.unknown_4_0_ = var5;
    var4.unknown_4_3_ = 0;
    int var6;
    for (var6 = 0; var6 < 15; var6++) {
        var4.unknown_5_[var6] = *(unsigned char*)((char*)var2 + 0x464 + var6);
    }
    QueueOutgoingPacket_0205e330(var3, &var4, 0);

    var4.unknown_4_3_ = 1;
    for (var6 = 0; var6 < 12; var6++) {
        struct Struct_ov017_021ccc34_2* var7 = (struct Struct_ov017_021ccc34_2*)((char*)var2 + (var6 + 15));
        var4.unknown_5_[var6] = var7->unknown_464_;
    }
    QueueOutgoingPacket_0205e330(var3, &var4, 0);
}
