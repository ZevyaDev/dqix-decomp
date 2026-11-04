#include <globaldefs.h>
#if defined(jpn)

// JPN: func_02069408
extern "C" ARM bool func_02069408(int arg0, unsigned int arg1) {
    if (arg1 >= 0xff01u && arg1 <= 0xff0du) return 1;
    return 0;
}
#endif
