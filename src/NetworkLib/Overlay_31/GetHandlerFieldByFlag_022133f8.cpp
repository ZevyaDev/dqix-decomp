#include <globaldefs.h>

struct Struct_ov031_0224e5c4 {
	void* unknown_0_;
	void* unknown_4_;
	void* unknown_8_;
	void* unknown_c_;
	void* unknown_10_;
};

extern Struct_ov031_0224e5c4 gWifiConnectionBuffers_ov031_0224e5c4;

// USA: GetWifiConnectionBuffer_ov031_022133f8
extern "C" ARM void* GetWifiConnectionBuffer_ov031_022133f8(unsigned int bufferFlag) {
	if (bufferFlag & 1) return gWifiConnectionBuffers_ov031_0224e5c4.unknown_c_;
	if (bufferFlag & 2) return gWifiConnectionBuffers_ov031_0224e5c4.unknown_0_;
	if (bufferFlag & 4) return gWifiConnectionBuffers_ov031_0224e5c4.unknown_4_;
	if (bufferFlag & 8) return gWifiConnectionBuffers_ov031_0224e5c4.unknown_8_;
	if (bufferFlag & 0x10) return gWifiConnectionBuffers_ov031_0224e5c4.unknown_10_;
	return NULL;
}
