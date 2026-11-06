#include <globaldefs.h>

extern "C" int func_020d2ff0(const char* arg0);
extern "C" int sprintf(char* arg0, const char* arg1);

// USA: AppendText_02042058
extern "C" ARM int AppendText_02042058(char* buffer, const char* text) {
    char* end = buffer + func_020d2ff0(buffer);
    return (end + sprintf(end, text)) - buffer;
}
