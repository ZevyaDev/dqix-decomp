#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* GetPartyMemberBaseByIndex_0200ff1c(GameState* gameState, int index);
extern "C" int GetPartyMemberData_02053c6c(unsigned char* gameObject);
extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021ccb58 {
	unsigned char unknown_0_;
	char unknown_1_[3];
	unsigned int unknown_4_[3];
	unsigned short unknown_10_;
	unsigned char unknown_12_;
};

// USA: func_ov017_021ccb58
extern "C" ARM void func_ov017_021ccb58(int arg0, int arg1) {
	GameState* var0 = GameState::GetInstance();
	GameObject* var1 = GetPartyMemberBaseByIndex_0200ff1c(var0, arg0);
	if (!var1) return;
	unsigned char* var2 = (unsigned char*)GetPartyMemberData_02053c6c((unsigned char*)var1);
	if (!var2) return;

	void* var3 = GetLocalWirelessPacketQueue_0202ae24();
	Struct_ov017_021ccb58 var4;
	var4.unknown_0_ = 0xd;
	var4.unknown_10_ = (unsigned short)arg0;
	var4.unknown_12_ = (unsigned char)arg1;
	unsigned char var5 = 0;
	while (var5 < 3) {
		unsigned int var6 = *(unsigned int*)(var2 + (var5 + arg1) * 4 + 0x138);
		var4.unknown_4_[var5] = var6;
		var5++;
	}
	QueueOutgoingPacket_0205e330(var3, &var4, 0);
}
