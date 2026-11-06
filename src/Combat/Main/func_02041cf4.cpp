#include <globaldefs.h>

extern "C" int GetStringLength_020d2ff0(const char* string);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern "C" const char data_020eff1b[];

// USA: func_02041cf4
extern "C" ARM int func_02041cf4(char* arg0, int arg1, int arg2, int arg3, int arg4) {
    char* var0 = arg0 + GetStringLength_020d2ff0(arg0);
    return (var0 + sprintf(var0, data_020eff1b, arg1, arg2, arg3, arg4)) - arg0;
}
