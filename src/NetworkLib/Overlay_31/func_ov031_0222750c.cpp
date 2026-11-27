#include <globaldefs.h>
extern int gWifiSetup_ov031_02250c0c;

// USA: SetWifiSetupPageArguments_ov031_0222750c
extern "C" ARM void SetWifiSetupPageArguments_ov031_0222750c(int firstArgument, int secondArgument) {
	*(int*)((char*)&gWifiSetup_ov031_02250c0c + 0x18) = firstArgument;
	*(int*)((char*)&gWifiSetup_ov031_02250c0c + 0x1c) = secondArgument;
}
