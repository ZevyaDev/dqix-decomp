#include <globaldefs.h>

#if defined(jpn)
#define data_020eff74 data_020eff73
#endif

extern char data_020eff74;
extern "C" int GetStringLength_020d2ff0(const char* string);
extern "C" int sprintf(char* arg0, const char* arg1, ...);

// USA: AppendTextColorTag_02041e70
extern "C" ARM int AppendTextColorTag_02041e70(char* buffer, int colorIndex) {
    char* end = buffer + GetStringLength_020d2ff0(buffer);
    return (end + sprintf(end, &data_020eff74, colorIndex)) - buffer;
}
