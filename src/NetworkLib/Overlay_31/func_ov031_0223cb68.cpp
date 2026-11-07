#include <globaldefs.h>

// USA: ShowScreenLayers_ov031_0223cb68
extern "C" ARM void ShowScreenLayers_ov031_0223cb68(int isSubScreen, int layerMask) {
	if (isSubScreen == 1) {
		unsigned int subLayerField = *(volatile unsigned int*)0x4001000 & 0x1f00;
		unsigned int subOtherFields = *(volatile unsigned int*)0x4001000 & ~0x1f00;
		*(volatile unsigned int*)0x4001000 = subOtherFields | ((layerMask | (subLayerField >> 8)) << 8);
	} else {
		unsigned int mainLayerField = *(volatile unsigned int*)0x4000000 & 0x1f00;
		unsigned int mainOtherFields = *(volatile unsigned int*)0x4000000 & ~0x1f00;
		*(volatile unsigned int*)0x4000000 = mainOtherFields | ((layerMask | (mainLayerField >> 8)) << 8);
	}
}
