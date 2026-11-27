#include <globaldefs.h>

extern "C" void func_0203a914(void* arg0);
extern "C" void ClearSoundHandle_020bc078(int* handle);
extern "C" void SetMusicVolume_0209c2e0(void* manager, int volume, int fadeDuration);
extern "C" void SetMusicVolumeLevel_0209ca70(void* manager, int volumeLevel);

struct MusicManager_02000c9c_16 {
    char unknown_0_[0xb0];
    int musicState_b0_;               // 0xb0
    int unknown_b4_;             // 0xb4
    short musicIndex_b8_;             // 0xb8
    short unknown_ba_;               // 0xba
    void* unknown_bc_;                 // 0xbc
    void* unknown_c0_;                   // 0xc0
    void* unknown_c4_;                     // 0xc4
    unsigned char unknown_c8_;              // 0xc8
    unsigned char jingleState_c9_;                // 0xc9
    short unknown_ca_;                          // 0xca
    unsigned char unknown_cc_;                    // 0xcc
    unsigned char unknown_cd_;                      // 0xcd
    short jingleIndex_ce_;                                // 0xce
};

// USA: InitMusicManager_0209c174
extern "C" ARM void InitMusicManager_0209c174(struct MusicManager_02000c9c_16* manager) {
    func_0203a914(manager);
    manager->musicState_b0_ = 0;
    manager->unknown_b4_ = 0;
    manager->musicIndex_b8_ = -1;
    ClearSoundHandle_020bc078((int*)&manager->unknown_bc_);
    manager->unknown_ba_ = -1;
    ClearSoundHandle_020bc078((int*)&manager->unknown_c0_);
    ClearSoundHandle_020bc078((int*)&manager->unknown_c4_);
    manager->unknown_c8_ &= ~1;
    SetMusicVolume_0209c2e0(manager, 0x7f, 0);
    SetMusicVolumeLevel_0209ca70(manager, 3);
    manager->jingleIndex_ce_ = -1;
    manager->jingleState_c9_ = 0;
    manager->unknown_ca_ = 0;
    manager->unknown_c8_ &= ~4;
    manager->unknown_c8_ &= ~8;
}
