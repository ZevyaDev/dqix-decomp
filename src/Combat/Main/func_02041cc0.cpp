#include <globaldefs.h>

#if defined(jpn)
#define func_020d2ff0 func_020d4a54
#endif

extern "C" int func_020d2ff0(const char* string);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern "C" const char data_020eff11[];

#if defined(jpn)
extern "C" ARM int AppendHorizontalLineTag_02041cc0(char* buffer, int y);
#endif

// USA: AppendHorizontalLineTag_02041cc0
extern "C" ARM int AppendHorizontalLineTag_02041cc0(char* buffer, int y) {
    char* end = buffer + func_020d2ff0(buffer);
    return (end + sprintf(end, data_020eff11, y)) - buffer;
}
