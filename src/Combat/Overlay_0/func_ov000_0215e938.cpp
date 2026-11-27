#include <globaldefs.h>

// USA: GetNextActionTarget_ov000_0215e938
extern "C" ARM void* GetNextActionTarget_ov000_0215e938(void* battle) {
	unsigned char targetCount = *((unsigned char*)battle + 0x8e01);
	if (targetCount >= 0x88) {
		return 0;
	}
	return (char*)battle + 0xec0 + targetCount * 0x24;
}
