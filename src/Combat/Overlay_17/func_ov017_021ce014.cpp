#include <globaldefs.h>

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021ce014 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	unsigned short unknown_4_;
	unsigned short unknown_6_;
	unsigned short unknown_8_;
	unsigned char unknown_a_[10];
};

// USA: func_ov017_021ce014
extern "C" ARM void func_ov017_021ce014(int arg0, unsigned short arg1, unsigned short arg2, unsigned short arg3) {
	Struct_ov017_021ce014 var0;
	void* var1 = GetLocalWirelessPacketQueue_0202ae24();
	var0.unknown_0_ = 0x11;
	var0.unknown_4_ = arg1;
	var0.unknown_6_ = arg2;
	var0.unknown_8_ = arg3;
	QueueOutgoingPacket_0205e330(var1, &var0, 0);
}
