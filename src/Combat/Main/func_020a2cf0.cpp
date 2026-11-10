#include <globaldefs.h>

extern "C" void func_0202df68(void*);
extern "C" void func_0202e08c(unsigned int*, unsigned int);

struct Struct_0204a120_2 {
    char unknown_0_[0x218];
    int unknown_218_;
};

// USA: InitKeyControlledCamera_020a2cf0
extern "C" ARM void InitKeyControlledCamera_020a2cf0(struct Struct_0204a120_2* camera) {
    func_0202df68(camera);
    func_0202e08c((unsigned int*)camera, 2);
    camera->unknown_218_ = 0;
}
