#include <globaldefs.h>

extern "C" int ParseDecimal_02005a94(char* string);

// USA: ParseTagNumbers_020696bc
extern "C" ARM int ParseTagNumbers_020696bc(char* text, int* values, int count) {
    int i;
    for (i = 0; i < count; i++) {
        char firstCharacter = *text;
        if (firstCharacter != 0 && ((firstCharacter >= '0' && firstCharacter <= '9') || firstCharacter == '-')) {
            values[i] = ParseDecimal_02005a94(text);
            for (;;) {
                char character = *text;
                if (character == 0) break;
                if (character == ',' || character == '>') { text++; break; }
                text++;
            }
        }
    }
    return 0;
}
