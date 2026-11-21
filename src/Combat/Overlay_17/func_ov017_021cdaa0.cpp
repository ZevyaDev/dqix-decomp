#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0202ae24 func_0202a9dc
#endif

extern "C" void* func_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021cdaa0 {
    float dayTimer_0_;
};

struct DayTimerPacket_ov017_021cdaa0_2 {
    unsigned char kind_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021cdaa0 unknown_4_;
    unsigned char unknown_8_[12];
};

// USA: SendDayTimer_ov017_021cdaa0
extern "C" ARM void SendDayTimer_ov017_021cdaa0(void) {
    GameState* gameState = GameState::GetInstance();
    DayTimerPacket_ov017_021cdaa0_2 packet;
    void* packetQueue = func_0202ae24();
    packet.kind_0_ = 0x93;
    Struct_ov017_021cdaa0* body = &packet.unknown_4_;
    body->dayTimer_0_ = gameState->GetDayTimer();
    QueueOutgoingPacket_0205e330(packetQueue, &packet, 0);
}
