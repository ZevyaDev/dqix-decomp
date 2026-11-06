#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

extern int data_02109400;

#if defined(jpn)
enum { Enum_02094a00_0 = 4 };
#else
enum { Enum_02094a00_0 = 0 };
#endif

// USA: GetFontLoader_02094a00
extern "C" ARM FontLoader_0208cb08* GetFontLoader_02094a00(void) {
    return *(FontLoader_0208cb08**)((char*)&data_02109400 + Enum_02094a00_0);
}
