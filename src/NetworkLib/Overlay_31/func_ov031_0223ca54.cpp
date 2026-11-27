#include <globaldefs.h>

extern "C" void* GetSpriteOAMEntry_ov031_0223baa0(void* sprite, int entryIndex);
extern "C" void func_ov031_0223bab4(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov031_0223bb58(void* arg0, int arg1, int arg2, int arg3);
struct OAMAllocation_ov031_02222ce4;
extern "C" void SetSpritePriority_ov031_0223bcc8(OAMAllocation_ov031_02222ce4* sprite, int entryIndex, int priority);
extern "C" void func_020b20b0(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);

struct Struct_ov031_022266b0 { unsigned char unknown_0_[0x2c]; unsigned short unknown_2c_; unsigned char unknown_2e_; unsigned char unknown_2f_; };

// USA: func_ov031_0223ca54
extern "C" ARM void func_ov031_0223ca54(Struct_ov031_022266b0* arg0, int arg1, int arg2, void* arg3, int arg4) {
    void* var0 = GetSpriteOAMEntry_ov031_0223baa0(arg3, 0);
    func_ov031_0223bab4(arg3, -1, 0, 0);
    func_ov031_0223bb58(arg3, -1, 0, 0xf);
    SetSpritePriority_ov031_0223bcc8((OAMAllocation_ov031_02222ce4*)arg3, -1, arg4);
    func_020b20b0(var0, arg0->unknown_2e_, arg0->unknown_2f_, arg1, arg2, 0, arg0->unknown_2c_, 2);
}
