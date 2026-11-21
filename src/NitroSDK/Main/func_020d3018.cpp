#include <globaldefs.h>

// USA: CompareStrings_020d3018
extern "C" ARM int CompareStrings_020d3018(const char* left, const char* right) {
    while (*left == *right && *left != 0) {
        left++;
        right++;
    }
    return *left - *right;
}
