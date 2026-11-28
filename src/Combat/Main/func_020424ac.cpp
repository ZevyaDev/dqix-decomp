#include <globaldefs.h>

// USA: FindTagEnd_020424ac
extern "C" ARM char* FindTagEnd_020424ac(char* arg0) {
    if (arg0 != 0) {
        while (*arg0 != 0) {
            if (*arg0 == '>' && arg0[1] != '>') {
                return arg0;
            }
            arg0++;
        }
    }
    return 0;
}
