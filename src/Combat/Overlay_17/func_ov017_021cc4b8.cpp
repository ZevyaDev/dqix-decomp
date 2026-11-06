#include <globaldefs.h>

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021cc4b8 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	unsigned char unknown_4_;
	unsigned char unknown_5_;
	unsigned char unknown_6_[2];
	int unknown_8_;
	unsigned char unknown_c_[8];
};

// USA: func_ov017_021cc4b8
extern "C" ARM void func_ov017_021cc4b8(unsigned char arg0, unsigned char arg1, int arg2) {
	Struct_ov017_021cc4b8 var0;
	void* var1 = GetLocalWirelessPacketQueue_0202ae24();
	var0.unknown_0_ = 8;
	var0.unknown_4_ = arg0;
	var0.unknown_5_ = arg1;
	var0.unknown_8_ = arg2;
	QueueOutgoingPacket_0205e330(var1, &var0, 0);
}
