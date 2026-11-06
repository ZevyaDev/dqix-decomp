#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020465d8_2289 = 0x7c1 };
#else
enum { Enum_020465d8_2289 = 0x8f1 };
#endif

// USA: SetMessageNumberAlignment_020465d8
extern "C" ARM void SetMessageNumberAlignment_020465d8(unsigned char* window, int index, unsigned char alignment) {
    if (index < 0) {
        return;
    }
    if (index < 0x10) {
        (window + index)[Enum_020465d8_2289] = alignment;
    }
}
