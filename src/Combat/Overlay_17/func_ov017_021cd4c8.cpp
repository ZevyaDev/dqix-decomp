#include <globaldefs.h>

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

// USA: func_ov017_021cd4c8
extern "C" ARM void func_ov017_021cd4c8(unsigned short arg0, unsigned short arg1, signed char arg2) {
	void* var0 = GetLocalWirelessPacketQueue_0202ae24();
	unsigned char var1[0x14];
	var1[0] = 0x69;
	unsigned char* var2 = var1 + 4;
	*(unsigned short*)(var2 + 0) = arg0;
	*(unsigned short*)(var2 + 2) = arg1;
	var2[4] = arg2;
	var2[5] = 0;
	QueueOutgoingPacket_0205e330(var0, var1, 0);
}
