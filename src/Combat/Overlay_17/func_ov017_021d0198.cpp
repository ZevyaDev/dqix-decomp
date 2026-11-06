#include <globaldefs.h>

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021d0198 {
	unsigned char unknown_0_;
	unsigned char unknown_1_;
	unsigned char unknown_2_;
	unsigned char unknown_3_;
	unsigned short unknown_4_;
};

struct Struct_ov017_021d0198_2 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	Struct_ov017_021d0198 unknown_4_;
	unsigned char unknown_a_[10];
};

// USA: func_ov017_021d0198
extern "C" ARM void func_ov017_021d0198(int arg0, int arg1, int arg2, int arg3) {
	Struct_ov017_021d0198_2 var0;
	void* var1 = GetLocalWirelessPacketQueue_0202ae24();
	var0.unknown_0_ = 0xaa;
	Struct_ov017_021d0198* var2 = &var0.unknown_4_;
	var2->unknown_0_ = (unsigned char)arg0;
	var2->unknown_1_ = (unsigned char)arg1;
	var2->unknown_2_ = (unsigned char)arg2;
	var2->unknown_4_ = (unsigned short)arg3;
	QueueOutgoingPacket_0205e330(var1, &var0, 0);
}
