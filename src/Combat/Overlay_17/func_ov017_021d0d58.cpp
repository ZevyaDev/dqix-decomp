#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0202ae24 func_0202a9dc
#endif

extern "C" void* func_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct ReturnZonePacket_ov017_021d0d58 {
    unsigned char kind_0_;
    unsigned char unknown_1_[3];
    int returnZoneId_4_;
    unsigned char unknown_8_[12];
};

// USA: SendReturnZone_ov017_021d0d58
extern "C" ARM void SendReturnZone_ov017_021d0d58(void) {
    ReturnZonePacket_ov017_021d0d58 packet;
    void* packetQueue = func_0202ae24();
    char* party = (char*)GetParty_02010828(GameState::GetInstance());
    packet.kind_0_ = 0x17;
    packet.returnZoneId_4_ = *(int*)(party + 0x2000 + 0xc94);
    QueueOutgoingPacket_0205e330(packetQueue, &packet, 0);
}
