#include <globaldefs.h>

extern "C" long long ComputeFixedPointOctantSine_020c30ac(unsigned int, unsigned int);
extern "C" long long ComputeFixedPointOctantCosine_020c3194(unsigned int, unsigned int);

// USA: ComputeFixedPointSine_020c3260
extern "C" ARM long long ComputeFixedPointSine_020c3260(int angle) {
    long long octants;
    if (angle < 0) {
        return -ComputeFixedPointSine_020c3260(-angle);
    }
    octants = (long long)angle * 0x145F306DDLL;
    int octant = (int)(octants >> 44);
    unsigned long long octantFraction = (unsigned long long)((octants >> 12) & 0xFFFFFFFFULL);
    if (octant & 1) {
        octantFraction = 0x100000000ULL - octantFraction;
    }
    long long magnitude;
    if ((octant + 1) & 2) {
        magnitude = ComputeFixedPointOctantCosine_020c3194((unsigned int)octantFraction, (unsigned int)(octantFraction >> 32));
    } else {
        magnitude = ComputeFixedPointOctantSine_020c30ac((unsigned int)octantFraction, (unsigned int)(octantFraction >> 32));
    }
    if ((octant & 7) <= 3) {
        return magnitude;
    }
    return -magnitude;
}
