#if defined(jpn)
enum {Enum_ov017_021cc97c_2388=0x8bc};
#else
enum {Enum_ov017_021cc97c_2388=0x954};
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);
extern "C" int GetPartyMemberData_02053c6c(unsigned char* gameObject);

struct Struct_ov017_021cc97c {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_[12];
};

// USA: func_ov017_021cc97c
extern "C" ARM void func_ov017_021cc97c(int arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = GetPartyMemberBaseByIndex_0200ff1c(var0, arg0);
    if (var1 == NULL) return;
    int var2 = GetPartyMemberData_02053c6c((unsigned char*)var1);
    if (var2 == 0) return;

    void* var3 = GetLocalWirelessPacketQueue_0202ae24();
    Struct_ov017_021cc97c var4;
    var4.unknown_0_ = 0xb;
    var4.unknown_4_ = (unsigned short)arg0;
    var4.unknown_6_ = *(unsigned short*)((char*)var2 + Enum_ov017_021cc97c_2388);
    int var5;
    for (var5 = 0; var5 < 12; var5++) {
        var4.unknown_8_[var5] = *(unsigned char*)((char*)var2 + (var5 + 1) + 0x186);
    }
    QueueOutgoingPacket_0205e330(var3, &var4, 0);
}
