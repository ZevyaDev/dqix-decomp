#include <globaldefs.h>

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021cf4b0 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	unsigned char unknown_4_;
	unsigned char unknown_5_;
	unsigned char unknown_6_[14];
};

// USA: func_ov017_021cf4b0
extern "C" ARM void func_ov017_021cf4b0(int arg0, int arg1) {
	void* var0 = GetLocalWirelessPacketQueue_0202ae24();
	Struct_ov017_021cf4b0 var1;
	var1.unknown_0_ = 0x39;
	var1.unknown_4_ = (unsigned char)arg0;
	var1.unknown_5_ = (unsigned char)arg1;
	QueueOutgoingPacket_0205e330(var0, &var1, 0);
}
