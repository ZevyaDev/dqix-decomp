#include <globaldefs.h>

#if defined(jpn)
#define func_020d2ff0 func_020d4a54
#endif

extern "C" int func_020d2ff0(const char* string);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern const char data_020efe91;

#if defined(jpn)
extern "C" ARM int AppendXOffsetTag_02041acc(char* buffer, int xOffset);
#endif

// USA: AppendXOffsetTag_02041acc
extern "C" ARM int AppendXOffsetTag_02041acc(char* buffer, int xOffset) {
    char* end = buffer + func_020d2ff0(buffer);
    return (end + sprintf(end, &data_020efe91, xOffset)) - buffer;
}
