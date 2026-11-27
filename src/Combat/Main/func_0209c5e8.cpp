#include <globaldefs.h>

struct Struct_0209c5e8_2 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 1;
    unsigned char unknown_0_2_ : 1;
    unsigned char unknown_0_3_ : 5;
};

struct MusicManager_0209c5e8 {
    char unknown_0_[0xb0];
    int musicState_b0_;
    char unknown_b4_[0xb8 - 0xb4];
    short musicIndex_b8_;
    short unknown_ba_;
    void* unknown_bc_;
    void* unknown_c0_;
    char unknown_c4_[0xc8 - 0xc4];
    struct Struct_0209c5e8_2 unknown_c8_;
};

struct MusicManager_02109bf4_4;
struct MusicManager_0203aba8;

extern "C" int func_0209c140();
extern "C" void StopMusic_0209c678(struct MusicManager_02109bf4_4* manager, int fadeDuration);
extern "C" void StopSequence_0203ac10(void* manager, void* handle, int fadeDuration);
extern "C" int PlaySequence_0203aba8(struct MusicManager_0203aba8* manager, void* sequenceIndex, void* handle);

// USA: RestartMusic_0209c5e8
extern "C" ARM void RestartMusic_0209c5e8(struct MusicManager_0209c5e8* manager) {
    if (manager->unknown_c8_.unknown_0_2_) return;
    if (func_0209c140() != 0) {
        StopMusic_0209c678((struct MusicManager_02109bf4_4*)manager, 0);
        return;
    }
    if (manager->musicState_b0_ == 1) {
        StopSequence_0203ac10(manager, &manager->unknown_bc_, 0);
        PlaySequence_0203aba8((struct MusicManager_0203aba8*)manager, (void*)(int)manager->musicIndex_b8_, &manager->unknown_bc_);
        return;
    }
    if (manager->musicState_b0_ != 2) return;
    StopSequence_0203ac10(manager, &manager->unknown_c0_, 0);
    PlaySequence_0203aba8((struct MusicManager_0203aba8*)manager, (void*)(int)manager->unknown_ba_, &manager->unknown_c0_);
}
