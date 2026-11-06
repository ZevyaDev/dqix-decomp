#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* GetPartyMemberBaseByIndex_0200ff1c(GameState* gameState, int index);
extern "C" int GetPartyMemberData_02053c6c(unsigned char* gameObject);
extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021cca5c {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	unsigned short unknown_4_[6];
	unsigned short unknown_10_;
	unsigned char unknown_12_;
	unsigned char unknown_13_;
};

// USA: func_ov017_021cca5c
extern "C" ARM void func_ov017_021cca5c(int arg0, int arg1) {
	GameState* var0 = GameState::GetInstance();
	GameObject* var1 = GetPartyMemberBaseByIndex_0200ff1c(var0, arg0);
	if (!var1) return;

	unsigned char* var2 = (unsigned char*)GetPartyMemberData_02053c6c((unsigned char*)var1);
	if (!var2) return;

	void* var3 = GetLocalWirelessPacketQueue_0202ae24();

	Struct_ov017_021cca5c var4;
	var4.unknown_0_ = 0xc;
	var4.unknown_10_ = (unsigned short)arg0;
	unsigned char var5;
	if (arg1 == 0) {
		var5 = 1;
		var4.unknown_12_ = var5;
	} else {
		var5 = 7;
		var4.unknown_12_ = var5;
	}

	for (unsigned char var6 = 0; var6 < 6; var6++) {
		var4.unknown_4_[var6] = *(unsigned short*)(var2 + (var6 + var5) * 2 + 0x100 + 0x6c);
	}

	QueueOutgoingPacket_0205e330(var3, &var4, 0);
}
