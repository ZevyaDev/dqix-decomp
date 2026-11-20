#include <globaldefs.h>
extern int data_ov031_02250c0c;
// USA: GetWifiSetupPageArguments_ov031_02227520
extern "C" ARM void GetWifiSetupPageArguments_ov031_02227520(int* outFirstArgument, int* outSecondArgument) {
	if (outFirstArgument) *outFirstArgument = *(int*)((char*)&data_ov031_02250c0c + 0x18);
	if (outSecondArgument) *outSecondArgument = *(int*)((char*)&data_ov031_02250c0c + 0x1c);
}
