#include <globaldefs.h>

#if defined(jpn)
#define func_020d2ff0 func_020d4a54
#endif

extern "C" int func_020d2ff0(const char* string);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern const char data_020efe98;

// USA: AppendYOffsetTag_02041b00
extern "C" ARM int AppendYOffsetTag_02041b00(char* buffer, int yOffset) {
    char* end = buffer + func_020d2ff0(buffer);
    return (end + sprintf(end, &data_020efe98, yOffset)) - buffer;
}
