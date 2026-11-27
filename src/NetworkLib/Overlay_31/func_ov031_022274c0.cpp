#include <globaldefs.h>
extern int gWifiSetup_ov031_02250c0c;
// USA: SetWifiSetupFrameHandler_ov031_022274c0
extern "C" ARM void SetWifiSetupFrameHandler_ov031_022274c0(int handler) {
	*(int*)((char*)&gWifiSetup_ov031_02250c0c + 0xc) = handler;
}
