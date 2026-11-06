#include <globaldefs.h>

extern "C" int GetStringLength_020d2ff0(const char* string);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern const char data_020efe98;

// USA: func_02041b00
extern "C" ARM int func_02041b00(char* arg0, int arg1) {
    char* var0 = arg0 + GetStringLength_020d2ff0(arg0);
    return (var0 + sprintf(var0, &data_020efe98, arg1)) - arg0;
}
