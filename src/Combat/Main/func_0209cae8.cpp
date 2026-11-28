#include <globaldefs.h>

struct Struct_0209cae8 {
    char unknown_0_[0xb8];
    short unknown_b8_;
};

// USA: GetMusicIndex_0209cae8
extern "C" ARM short GetMusicIndex_0209cae8(struct Struct_0209cae8* manager) {
    return manager->unknown_b8_;
}
