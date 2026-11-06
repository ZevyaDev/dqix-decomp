#include <globaldefs.h>

#if defined(jpn)
#define data_020efeb3 data_020efebb
#endif

extern "C" int GetStringLength_020d2ff0(const char* string);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern const char data_020efeb3;

// USA: AppendMenuEntry_02041b70
extern "C" ARM int AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text) {
    char* end = buffer + GetStringLength_020d2ff0(buffer);
    return (end + sprintf(end, &data_020efeb3, entryIndex, text)) - buffer;
}
