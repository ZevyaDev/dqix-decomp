#include <globaldefs.h>

// USA: HideScreenLayers_ov031_0223cbbc
extern "C" ARM void HideScreenLayers_ov031_0223cbbc(int isSubScreen, int layerMask) {
	if (isSubScreen == 1) {
		unsigned int subKeepMask = ~layerMask;
		unsigned int subLayerField = *(volatile unsigned int*)0x4001000 & 0x1f00;
		unsigned int subOtherFields = *(volatile unsigned int*)0x4001000 & ~0x1f00;
		*(volatile unsigned int*)0x4001000 = subOtherFields | ((subKeepMask & (subLayerField >> 8)) << 8);
	} else {
		unsigned int mainLayerField = *(volatile unsigned int*)0x4000000 & 0x1f00;
		unsigned int mainOtherFields = *(volatile unsigned int*)0x4000000 & ~0x1f00;
		unsigned int mainKeepMask = ~layerMask;
		*(volatile unsigned int*)0x4000000 = mainOtherFields | ((mainKeepMask & (mainLayerField >> 8)) << 8);
	}
}
