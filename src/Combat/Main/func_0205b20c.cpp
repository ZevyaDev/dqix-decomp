#include <globaldefs.h>

struct Canvas_020200c0_4 {
    int pCharacterData_0_;
    int pRects_4_;
    unsigned char rectCount_8_;
};

// USA: InitCanvas_0205b20c
extern "C" ARM void InitCanvas_0205b20c(struct Canvas_020200c0_4* canvas) {
    canvas->pCharacterData_0_ = 0;
    canvas->pRects_4_ = 0;
    canvas->rectCount_8_ = 0;
}
