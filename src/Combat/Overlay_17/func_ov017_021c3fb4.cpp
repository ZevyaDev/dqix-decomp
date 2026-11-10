#include <globaldefs.h>
#include "GameState/GameState.h"

struct PartyMember_02052e14;
extern "C" short* GetEquippedItems_02052e14(struct PartyMember_02052e14* gameObject);
extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct EquippedItemsPacket_ov017_021c3fb4 {
    unsigned char kind_0_;
    unsigned char unknown_1_[3];
    unsigned char memberIndex_4_0_ : 4;
    unsigned char requestsModelLoad_4_4_ : 1;
    unsigned char slots_5_[5];
    short itemIds_a_[5];
};

// USA: SendPartyMemberEquippedItems_ov017_021c3fb4
extern "C" ARM void SendPartyMemberEquippedItems_ov017_021c3fb4(int memberIndex, int requestModelLoad) {
    GameState* gameState = GameState::GetInstance();
    GameObject* partyMemberBase = GetPartyMemberBaseByIndex_0200ff1c(gameState, memberIndex);
    if (partyMemberBase == NULL) return;

    short* equippedItems = GetEquippedItems_02052e14((struct PartyMember_02052e14*)partyMemberBase);
    if (equippedItems == NULL) return;

    void* packetQueue = GetLocalWirelessPacketQueue_0202ae24();

    struct EquippedItemsPacket_ov017_021c3fb4 packet;
    packet.kind_0_ = 2;
    packet.memberIndex_4_0_ = memberIndex;

    packet.slots_5_[0] = 0;
    packet.itemIds_a_[0] = equippedItems[0];
    packet.slots_5_[1] = 1;
    packet.itemIds_a_[1] = equippedItems[1];
    packet.slots_5_[2] = 2;
    packet.itemIds_a_[2] = equippedItems[2];
    packet.slots_5_[3] = 3;
    packet.itemIds_a_[3] = equippedItems[3];
    packet.slots_5_[4] = 4;
    packet.itemIds_a_[4] = equippedItems[4];
    packet.requestsModelLoad_4_4_ = 0;
    QueueOutgoingPacket_0205e330(packetQueue, &packet, 0);

    packet.slots_5_[0] = 5;
    packet.itemIds_a_[0] = equippedItems[5];
    packet.slots_5_[1] = 6;
    packet.itemIds_a_[1] = equippedItems[6];
    packet.slots_5_[2] = 7;
    packet.itemIds_a_[2] = equippedItems[7];
    packet.slots_5_[3] = 8;
    packet.itemIds_a_[3] = equippedItems[8];
    packet.slots_5_[4] = 9;
    packet.itemIds_a_[4] = equippedItems[9];
    packet.requestsModelLoad_4_4_ = requestModelLoad;
    QueueOutgoingPacket_0205e330(packetQueue, &packet, 0);
}
