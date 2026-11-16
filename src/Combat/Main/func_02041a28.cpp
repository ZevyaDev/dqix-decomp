#include <globaldefs.h>

#if defined(jpn)
#define func_020d2ff0 func_020d4a54
#endif

#if defined(jpn)
#define data_020efe78 data_020efe80
#endif

extern "C" int func_020d2ff0(const char* string);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern const char data_020efe78;

// USA: AppendXPositionTag_02041a28
extern "C" ARM int AppendXPositionTag_02041a28(char* buffer, int x) {
    char* end = buffer + func_020d2ff0(buffer);
    return (end + sprintf(end, &data_020efe78, x)) - buffer;
}
