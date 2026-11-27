#include <globaldefs.h>

#include "Memory/SafeAllocator.h"
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Graphics/OBJSpriteSet.h"
#include "Resource/PAC.h"

struct Sprite_02043368_2;
struct SpriteAnimationList_02043368;
struct PacEntry_02020cb8_4;
struct PacEntry_02020aec;


extern char data_020f007f;
extern char data_020f0093;

struct SpriteSet_02043368_3 {
    char unknown_0_[0x3c];
    struct SpriteAnimationList_02043368* pAnimationList_3c_;
    void* pSprites_40_;
    char unknown_44_[8];
    unsigned short spriteCount_4c_;
    char unknown_4e_[2];
    unsigned char isSubScreen_50_;
};

struct MessageWindow_02043368_4 {
#if defined(jpn)
    char unknown_0_[0x220];
#else
    char unknown1_0_[0x2d0];
#endif
    int spriteLoadTaskId_2d0_;
    SafeAllocator* pSpriteAllocator_2d4_;
    struct SpriteSet_02043368_3* pSpriteSet_2d8_;
    char* pSprites_2dc_;
    struct SpriteAnimationList_02043368* pAnimationList_2e0_;
    unsigned short unknown_2e4_;
    char unknown_2e6_[1];
    unsigned char spriteLoadState_2e7_;
};

// USA: UpdateMessageWindowSpriteLoad_02043368
extern "C" ARM void UpdateMessageWindowSpriteLoad_02043368(struct MessageWindow_02043368_4* window) {
    if (window->pSpriteAllocator_2d4_ == 0) {
        return;
    }
    BackgroundLoader* backgroundLoader = BackgroundLoader::GetInstance();

    if (window->spriteLoadState_2e7_ == 0) {
        if (window->pSpriteSet_2d8_ != 0) {
            return;
        }
        GrottoStruct* grotto = GameState::GetInstance()->GetGrottoStruct();
        if (grotto != 0 && grotto->unknown_0[0] != 0 && grotto->unknown_0[2] == 0) {
            return;
        }
#if defined(jpn)
        window->spriteLoadTaskId_2d0_ = backgroundLoader->QueueLoadFile(&data_020f0093, 0);
#else
        window->spriteLoadTaskId_2d0_ = backgroundLoader->QueueLoadFileInGP2(&data_020f007f, &data_020f0093, 0);
#endif
        window->spriteLoadState_2e7_++;
        return;
    }

    if (window->spriteLoadState_2e7_ == 1) {
        if (backgroundLoader->GetTaskStatus(window->spriteLoadTaskId_2d0_) == 0) {
            return;
        }
        window->pSpriteAllocator_2d4_->Reset();
        window->pSpriteSet_2d8_ = (struct SpriteSet_02043368_3*)window->pSpriteAllocator_2d4_->Allocate(0x54);
        window->pSprites_2dc_ = (char*)window->pSpriteAllocator_2d4_->Allocate(0xf0);
        window->pAnimationList_2e0_ = (struct SpriteAnimationList_02043368*)window->pSpriteAllocator_2d4_->Allocate(8);

        if (window->pSpriteSet_2d8_ != 0 && window->pSprites_2dc_ != 0 && window->pAnimationList_2e0_ != 0) {
            ((OBJSpriteSet*)((char*)window->pSpriteSet_2d8_))->Reset();
            for (unsigned short i = 0; i < 6; i++) {
                ((OBJSpriteSet::Metatile*)((struct Sprite_02043368_2*)(window->pSprites_2dc_ + i * 0x28)))->Reset();
            }
            ((OBJSpriteSet::List*)(window->pAnimationList_2e0_))->Reset();
            window->pSpriteSet_2d8_->isSubScreen_50_ = 0;
            {
                struct SpriteSet_02043368_3* spriteSet = window->pSpriteSet_2d8_;
                spriteSet->pSprites_40_ = window->pSprites_2dc_;
                spriteSet->spriteCount_4c_ = 6;
            }
            window->pSpriteSet_2d8_->pAnimationList_3c_ = window->pAnimationList_2e0_;
            window->unknown_2e4_ = 0;

            void* innerName;
            void* fileData;
            unsigned int fileSize;
            int innerLength;
            backgroundLoader->GetLoadedFileByID(window->spriteLoadTaskId_2d0_, &fileData, &fileSize);
            int numFiles = GetNumFilesInPAC((const void*)((struct PacEntry_02020cb8_4*)fileData));
            for (int i = 0; i < numFiles; i++) {
                void* innerFile = GetFileInPACByIndex((void*)((struct PacEntry_02020aec*)fileData), i, (const char**)(&innerName), (unsigned int*)(&innerLength));
                ((OBJSpriteSet*)(window->pSpriteSet_2d8_))->LoadFromNitroFile((void*)(innerFile), innerLength, (SafeAllocator*)(window->pSpriteAllocator_2d4_));
            }
        }

        backgroundLoader->RemoveTask(window->spriteLoadTaskId_2d0_);
        window->spriteLoadTaskId_2d0_ = -1;
        window->spriteLoadState_2e7_++;
        return;
    }

    if (window->spriteLoadState_2e7_ == 2) {
        if (window->pSpriteSet_2d8_ != 0 && window->pAnimationList_2e0_ != 0) {
            return;
        }
        window->pSpriteSet_2d8_ = 0;
        window->pSprites_2dc_ = 0;
        window->pAnimationList_2e0_ = 0;
        window->unknown_2e4_ = 0;
        window->spriteLoadTaskId_2d0_ = -1;
        window->spriteLoadState_2e7_ = 0;
    }
}
