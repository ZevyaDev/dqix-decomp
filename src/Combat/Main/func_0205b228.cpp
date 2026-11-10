#include <globaldefs.h>

// USA: SetCanvasRects_0205b228
extern "C" ARM void SetCanvasRects_0205b228(void* canvas, int rects, unsigned char rectCount) {
    *(int*)((char*)canvas + 0x4) = rects;
    *(unsigned char*)((char*)canvas + 0x8) = rectCount;
}
