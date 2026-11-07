#include <globaldefs.h>

extern "C" void* func_ov031_0223c760(void*);
extern char* data_ov031_02290d38;

// USA: CloseScreenTextLayer_ov031_0223c7c4
extern "C" ARM void* CloseScreenTextLayer_ov031_0223c7c4(int isSubScreen) {
	char* textLayers = data_ov031_02290d38 + 0x610;
	return func_ov031_0223c760(textLayers + isSubScreen * 0x30);
}
