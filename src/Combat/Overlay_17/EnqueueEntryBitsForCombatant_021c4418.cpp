#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" GameObject* GetPartyMemberBaseByIndex_0200ff1c(GameState* gameState, int index);
struct Struct_02052e2c;
extern "C" short* GetAppearance_02052e2c(struct Struct_02052e2c* gameObject);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Appearance_ov017_021c4418 {
    char unknown_0_[0x14];
    unsigned char gender_14_0_ : 1;
    unsigned char unknown_14_1_ : 3;
    unsigned char unknown_14_4_ : 4;
    unsigned char unknown_15_0_ : 4;
    unsigned char unknown_15_4_ : 4;
    short unknown_16_;
    short unknown_18_;
    short unknown_1a_;
};

struct BodyAppearancePacket_ov017_021c4418_2 {
    unsigned char kind_0_;
    unsigned char unknown_1_[3];
    unsigned char memberIndex_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    unsigned char gender_8_;
    unsigned char unknown_9_;
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    signed char recipientIndex_10_;
};

// USA: SendPartyMemberBodyAppearance_ov017_021c4418
extern "C" ARM void SendPartyMemberBodyAppearance_ov017_021c4418(int memberIndex, signed char recipientIndex) {
    GameState* gameState = GameState::GetInstance();
    void* packetQueue = GetLocalWirelessPacketQueue_0202ae24();
    GameObject* partyMemberBase = GetPartyMemberBaseByIndex_0200ff1c(gameState, memberIndex);
    if (!partyMemberBase) return;
    struct Appearance_ov017_021c4418* appearance = (struct Appearance_ov017_021c4418*)GetAppearance_02052e2c((struct Struct_02052e2c*)partyMemberBase);
    if (!appearance) return;

    struct BodyAppearancePacket_ov017_021c4418_2 packet;
    packet.kind_0_ = 1;
    packet.memberIndex_4_ = memberIndex;
    packet.unknown_5_ = appearance->unknown_15_0_;
    packet.unknown_6_ = appearance->unknown_14_4_;
    packet.unknown_7_ = appearance->unknown_14_1_;
    packet.gender_8_ = appearance->gender_14_0_;
    packet.unknown_a_ = appearance->unknown_16_;
    packet.unknown_c_ = appearance->unknown_18_;
    packet.unknown_e_ = appearance->unknown_1a_;
    packet.recipientIndex_10_ = recipientIndex;
    QueueOutgoingPacket_0205e330(packetQueue, &packet, 0);
}
