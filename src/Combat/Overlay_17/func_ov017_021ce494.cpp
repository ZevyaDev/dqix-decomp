#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);
extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsNotLocalWirelessGuest_0202c508(void* wireless);

struct Struct_ov017_021ce494 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[0x13];
};

// USA: func_ov017_021ce494
extern "C" ARM void func_ov017_021ce494(void) {
	void* var0 = GetLocalWireless_0202ae18();
	if (IsNotLocalWirelessGuest_0202c508(var0) != 0) {
		return;
	}
	if (GameState::GetInstance()->GetPartyMemberByIndex(0xce) != NULL) {
		return;
	}
	Struct_ov017_021ce494 var1;
	void* var2 = GetLocalWirelessPacketQueue_0202ae24();
	var1.unknown_0_ = 0x28;
	QueueOutgoingPacket_0205e330(var2, &var1, 0);
}
