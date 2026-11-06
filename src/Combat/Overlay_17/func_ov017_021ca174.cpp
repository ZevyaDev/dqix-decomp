#include <globaldefs.h>

extern "C" void* GetLocalWirelessPacketQueue_0202ae24(void);
extern "C" void QueueOutgoingPacket_0205e330(void* packetQueue, void* packet, int flags);

// USA: func_ov017_021ca174
extern "C" ARM void func_ov017_021ca174(unsigned short arg0) {
	void* var0 = GetLocalWirelessPacketQueue_0202ae24();
	unsigned char var1[0x14];
	var1[0] = 0x59;
	*(unsigned short*)(var1 + 4) = arg0;
	QueueOutgoingPacket_0205e330(var0, var1, 0);
}
