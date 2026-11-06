#include <globaldefs.h>

// USA: GetStringLength_020d2ff0
extern "C" ARM int GetStringLength_020d2ff0(const char* string) {
    int length = 0;
    if (string[length] != 0) {
        do {
            length++;
        } while (string[length] != 0);
    }
    return length;
}
