#include <globaldefs.h>

#if defined(jpn)
#define func_020d2ff0 func_020d4a54
#endif

#if defined(jpn)
extern "C" int AppendFontSizeTag_02041d9c(char*, int);
#endif

extern char data_020eff43;
extern "C" int func_020d2ff0(const char* string);
extern "C" int sprintf(char* arg0, const char* arg1, ...);

// USA: AppendFontSizeTag_02041d9c
extern "C" ARM int AppendFontSizeTag_02041d9c(char* buffer, int fontSize) {
    char* end = buffer + func_020d2ff0(buffer);
    return (end + sprintf(end, &data_020eff43, fontSize)) - buffer;
}
