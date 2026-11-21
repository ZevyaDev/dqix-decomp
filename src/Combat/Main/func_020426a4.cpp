#include <globaldefs.h>
extern "C" int func_02042658(void*, int);

extern "C" int GetFontForFontSize_02042190(int fontSize);

// USA: func_020426a4
extern "C" ARM int func_020426a4(int arg0, int arg1) {
    return func_02042658((void*)(GetFontForFontSize_02042190(arg0)), (int)(arg1));
}
