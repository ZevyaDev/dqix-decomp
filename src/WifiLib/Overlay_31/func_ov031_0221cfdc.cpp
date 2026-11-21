#include <globaldefs.h>

struct Struct_ov031_0224e6e0_4 {
    int unknown_0_;
    void* unknown_4_;
    int unknown_8_;
    void* unknown_c_;
};
extern Struct_ov031_0224e6e0_4 gAOSSSession_ov031_0224e6e0;
extern "C" void func_ov031_0221c4ac(int arg0);

// USA: func_ov031_0221cfdc
extern "C" THUMB void func_ov031_0221cfdc() {
    if (gAOSSSession_ov031_0224e6e0.unknown_c_) {
        func_ov031_0221c4ac((int)gAOSSSession_ov031_0224e6e0.unknown_c_);
        gAOSSSession_ov031_0224e6e0.unknown_c_ = 0;
    }
    if (gAOSSSession_ov031_0224e6e0.unknown_4_) {
        func_ov031_0221c4ac((int)gAOSSSession_ov031_0224e6e0.unknown_4_);
        gAOSSSession_ov031_0224e6e0.unknown_4_ = 0;
    }
}
