#include <globaldefs.h>
extern int gWifiSetup_ov031_02250c0c;

// USA: func_ov031_0222750c
extern "C" ARM void func_ov031_0222750c(int arg0, int arg1) {
	*(int*)((char*)&gWifiSetup_ov031_02250c0c + 0x18) = arg0;
	*(int*)((char*)&gWifiSetup_ov031_02250c0c + 0x1c) = arg1;
}
