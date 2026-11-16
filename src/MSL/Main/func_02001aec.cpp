#include <globaldefs.h>
#include "std_library_functions.h"

// USA: CompareBytes_02001aec
extern "C" ARM int memcmp(const void* arg0, const void* arg1, unsigned int arg2) {
    const unsigned char* left = (const unsigned char*)arg0;
    const unsigned char* right = (const unsigned char*)arg1;
    unsigned int count = arg2;
    if (count != 0) {
        do {
            if (*left++ != *right++) {
                return (left[-1] < right[-1]) ? -1 : 1;
            }
        } while (--count != 0);
    }
    return 0;
}
