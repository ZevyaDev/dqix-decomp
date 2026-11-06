#include <globaldefs.h>
#include <std_library_functions.h>
extern "C" int GetStringLength_020d2ff0(const char*);
extern "C" int CompareBytes_02001aec(const void*, const void*, unsigned int);
extern char data_020f2d2c[][11];
extern signed char data_020eeab0[][8];
extern char data_020ee9d8[][3];
// USA: ExpandInflectionTags_020e4864
extern "C" ARM void ExpandInflectionTags_020e4864(const char* text, char* buffer, int isIndefinite, int, int, int grammaticalCase) {
    int endingLength;
    for (;;) {
        if (!*text) break;
        if (*text == '[') {
            int isTagFound = 0;
            int i = 0;
            for (;;) {
                if (!data_020f2d2c[i][0]) break;
                int tagLength = GetStringLength_020d2ff0(data_020f2d2c[i]);
                if (CompareBytes_02001aec(text + 1, data_020f2d2c[i], tagLength) == 0) {
                    if (isIndefinite >= 0 && grammaticalCase >= 0) {
                        int endingOffset = data_020eeab0[i][isIndefinite + grammaticalCase * 2] * 3;
                        const char* endings = (const char*)data_020ee9d8;
                        endingLength = GetStringLength_020d2ff0(endings + endingOffset);
                        memcpy(buffer, endings + endingOffset, endingLength);
                        buffer += endingLength;
                    }
                    text += tagLength + 1;
                    isTagFound = true;
                    break;
                }
                i++;
            }
            if (isTagFound) continue;
        }
        *buffer++ = *text++;
    }
    *buffer = *text;
}
