#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_02155580_48 = 0x24 };
enum { Enum_ov003_02155580_486 = 0x1e2 };
#else
enum { Enum_ov003_02155580_48 = 0x30 };
enum { Enum_ov003_02155580_486 = 0x1e6 };
#endif

struct TextWindow_0207fdcc;

struct MenuLayout_0207fdcc_2 {
    char unknown_0_[Enum_ov003_02155580_48];
    struct TextWindow_0207fdcc* unknown_30_;
    short unknown_34_;
    short unknown_36_;
};

struct KeyRepeat_02081f20_2;
struct SoundEffectManager_02108760;
struct Struct_020e29a8;
struct Struct_020e280c;

extern "C" void OpenMenuLayoutWindow_020813ec(struct MenuLayout_0207fdcc_2* menuLayout, int windowId);
extern "C" void func_0208203c(struct KeyRepeat_02081f20_2* arg0);
extern "C" void PlaySoundEffect_0205eaa0(struct SoundEffectManager_02108760* manager, int soundEffectIndex, int handle);
extern "C" void func_02080c04(struct MenuLayout_0207fdcc_2* arg0, int arg1);
extern "C" void func_020e29a8(struct Struct_020e29a8* arg0, int arg1);
extern "C" void func_020e280c(struct Struct_020e280c* arg0, void* arg1);

extern struct SoundEffectManager_02108760 gSoundEffectManager_02108760;

struct Struct_ov003_02155580 {
    char unknown_0_[0x8];
    void* unknown_8_;
    char unknown_c_[0x18 - 0xc];
    struct MenuLayout_0207fdcc_2* unknown_18_;
    void* unknown_1c_;
    char unknown_20_[0x80 - 0x20];
    char unknown_80_[Enum_ov003_02155580_486 - 0x80];
    short unknown_1e6_;
    short unknown_1e8_;
    short unknown_1ea_;
};

// USA: func_ov003_02155580
extern "C" ARM void func_ov003_02155580(struct Struct_ov003_02155580* arg0, int arg1) {
    arg0->unknown_1e6_ = 1;
    arg0->unknown_1e8_ = arg0->unknown_1ea_ = 6;
    arg0->unknown_18_->unknown_36_ = arg0->unknown_1ea_;
    OpenMenuLayoutWindow_020813ec(arg0->unknown_18_, arg0->unknown_1e6_);
    func_0208203c((struct KeyRepeat_02081f20_2*)arg0->unknown_80_);
    arg0->unknown_8_ = 0;
    PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 5, 0);
    if (arg0->unknown_1c_ != 0) {
        func_02080c04(arg0->unknown_18_, arg0->unknown_1e6_);
        func_020e29a8((struct Struct_020e29a8*)arg0->unknown_1c_, (signed char)arg1);
        func_020e280c((struct Struct_020e280c*)arg0->unknown_1c_, (void*)-1);
    }
}
