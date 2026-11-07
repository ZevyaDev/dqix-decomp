#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020535c8_380 = 0x170 };
#else
enum { Enum_020535c8_380 = 0x17c };
#endif

// USA: IsPerformingGesture_020535c8
extern "C" ARM int IsPerformingGesture_020535c8(signed char* gameObject) {
    return gameObject[Enum_020535c8_380] > 0;
}
