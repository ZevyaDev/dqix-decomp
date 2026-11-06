#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "std_library_functions.h"

struct MessageString_02046574 { char text_0_[0x40]; };

struct Struct_02046574_2 {
    char unknown_0_[IS_JPN ? 0x37c : 0x4ac];
    struct MessageString_02046574 unknown_4ac_[16];
};

// USA: SetMessageString_02046574
extern "C" ARM void SetMessageString_02046574(struct Struct_02046574_2* window, int index, char* text) {
    if (text == NULL) return;
    if (index < 0) return;
    if (index >= 0x10) return;
    strncpy(window->unknown_4ac_[index].text_0_, text, 0x3f);
    window->unknown_4ac_[index].text_0_[0x3f] = 0;
}
