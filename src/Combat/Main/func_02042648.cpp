#include <globaldefs.h>

extern int data_020e7a94[];

// USA: GetFontDefaultWidth_02042648
extern "C" ARM int GetFontDefaultWidth_02042648(int font) {
    return data_020e7a94[font];
}
