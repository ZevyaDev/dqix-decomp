#include <globaldefs.h>

struct Clear3DRegisters_020c5588 {
    volatile unsigned int colorAttributes_0_;
    volatile unsigned short depth_4_;
};

// USA: Set3DClearColorAndDepth_020c5588
extern "C" ARM void Set3DClearColorAndDepth_020c5588(int color, int alpha, int depth, int polygonId, int isFogEnabled) {
    struct Clear3DRegisters_020c5588* registers = (struct Clear3DRegisters_020c5588*)0x4000350;
    unsigned int colorAttributes = color | (alpha << 16) | (polygonId << 24);
    if (isFogEnabled) colorAttributes |= 0x8000;
    registers->colorAttributes_0_ = colorAttributes;
    registers->depth_4_ = depth;
}
