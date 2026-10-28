#include <globaldefs.h>
#if defined(jpn)
#define data_020f1ef0 data_020f205c
#define data_020f1ef4 data_020f2060
#endif

typedef unsigned int (*Type_020f1ef0)(unsigned int arg0, int arg1, int arg2);
typedef int (*Type_020f1ef4)(unsigned int arg0);

extern "C" unsigned int func_020bb434(unsigned int arg0, int arg1, int arg2);
extern "C" int func_020bb43c(unsigned int arg0);

Type_020f1ef0 data_020f1ef0 = func_020bb434;
Type_020f1ef4 data_020f1ef4 = func_020bb43c;

extern "C" ARM unsigned int func_020bb434(unsigned int arg0, int arg1, int arg2) {
    return 0;
}

extern "C" ARM int func_020bb43c(unsigned int arg0) {
    return -1;
}
