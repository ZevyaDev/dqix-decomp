#include <globaldefs.h>

struct Struct_02109bf4_5;
extern "C" void func_0209c73c(struct Struct_02109bf4_5* arg0);
extern "C" void func_0203aa44(void* arg0);
extern "C" int func_0203aaf8(void* arg0, void* arg1, int* arg2);
struct Struct_0203aba8;
extern "C" int func_0203aba8(struct Struct_0203aba8* arg0, void* arg1, void* arg2);
extern "C" void SetMusicVolume_0209c2e0(void* manager, int volume, int fadeDuration);

struct Struct_0209c3b4 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 1;
    unsigned char unknown_0_2_ : 1;
    unsigned char unknown_0_3_ : 1;
    unsigned char unknown_0_4_ : 4;
};

struct Struct_0209c3b4_2 {
    char unknown_0_[0xb0];
    int musicState_b0_;               // 0xb0
    int unknown_b4_;             // 0xb4
    short musicIndex_b8_;             // 0xb8
    short unknown_ba_;               // 0xba
    void* unknown_bc_;                 // 0xbc
    void* unknown_c0_;                   // 0xc0
    void* unknown_c4_;                     // 0xc4
    struct Struct_0209c3b4 unknown_c8_;       // 0xc8
    unsigned char unknown_c9_;                // 0xc9
    short unknown_ca_;                          // 0xca
    unsigned char unknown_cc_;                    // 0xcc
    unsigned char unknown_cd_;                      // 0xcd
    short unknown_ce_;                                // 0xce
};

// USA: PlayMusic_0209c3b4
extern "C" ARM void PlayMusic_0209c3b4(struct Struct_0209c3b4_2* manager, int musicIndex) {
    if (manager->musicState_b0_ == 2) return;
    if (manager->musicState_b0_ == 1 && musicIndex == manager->musicIndex_b8_) return;
    if (manager->unknown_c8_.unknown_0_2_) return;
    if (manager->unknown_ce_ > -1) {
        func_0209c73c((struct Struct_02109bf4_5*)manager);
    }
    manager->musicState_b0_ = 1;
    func_0203aa44(manager);
    if (musicIndex > 0) {
        func_0203aaf8(manager, (void*)musicIndex, &manager->unknown_b4_);
        func_0203aba8((struct Struct_0203aba8*)manager, (void*)musicIndex, &manager->unknown_bc_);
        SetMusicVolume_0209c2e0(manager, manager->unknown_cd_, 0);
    }
    manager->musicIndex_b8_ = (short)musicIndex;
    manager->unknown_ce_ = -1;
    manager->unknown_c8_.unknown_0_2_ = manager->unknown_c8_.unknown_0_3_;
    manager->unknown_c8_.unknown_0_3_ = 0;
}
