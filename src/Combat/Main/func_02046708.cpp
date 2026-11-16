#include <globaldefs.h>

#if defined(jpn)
#define func_02046708 func_02047528
#endif

struct GlobalFlags_02012de8 {
    unsigned int bits_0_;
};

// USA: func_02046708
extern "C" ARM int func_02046708(struct GlobalFlags_02012de8* globalFlags, unsigned int mask) {
    return (globalFlags->bits_0_ & mask) != 0;
}
