#include <globaldefs.h>
#if defined(jpn)
#define data_020efee4 data_020efeec
#endif

extern "C" int GetStringLength_020d2ff0(const char* string);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern "C" const char data_020efee4[];

// USA: AppendFrameTag_02041c08
extern "C" ARM int AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin) {
    char* end = buffer + GetStringLength_020d2ff0(buffer);
    return (end + sprintf(end, data_020efee4, entryIndex, leftMargin, topMargin, rightMargin, bottomMargin)) - buffer;
}
