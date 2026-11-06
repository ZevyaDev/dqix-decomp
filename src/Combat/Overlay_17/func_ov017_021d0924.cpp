#include <globaldefs.h>

extern "C" void GetLocalWireless_0202ae18(void);
extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

// USA: func_ov017_021d0924
extern "C" ARM void func_ov017_021d0924(unsigned char arg0, unsigned char arg1, unsigned short arg2, unsigned short arg3) {
	void* var0 = GetLocalWirelessPacketQueue_0202ae24();
	GetLocalWireless_0202ae18();
	unsigned char var1[0x14];
	unsigned char* var2 = var1 + 4;
	var1[0] = 0x9b;
	var2[0] = arg0;
	var2[1] = arg1;
	*(unsigned short*)(var2 + 2) = arg2;
	*(unsigned short*)(var2 + 4) = arg3;
	QueueOutgoingPacket_0205e330(var0, var1, 0);
}
