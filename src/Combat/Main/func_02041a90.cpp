#include <globaldefs.h>

#if defined(jpn)
#define data_020efe86 data_020efe8e
#endif

extern "C" int GetStringLength_020d2ff0(const char* string);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern const char data_020efe86;

// USA: AppendPositionTag_02041a90
extern "C" ARM int AppendPositionTag_02041a90(char* buffer, int x, int y) {
    char* end = buffer + GetStringLength_020d2ff0(buffer);
    return (end + sprintf(end, &data_020efe86, x, y)) - buffer;
}
