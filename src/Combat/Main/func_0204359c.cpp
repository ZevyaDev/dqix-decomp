#include <globaldefs.h>

extern "C" void func_02067e58(void* arg0, int arg1);

// USA: DrawMessageGlyphs_0204359c
extern "C" ARM void DrawMessageGlyphs_0204359c(void* window, int glyphCount) {
    func_02067e58(window, glyphCount);
}
