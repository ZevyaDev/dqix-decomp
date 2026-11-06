#include <globaldefs.h>

struct LocalWireless_0202c1a4 {
	char unknown_0_[0x1038];
	signed char protagonistObjectIndexByConsole_1038_[16];
};

extern "C" int* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
extern "C" signed char GetOwnProtagonistObjectIndex_0202c1a4(struct LocalWireless_0202c1a4* wireless);
extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

struct Struct_ov017_021d1dc0 {
	short unknown_0_;
	short unknown_2_;
	short unknown_4_;
	short unknown_6_;
	short unknown_8_;
	short unknown_a_;
	short unknown_c_;
};

struct Struct_ov017_021d1dc0_2 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	Struct_ov017_021d1dc0 unknown_4_;
	unsigned char unknown_12_[2];
};

// USA: func_ov017_021d1dc0
extern "C" ARM void func_ov017_021d1dc0(unsigned short arg0, int arg1, int* arg2, int arg3, int arg4) {
	if (!IsLocalWirelessOn_0202b7d8(GetLocalWireless_0202ae18())) return;
	if (GetOwnProtagonistObjectIndex_0202c1a4((struct LocalWireless_0202c1a4*)GetLocalWireless_0202ae18()) != 0) return;
	void* var0 = GetLocalWirelessPacketQueue_0202ae24();

	struct Struct_ov017_021d1dc0_2 var1;
	var1.unknown_0_ = 0xb5;
	var1.unknown_4_.unknown_0_ = arg0;
	var1.unknown_4_.unknown_2_ = arg1;
	var1.unknown_4_.unknown_4_ = arg3;
	var1.unknown_4_.unknown_6_ = (short)arg4;
	var1.unknown_4_.unknown_8_ = (short)(arg2[0] >> 7);
	var1.unknown_4_.unknown_a_ = (short)(arg2[1] >> 7);
	var1.unknown_4_.unknown_c_ = (short)(arg2[2] >> 7);
	QueueOutgoingPacket_0205e330(var0, &var1, 0);
}
