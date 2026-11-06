#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020465f0_2306 = 0x7d2 };
#else
enum { Enum_020465f0_2306 = 0x902 };
#endif

// USA: SetMessageNumberWidth_020465f0
extern "C" ARM void SetMessageNumberWidth_020465f0(unsigned char* window, int index, unsigned char width) {
    if (index < 0) {
        return;
    }
    if (index < 0x10) {
        (window + index)[Enum_020465f0_2306] = width;
    }
}
