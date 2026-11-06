#include <globaldefs.h>

#if defined(jpn)
#define data_020eff87 data_020eff86
#endif

extern char data_020eff87;
extern "C" int GetStringLength_020d2ff0(const char* string);
extern "C" int sprintf(char* arg0, const char* arg1, ...);

// USA: AppendCursorTag_02041ea4
extern "C" ARM int AppendCursorTag_02041ea4(char* buffer, int entryIndex) {
    char* end = buffer + GetStringLength_020d2ff0(buffer);
    return (end + sprintf(end, &data_020eff87, entryIndex)) - buffer;
}
