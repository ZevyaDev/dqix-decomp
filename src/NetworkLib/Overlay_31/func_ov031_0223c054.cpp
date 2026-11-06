#include <globaldefs.h>

extern void* data_ov031_02290d34;

// USA: IsBrightnessFadeActive_ov031_0223c054
extern "C" ARM int IsBrightnessFadeActive_ov031_0223c054(int useSubScreen) {
	char* fade;
	if (useSubScreen == 1) fade = (char*)data_ov031_02290d34;
	else fade = (char*)data_ov031_02290d34 + 0xc;
	return *(unsigned char*)(fade + 9);
}
