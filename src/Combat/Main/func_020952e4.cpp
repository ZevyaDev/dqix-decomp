#include <globaldefs.h>

#if defined(jpn)
extern int data_02109400[2];

// JPN: func_020952e4
extern "C" ARM void func_020952e4(int arg0) {
    data_02109400[1] = arg0;
}
#endif
