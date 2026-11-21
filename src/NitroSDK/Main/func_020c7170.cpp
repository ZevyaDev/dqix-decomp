#include <globaldefs.h>

typedef char* Type_02001bdc;

extern "C" int func_020c7198(char* arg0, unsigned long arg1, const char* arg2, Type_02001bdc arg3);

// USA: FormatToSizedBuffer_020c7170
extern "C" ARM int FormatToSizedBuffer_020c7170(char* buffer, unsigned long bufferSize, const char* format, ...) {
    Type_02001bdc formatArgs = (Type_02001bdc)(((unsigned int)&format & ~3u) + 4);
    return func_020c7198(buffer, bufferSize, format, formatArgs);
}
