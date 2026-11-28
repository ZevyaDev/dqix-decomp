#include <globaldefs.h>

extern "C" void StopSequence_0203ac10(void* manager, void* handle, int fadeDuration);
extern "C" void RestoreSoundHeapState_0203aa80(void* manager, int heapState);
extern "C" int func_0203ab6c(void* arg0, void* arg1);
extern "C" void RestartMusic_0209c5e8(void* manager);
extern "C" int LoadSequence_0203aaf8(void* manager, void* sequenceIndex, int* heapState);
struct MusicManager_0203aba8;
extern "C" int PlaySequence_0203aba8(struct MusicManager_0203aba8* manager, void* sequenceIndex, void* handle);
extern "C" void SetMusicVolume_0209c2e0(void* manager, int volume, int fadeDuration);

struct Struct_02109bf4_5 {
    char unknown_0_[0xb0];
    int unknown_b0_;               // 0xb0
    int unknown_b4_;             // 0xb4
    short unknown_b8_;             // 0xb8
    short unknown_ba_;               // 0xba
    void* unknown_bc_;                 // 0xbc
    void* unknown_c0_;                   // 0xc0
    void* unknown_c4_;                     // 0xc4
    unsigned char unknown_c8_;              // 0xc8
    unsigned char unknown_c9_;                // 0xc9
    short unknown_ca_;                          // 0xca
    unsigned char unknown_cc_;                    // 0xcc
    unsigned char unknown_cd_;                      // 0xcd
    short unknown_ce_;                                // 0xce
};

// USA: StopJingleAndResumeMusic_0209c73c
extern "C" ARM void StopJingleAndResumeMusic_0209c73c(struct Struct_02109bf4_5* manager) {
    if (manager->unknown_ce_ < 0) return;
    StopSequence_0203ac10(manager, (void*)&manager->unknown_c4_, 0);
    manager->unknown_ce_ = -1;
    if (manager->unknown_b0_ == 1) {
        if (manager->unknown_b4_ > 0) {
            RestoreSoundHeapState_0203aa80(manager, manager->unknown_b4_);
        }
        func_0203ab6c(manager, (void*)(int)manager->unknown_b8_);
        RestartMusic_0209c5e8(manager);
        SetMusicVolume_0209c2e0(manager, manager->unknown_cd_, 0);
        return;
    }
    if (manager->unknown_b0_ != 2) return;
    if (manager->unknown_b4_ > 0) {
        RestoreSoundHeapState_0203aa80(manager, manager->unknown_b4_);
    }
    LoadSequence_0203aaf8(manager, (void*)(int)manager->unknown_ba_, 0);
    PlaySequence_0203aba8((struct MusicManager_0203aba8*)manager, (void*)(int)manager->unknown_ba_, &manager->unknown_c0_);
    SetMusicVolume_0209c2e0(manager, manager->unknown_cd_, 0);
}
