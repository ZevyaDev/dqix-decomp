#include <globaldefs.h>

#if defined(jpn)
#define func_020d2ff0 func_020d4a54
#endif

// USA: func_020d2ff0
extern "C" ARM int func_020d2ff0(const char* string) {
    int length = 0;
    if (string[length] != 0) {
        do {
            length++;
        } while (string[length] != 0);
    }
    return length;
}
