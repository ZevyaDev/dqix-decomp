#include <globaldefs.h>

extern "C" void Set3DClearColorAndDepth_020c5588(int color, int alpha, int depth, int polygonId, int isFogEnabled);

// USA: func_ov004_0216d7f8
extern "C" ARM int func_ov004_0216d7f8(void) {
	Set3DClearColorAndDepth_020c5588(0, 0, 0x7fff, 0x3f, 0);
	return 0;
}
