#include <globaldefs.h>

struct Struct_0201e828 {
    char unknown_0_[0x7e];
    short unknown_7e_;
};

// USA: SetZoneClearColor_0201e828
extern "C" ARM void SetZoneClearColor_0201e828(Struct_0201e828* zoneFeatures, unsigned short clearColor) {
    zoneFeatures->unknown_7e_ = clearColor;
}
