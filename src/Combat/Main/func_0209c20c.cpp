#include <globaldefs.h>
extern "C" void func_0203ad88(void*, void*, int);

struct MusicManager_02109bf4_4;
extern "C" void StopMusic_0209c678(struct MusicManager_02109bf4_4* manager, int fadeDuration);

extern "C" void func_0203aa44(void* arg0);
extern "C" void func_020bc078(int* arg0);

extern "C" void UpdateSound_020bbd9c(void);
extern "C" void SetMusicVolume_0209c2e0(void* manager, int volume, int fadeDuration);

struct Struct_02109bf4_3 {
    char unknown_0_[0xb0];
    int musicState_b0_;
    int unknown_b4_;
    short musicIndex_b8_;
    short unknown_ba_;
    void* unknown_bc_;
    void* unknown_c0_;
};

// USA: ResetMusic_0209c20c
extern "C" ARM void ResetMusic_0209c20c(struct Struct_02109bf4_3* manager) {
    func_0203ad88((void*)(manager), (void*)(0), (int)(0));
    StopMusic_0209c678((struct MusicManager_02109bf4_4*)manager, 0);
    UpdateSound_020bbd9c();
    func_0203aa44(manager);
    manager->musicState_b0_ = 0;
    manager->unknown_b4_ = 0;
    manager->musicIndex_b8_ = -1;
    func_020bc078((int*)&manager->unknown_bc_);
    manager->unknown_ba_ = -1;
    func_020bc078((int*)&manager->unknown_c0_);
    SetMusicVolume_0209c2e0(manager, 0x7f, 0);
}
