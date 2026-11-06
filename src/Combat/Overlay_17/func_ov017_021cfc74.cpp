#include <globaldefs.h>

extern "C" void GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessGuest_0202c540(void);
extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021cfc74 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	unsigned char unknown_4_;
	unsigned char unknown_5_[15];
};

// USA: func_ov017_021cfc74
extern "C" ARM void func_ov017_021cfc74(unsigned char arg0) {
	GetLocalWireless_0202ae18();
	if (IsLocalWirelessGuest_0202c540() == 0) {
		Struct_ov017_021cfc74 var0;
		void* var1 = GetLocalWirelessPacketQueue_0202ae24();
		var0.unknown_0_ = 0xa2;
		var0.unknown_4_ = arg0;
		QueueOutgoingPacket_0205e330(var1, &var0, 0);
	}
}
