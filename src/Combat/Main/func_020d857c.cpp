#include <globaldefs.h>

// USA: StringStartsWith_020d857c
extern "C" ARM int StringStartsWith_020d857c(signed char* string, signed char* prefix) {
    if (string == NULL) return 0;
    if (prefix == NULL) return 0;
    if (string == prefix) return 1;
    while (*string != 0 && *prefix != 0 && *string == *prefix) {
        string++;
        prefix++;
    }
    return (*prefix == 0) ? 1 : 0;
}
