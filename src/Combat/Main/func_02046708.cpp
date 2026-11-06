#include <globaldefs.h>

struct GlobalFlags_02012de8 {
    unsigned int bits_0_;
};

// USA: TestGlobalFlags_02046708
extern "C" ARM int TestGlobalFlags_02046708(struct GlobalFlags_02012de8* globalFlags, unsigned int mask) {
    return (globalFlags->bits_0_ & mask) != 0;
}
