#include <globaldefs.h>
#if defined(jpn)
#define data_020f1ee8 data_020f2054
#define data_020f1eec data_020f2058
#endif

typedef unsigned int (*Type_020f1ee8)(unsigned int arg0, int arg1, int arg2);
typedef int (*Type_020f1eec)(unsigned int arg0);

extern "C" unsigned int func_020bb424(unsigned int arg0, int arg1, int arg2);
extern "C" int func_020bb42c(unsigned int arg0);

Type_020f1ee8 data_020f1ee8 = func_020bb424;
Type_020f1eec data_020f1eec = func_020bb42c;

extern "C" ARM unsigned int func_020bb424(unsigned int arg0, int arg1, int arg2) {
    return 0;
}

extern "C" ARM int func_020bb42c(unsigned int arg0) {
    return -1;
}
