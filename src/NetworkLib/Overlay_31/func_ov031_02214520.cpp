#include <globaldefs.h>


extern "C" void* GetWifiConnectionBuffer_ov031_022133f8(unsigned int bufferFlag);
extern "C" void Memset32BitByWord_020ca3ec(int arg0, void *arg1, int arg2);
extern "C" int func_ov031_02214600(void *arg0);
extern "C" int func_ov031_02214854(void *arg0);
extern "C" int func_ov031_022148e4(void *arg0);
extern "C" int func_ov031_02214660(void *arg0);

// USA: func_ov031_02214520
extern "C" ARM int func_ov031_02214520(int arg0) {
	void* var0 = GetWifiConnectionBuffer_ov031_022133f8(0x10);
	switch (arg0) {
	case 0:
		Memset32BitByWord_020ca3ec(0, (char*)var0 + 0x300, 0x144);
		*((unsigned char*)var0 + 0xd10) = (unsigned char)func_ov031_02214600(var0);
		break;
	case 1:
		*((unsigned char*)var0 + 0xd10) = (unsigned char)func_ov031_02214854(var0);
		*((unsigned char*)var0 + 0xd0f) = (unsigned char)func_ov031_022148e4(var0);
		break;
	case 2:
		Memset32BitByWord_020ca3ec(0, (char*)var0 + 0x300, 0x144);
		*((unsigned char*)var0 + 0xd0f) = 0;
		*((unsigned char*)var0 + 0xd10) = (unsigned char)func_ov031_02214660(var0);
		break;
	}
	return *((unsigned char*)var0 + 0xd10);
}
