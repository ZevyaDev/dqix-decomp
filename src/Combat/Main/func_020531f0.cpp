#include <globaldefs.h>
#include <std_library_functions.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Input/Input.h"

extern "C" int func_02053604(signed char* arg0);
extern "C" void StopSoundEffect_0205eabc(void* manager, void* handle, int fadeDuration);
extern "C" int IsOnLadder_02039d7c(char* object);
extern "C" int GetOwnPartyLeaderObjectIndex_020100b0(GameState* gameState);
extern "C" int GetFollowCamera_020100f8(char* gameState);
extern "C" void func_020a2c8c(unsigned char* arg0);
extern "C" void* GetMessageWindow_020421a0(void);

struct Struct_02010604;
extern "C" void SetMotion_02033b88(struct Struct_02010604* object, int motion);

extern "C" void func_ov017_021cc1f8(int arg0, const char* arg1, int arg2, int arg3);

extern char gSoundEffectManager_02108760;

struct Struct_020531f0 {
    unsigned char unknown_0_0_ : 2;
    unsigned char unknown_0_2_ : 6;
};

struct Struct_020531f0_2 {
    Object3D unknown_0_;
    char unknown_ac_[0xb2 - 0xac];
    unsigned short unknown_b2_;
    char unknown_b4_[0xc1 - 0xb4];
    struct Struct_020531f0 unknown_c1_;
#if defined(jpn)
    char unknown_c2_[0x16c - 0xc2];
#else
    char unknown1_c2_[0x178 - 0xc2];
#endif
    signed char unknown_178_[4];
    signed char unknown_17c_;
    signed char unknown_17d_;
    signed char unknown_17e_;
    signed char unknown_17f_;
    int unknown_180_;
    signed char unknown_184_;
    signed char unknown_185_;
    signed char unknown_186_;
    char unknown_187_[0x190 - 0x187];
    int unknown_190_;
    int unknown_194_;
};

// USA: StopGesture_020531f0
extern "C" ARM void StopGesture_020531f0(struct Struct_020531f0_2* gameObject) {
#if defined(jpn)
    enum { Enum_020531f0_408 = 0x18c, Enum_020531f0_6577 = 0x17e1 };
#else
    enum { Enum_020531f0_408 = 0x198, Enum_020531f0_6577 = 0x19b1 };
#endif
    BackgroundLoader* backgroundLoader;
    GameState* gameState;
    signed char gestureIds[4];
    int camera;
    int objectIndex;

    backgroundLoader = BackgroundLoader::GetInstance();
    if (gameObject->unknown_180_ > -1) {
        backgroundLoader->RemoveTask(gameObject->unknown_180_);
        gameObject->unknown_180_ = -1;
    }

    if (func_02053604((signed char*)gameObject) == 0x19) {
        StopSoundEffect_0205eabc((void*)&gSoundEffectManager_02108760, (char*)gameObject + Enum_020531f0_408, 0);
    }

    memset(gameObject->unknown_178_, 0, 4);
    gameObject->unknown_17c_ = 0;
    gameObject->unknown_17d_ = 0;
    gameObject->unknown_180_ = -1;
    gameObject->unknown_17e_ = 0;
    gameObject->unknown_17f_ = 0;
    gameObject->unknown_184_ = 0;

    if (gameObject->unknown_194_ > -1) {
        backgroundLoader->RemoveTask(gameObject->unknown_194_);
        gameObject->unknown_194_ = -1;
    }

    gameObject->unknown_190_ = 0;
    gameObject->unknown_194_ = -1;
    gameObject->unknown_185_ = 0;
    gameObject->unknown_186_ = 0;

    if ((gameObject->unknown_0_.unknown_0_ & 0x200) != 0) {
        if (IsOnLadder_02039d7c((char*)gameObject) != 0) {
            return;
        }
    }

    gameObject->unknown_c1_.unknown_0_0_ &= ~2;
    gameObject->unknown_0_.RemoveAnimationPackageByID(2);
    gameObject->unknown_b2_ = 0;
    SetMotion_02033b88((struct Struct_02010604*)gameObject, 0);

    gameState = GameState::GetInstance();
    objectIndex = gameObject->unknown_0_.unknown_4_;
    int ownPartyLeaderObjectIndex = GetOwnPartyLeaderObjectIndex_020100b0(gameState);
    if (ownPartyLeaderObjectIndex == objectIndex) {
        camera = GetFollowCamera_020100f8((char*)gameState);
        if (camera != 0) {
            if (g_keyManager.TestKeysHeld(2) == 0
                || ((unsigned char*)GetMessageWindow_020421a0())[Enum_020531f0_6577] != 0) {
                func_020a2c8c((unsigned char*)camera);
            }
        }
    }

    func_ov017_021cc1f8(gameObject->unknown_0_.unknown_4_, (const char*)gestureIds, 0, 1);
}
