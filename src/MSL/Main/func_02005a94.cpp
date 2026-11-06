#include <globaldefs.h>

extern "C" int func_020059cc(void* arg0, int arg1, int arg2);

// USA: ParseDecimal_02005a94
extern "C" ARM int ParseDecimal_02005a94(void* string) {
    return func_020059cc(string, 0, 0xa);
}
