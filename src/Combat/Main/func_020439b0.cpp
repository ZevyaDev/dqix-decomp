#include <globaldefs.h>
#include "std_library_functions.h"
#include "Graphics/VRAMStaging.h"
#include "Resource/MessageSystem.h"

#define REG_BG_SCROLL_020439b0 (*(volatile unsigned int*)0x04000018)
#define REG_DISPLAY_020439b0 (*(volatile unsigned int*)0x04000000)

extern "C" void func_0206b804(char* arg0, int* arg1, int* arg2);
extern "C" void func_02044c74(void* arg0, void* arg1);
extern "C" void func_02066cf0(void* arg0, int arg1);
#if defined(jpn)
#define func_02044074 func_0204483c
#endif
extern "C" void func_02044074(struct Struct_02044074* arg0);
#if defined(jpn)
#define func_02043600 func_02043de0
#endif
extern "C" void SetMessageWindowRect_02042b98(void* window, int x, int y, int width, int height);
extern "C" void func_0204408c(struct Struct_020439b0_7* arg0, short arg1, short arg2, short arg3, short arg4);
extern "C" void func_02043600(void* arg0, void* arg1);
#include "Resource/MessageUpdate.h"
#include "Graphics/TextureArena.h"
extern "C" void CloseMessageWindow_02043124(void* window);
extern "C" void func_020437bc(void* arg0, void* arg1, int arg2);

struct Struct_0204394c;
#if defined(jpn)
#define func_0204394c func_02044104
#endif
extern "C" void func_0204394c(struct Struct_0204394c* arg0);

struct DisplayWindow_020439b0;
extern "C" void SetDisplayWindowEnabled_020e2cc4(struct DisplayWindow_020439b0* displayWindow, int isEnabled);

struct Struct_0200f3a4_13;
extern "C" void func_02041754(Struct_0204166c* arg0);
extern "C" void func_02042af4(int arg0, unsigned char* arg1, int arg2);

struct Struct_020439b0_3;
extern "C" void func_020e2d2c(struct Struct_020439b0_3* arg0, int arg1, int arg2, int arg3, int arg4);

struct Struct_020439b0_4;
extern "C" void func_020e2c34(struct Struct_020439b0_4* arg0);

struct Struct_020439b0_5 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    short unknown_6_;
    int unknown_8_;
};

struct Struct_02042b98_3 {
    char unknown_0_[0x440];
    Struct_020439b0_5* unknown_440_;
};

struct TextWindow_020439b0_6 { char unknown_0_[8]; int pCharacterData_8_; char unknown_c_[0xa8-0xc]; short width_a8_, height_aa_, tileX_ac_, tileY_ae_; };
struct Struct_02044074 { unsigned short unknown_0_, unknown_2_, unknown_4_, unknown_6_; };
struct Struct_020439b0_7 { short unknown_0_, unknown_2_, unknown_4_, unknown_6_; };
union Struct_020439b0_8 { Struct_02044074 unknown_0_; Struct_020439b0_7 unknown1_0_; };
#if defined(jpn)
enum { Enum_020439b0_52 = 0, Enum_020439b0_324 = 0x104, Enum_020439b0_332 = 0x10c,
       Enum_020439b0_707 = 0x213, Enum_020439b0_2324 = 0x7e4,
       Enum_020439b0_2352 = 0x800, Enum_020439b0_6624 = 0x1804,
       Enum_020439b0_116 = 0x40, Enum_020439b0_6586 = 0x17ea,
       Enum_020439b0_6603 = 0x17fc, Enum_020439b0_6498 = 0x1790 };
#else
enum { Enum_020439b0_52 = 0x34, Enum_020439b0_324 = 0x144, Enum_020439b0_332 = 0x14c,
       Enum_020439b0_707 = 0x2c3, Enum_020439b0_2324 = 0x914,
       Enum_020439b0_2352 = 0x930, Enum_020439b0_6624 = 0x19e0,
       Enum_020439b0_116 = 0x74, Enum_020439b0_6586 = 0x19ba,
       Enum_020439b0_6603 = 0x19cb, Enum_020439b0_6498 = 0x1962 };
