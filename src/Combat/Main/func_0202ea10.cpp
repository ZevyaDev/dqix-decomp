#include <globaldefs.h>

// USA: ShakeCamera_0202ea10
extern "C" ARM void ShakeCamera_0202ea10(unsigned char* camera, int amplitude, int duration) {
    if (duration != 0) {
        *(int*)(camera + 0x1e4) = amplitude;
        *(int*)(camera + 0x1e8) = duration;
    }
}
