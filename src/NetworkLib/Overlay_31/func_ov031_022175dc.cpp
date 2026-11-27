#include <globaldefs.h>

extern "C" void UnpackWifiCredentials_ov031_0221ae00(void* credentials);
extern "C" void func_ov031_02217604(void* arg0, void* arg1);

// USA: func_ov031_022175dc
extern "C" ARM void func_ov031_022175dc(void* arg0) {
	unsigned int var0[5];
	UnpackWifiCredentials_ov031_0221ae00(var0);
	func_ov031_02217604(arg0, var0);
}
