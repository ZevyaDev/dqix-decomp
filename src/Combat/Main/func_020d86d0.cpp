#include <globaldefs.h>

struct Struct_0214e4a0_2 {
    unsigned char frameBufferIndex_0_;
    unsigned char unknown_1_[3];
    unsigned int unknown_4_;
};
extern Struct_0214e4a0_2 data_0214e4a0;

// USA: Swap3DBuffers_020d86d0
extern "C" ARM void Swap3DBuffers_020d86d0(int keepTranslucentOrder, int useWDepth) {
    *(unsigned int*)0x04000540 = keepTranslucentOrder | (useWDepth << 1);
    data_0214e4a0.frameBufferIndex_0_ = (data_0214e4a0.frameBufferIndex_0_ == 0) ? 1 : 0;
}
