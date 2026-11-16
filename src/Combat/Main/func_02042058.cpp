#include <globaldefs.h>

#if defined(jpn)
#define func_020d2ff0 func_020d4a54
#endif

extern "C" int func_020d2ff0(const char* string);
extern "C" int sprintf(char* arg0, const char* arg1);

// USA: AppendText_02042058
extern "C" ARM int AppendText_02042058(char* buffer, const char* text) {
    char* end = buffer + func_020d2ff0(buffer);
    return (end + sprintf(end, text)) - buffer;
}
