#include <globaldefs.h>

// USA: CompareBytes_02001aec
extern "C" ARM int CompareBytes_02001aec(unsigned char* left, unsigned char* right, int count) {
    if (count != 0) {
        do {
            if (*left++ != *right++) {
                return (left[-1] < right[-1]) ? -1 : 1;
            }
        } while (--count != 0);
    }
    return 0;
}
