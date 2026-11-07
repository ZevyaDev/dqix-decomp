#include <globaldefs.h>


extern "C" char* GetWifiConnectionBuffer_ov031_022133f8(int);
extern "C" void Memcpy32Bit_020ca408(void*, void*, int);

// USA: func_ov031_02213204
extern "C" ARM void func_ov031_02213204(int arg0, void *arg1) {
	char *var0 = GetWifiConnectionBuffer_ov031_022133f8(0x10);
	Memcpy32Bit_020ca408(arg1, var0 + (arg0 << 8), 0xf0);
}