#endif

struct Struct_020439b0_9 { short unknown_0_[0x400]; short unknown_800_[0x400]; };
extern void* data_02107800;
#if defined(jpn)
#define TILE_MAP_BUFFER (*(void**)((char*)&data_02107800 + 0x30))
#else
#define TILE_MAP_BUFFER data_02107800
#endif

static inline short inline_020439b0(TextWindow_020439b0_6* arg0) { return arg0->width_a8_; }

// USA: UpdateMessageWindowGraphics_020439b0
extern "C" ARM void UpdateMessageWindowGraphics_020439b0(char* window, int arg1) {
    MessageWindow_02021b84* messageWindow = (MessageWindow_02021b84*)window;
    int offsetX, offsetY;
    Struct_020439b0_8 frameRect, var4, var5;

    if (messageWindow->unknown_19cc_ != 0) {
        func_0206b804(window, &offsetX, &offsetY);
        func_02044c74(window, (*(TextWindow_020439b0_6**)(window + Enum_020439b0_52)));

        TextWindow_020439b0_6* textWindow = (*(TextWindow_020439b0_6**)(window + Enum_020439b0_52));
        int characterData = textWindow->pCharacterData_8_;
        if (characterData != 0) {
            textWindow->pCharacterData_8_ = characterData;

            messageWindow->unknown_19cc_ = 0;
            func_02066cf0(window, 1);
            messageWindow->unknown_19cc_ = 1;
            if (messageWindow->unknown_19c0_ != 0) {
                messageWindow->unknown_40_ = 0;
            }

            func_02044074(&frameRect.unknown_0_);
            func_02044074(&var4.unknown_0_);
            func_02044074(&var5.unknown_0_);

            if (messageWindow->unknown_998_ != 0 && messageWindow->unknown_19b1_ != 0) {
                goto prepareBounds;
            }
            if ((*(unsigned char*)(window + Enum_020439b0_6603)) != 0) {
            prepareBounds:
                if (messageWindow->unknown_19b1_ != 0) {
                    SetMessageWindowRect_02042b98(window, 2, 0x74, 0xfc, 0x4a);
                    func_0204408c(&frameRect.unknown1_0_, offsetX + 2, offsetY + 0x74, 0xfc, 0x4a);
                    func_02043600((*(TextWindow_020439b0_6**)(window + Enum_020439b0_52)), &frameRect);
                    func_0204408c(&frameRect.unknown1_0_, 2, 0x74, 0xfc, 0x4a);

                }

                if (messageWindow->unknown_19c4_ != 0 && messageWindow->unknown_19c3_ != 0) {
                    struct Struct_02042b98_3* var8 = (Struct_02042b98_3*)(window + Enum_020439b0_6624);
                    var8->unknown_440_ = &(*(Struct_020439b0_5*)(window + Enum_020439b0_2352));
                    int var9 = (var8->unknown_440_ != 0) ? (var8->unknown_440_->unknown_8_ == 2) : 0;
                    if (var9) {
                        short var10, var11, var12, var13;
                        if (var8->unknown_440_ != 0) {
                            var10 = var8->unknown_440_->unknown_0_;
                            var11 = var8->unknown_440_->unknown_2_;
                        }
                        if (var8->unknown_440_ != 0) {
                            var12 = var8->unknown_440_->unknown_4_;
                            var13 = var8->unknown_440_->unknown_6_;
                        }
                        func_0204408c(&var4.unknown1_0_, var10 + offsetX, var11 + offsetY, var12, var13);
                        func_02043600((*(TextWindow_020439b0_6**)(window + Enum_020439b0_52)), &var4);
                        func_0204408c(&var4.unknown1_0_, var10, var11, var12, var13);
                    }
                    var8->unknown_440_ = &(*(Struct_020439b0_5*)(window + Enum_020439b0_2324));
                }

                if (messageWindow->unknown_9a0_ == 6) {
                    if ((*(unsigned char*)(window + Enum_020439b0_6586)) != 0 && (*(unsigned char*)(window + Enum_020439b0_707)) != 0) {
                        func_0204408c(&var5.unknown1_0_, (*(Struct_020439b0_7*)(window + Enum_020439b0_324)).unknown_0_, (*(Struct_020439b0_7*)(window + Enum_020439b0_324)).unknown_2_,
                            (*(Struct_020439b0_7*)(window + Enum_020439b0_324)).unknown_4_, (*(Struct_020439b0_7*)(window + Enum_020439b0_324)).unknown_6_);
                        func_02043600((*(TextWindow_020439b0_6**)(window + Enum_020439b0_52)), &var5);
                    }
                }
            }

            TextWindow_020439b0_6* var14 = (*(TextWindow_020439b0_6**)(window + Enum_020439b0_52));
            if (var14 != 0) {
                short row;
                int vramOffset;
                int source;
                short height;
                int rowSize;
                short tileX = var14->tileX_ac_;
                short tileY = var14->tileY_ae_;
                short width = inline_020439b0(var14);
                height = var14->height_aa_;
                vramOffset = (tileX + (tileY << 5)) << 5;
                source = var14->pCharacterData_8_;
                row = 0;
                for (; row < height; row++) {
                    rowSize = width << 5;
                    StageMemoryToVRAM(VRAMSubregion_MainBG3Character, (const void*)source, vramOffset, rowSize, 1, 0);
                    source += rowSize;
                    vramOffset += 0x400;
                }
            }

            int previousOffsetX = messageWindow->unknown_94c_[0];
            int previousOffsetY = messageWindow->unknown_94c_[1];
            REG_BG_SCROLL_020439b0 = ((-previousOffsetX) & 0x1ff) | (((-previousOffsetY) << 16) & 0x1ff0000);
            messageWindow->unknown_94c_[0] = offsetX;
            messageWindow->unknown_94c_[1] = offsetY;

            if (messageWindow->unknown_9a0_ != 1 && messageWindow->unknown_9a0_ != 0) {
                memset(TILE_MAP_BUFFER, 0, 0x800);

                if (messageWindow->unknown_998_ != 0 && messageWindow->unknown_19b1_ != 0) {
                    goto stageBounds;
                }
                if ((*(unsigned char*)(window + Enum_020439b0_6603)) != 0) {
                stageBounds:
                    if (messageWindow->unknown_19b1_ != 0) {
                        void* screenBuffer = TILE_MAP_BUFFER;
                        func_020437bc(screenBuffer, &frameRect, 0);
                        func_020437bc(screenBuffer, &var4, 1);
                        func_020437bc(screenBuffer, &var5, 2);
                        StageMemoryToVRAM(VRAMSubregion_MainBG2Screen, screenBuffer, 0, 0x800, 1, 0);
                    }
                }

                if (messageWindow->unknown_19b1_ == 0) {
                    StageMemoryToVRAM(VRAMSubregion_MainBG2Screen, TILE_MAP_BUFFER, 0, 0x800, 1, 0);
                }

                if (!((*(unsigned int*)(window + Enum_020439b0_116)) != messageWindow->unknown_78_ && messageWindow->unknown_998_ != 0)) {
                    Struct_020439b0_9* var26 = (Struct_020439b0_9*)TILE_MAP_BUFFER;
                    unsigned short i;
                    for (i = 0; i < 0x100; i++) {
                        var26->unknown_800_[i] = 0;
                    }
                    for (unsigned short tile = 0x100; tile < 0x300; tile++) {
                        var26->unknown_800_[tile] = (short)tile;
                    }
                    StageMemoryToVRAM(VRAMSubregion_MainBG3Screen, var26->unknown_800_, 0, 0x800, 1, 0);
                }
            }

            REG_DISPLAY_020439b0 = (REG_DISPLAY_020439b0 & ~0x1f00) | 0x1d00;
        }

        FreeVRAMStagingMemory((const void*)(*(TextWindow_020439b0_6**)(window + Enum_020439b0_52))->pCharacterData_8_);

        if (messageWindow->unknown_998_ == 0) {
            func_02043040((MessageWindow_02021b84*)window);
            CloseMessageWindow_02043124(window);
            func_020430b0((MessageWindow_02021b84*)window);
        }
    }

    if ((
#if defined(jpn)
            messageWindow->unknown_17ff_.unknown_0_0_
#else
            messageWindow->unknown_19ce_
#endif
        ) != 0 && messageWindow->unknown_44_ == 0) {
        func_0204394c((struct Struct_0204394c*)(messageWindow->unknown_1e28_));
    }
    {
        int i;
        for (i = 0; i < 2; i++) {
            SetDisplayWindowEnabled_020e2cc4((DisplayWindow_020439b0*)&messageWindow->unknown_1964_[i], 0);
        }
    }

    if (arg1 != 0 && messageWindow->unknown_998_ == 0) return;
    {
        void* var30 = messageWindow->unknown_1e28_;
        if (var30 != 0) {
            Struct_0204166c* glyphEntry;
            int i;
            for (i = 0; i < 0x80; i++) {
                if (messageWindow->unknown_17b8_[i] != 0) {
                    glyphEntry = &messageWindow->unknown_9b8_[i];
                    if (glyphEntry->unknown_16_0_) {
                        if (messageWindow->unknown_19cc_ != 0 || (
#if defined(jpn)
            messageWindow->unknown_17ff_.unknown_0_0_
#else
            messageWindow->unknown_19ce_
#endif
        ) != 0) {
                            glyphEntry->unknown_16_0_ = 0;
                        } else {
                            ((TextureArena*)((char*)messageWindow->unknown_1e28_))->Restore();
                            func_02041754(glyphEntry);
                            ((TextureArena*)((char*)messageWindow->unknown_1e28_))->Save();
                        }
                        func_02042af4((int)window, messageWindow->unknown_2cc_, glyphEntry->unknown_8_);
                    }
                }
            }
        }
    }

    if ((*(Struct_020439b0_5*)(window + Enum_020439b0_2324)).unknown_8_ >= 2) {
        func_020e2d2c((Struct_020439b0_3*)&messageWindow->unknown_1964_[0], 4, 0x76, 0xf8, 0x46);
        if ((*(unsigned char*)(window + Enum_020439b0_6498)) != 0) {
            SetDisplayWindowEnabled_020e2cc4((DisplayWindow_020439b0*)&messageWindow->unknown_1964_[0], 1);
        }
    }

    if ((*(int*)(window + Enum_020439b0_332)) >= 2) {
        int x = (*(Struct_020439b0_7*)(window + Enum_020439b0_324)).unknown_0_;
        int y = (*(Struct_020439b0_7*)(window + Enum_020439b0_324)).unknown_2_;
        int width = (*(Struct_020439b0_7*)(window + Enum_020439b0_324)).unknown_4_;
        int height = (*(Struct_020439b0_7*)(window + Enum_020439b0_324)).unknown_6_;
        func_020e2d2c((Struct_020439b0_3*)&messageWindow->unknown_1964_[1], x + 2, y + 2, width - 4, height - 4);
        if ((*(unsigned char*)(window + Enum_020439b0_6498)) != 0) {
            SetDisplayWindowEnabled_020e2cc4((DisplayWindow_020439b0*)&messageWindow->unknown_1964_[1], 1);
        }
    }

    int i;
    for (i = 0; i < 2; i++) {
        func_020e2c34((Struct_020439b0_4*)&messageWindow->unknown_1964_[i]);
    }
}
