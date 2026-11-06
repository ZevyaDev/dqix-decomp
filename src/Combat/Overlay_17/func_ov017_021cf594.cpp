#include <globaldefs.h>

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021cf594 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	unsigned short unknown_4_;
	unsigned char unknown_6_;
	unsigned char unknown_7_;
	unsigned char unknown_8_[12];
};

// USA: func_ov017_021cf594
extern "C" ARM void func_ov017_021cf594(unsigned short arg0, int arg1, int arg2) {
	Struct_ov017_021cf594 var0;
	void* var1 = GetLocalWirelessPacketQueue_0202ae24();
	var0.unknown_0_ = 0x3a;
	var0.unknown_4_ = arg0;
	var0.unknown_6_ = arg1;
	var0.unknown_7_ = arg2;
	QueueOutgoingPacket_0205e330(var1, &var0, 0);
}
