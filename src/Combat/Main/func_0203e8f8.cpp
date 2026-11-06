#include <globaldefs.h>
#include "NitroSDK/NSBXX/RenderConfig.h"
#include "NitroSDK/NSBXX/GeometryFifo.h"
#include "NitroSDK/Matrix.h"
#include "NitroSDK/VRAM.h"
#include "NitroSDK/LoadToVRAM.h"
#include "NitroSDK/Cache.h"
#include "NitroSDK/Timing.h"
#include "Graphics/LightingManager.h"
#include "Graphics/LightingInfo.h"
#include "Graphics/VRAMStaging.h"
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"
#include "Resource/Brightness.h"
#include "World/Object3D.h"
#include "World/Zone3D.h"

#if defined(jpn)
#define func_0203e8f8 func_0203edf4
#define func_020d8524 func_020d9e88
#define data_020e7968 data_020e82c4
#define data_020e7974 data_020e82d0
#define data_020e7980 data_020e82dc
#define data_020e7990 data_020e82ec
#define data_020e9a50 data_020e9b5c
#define data_020e7948 data_020e82a4
#define data_020e794a data_020e82a6
#define data_020e794c data_020e82a8
#define data_020e7950 data_020e82ac
#define data_020e7954 data_020e82b0
#define data_020e7958 data_020e82b4
#define data_020e795c data_020e82b8
#define data_020e7960 data_020e82bc
#define data_020e7964 data_020e82c0
#define data_020efda4 data_020efcbc
#define data_020efdad data_020efcc5
#define data_020efdb8 data_020efcd0
#endif

struct Struct_0203f008;

struct Struct_0203e8f8 {
    unsigned char unknown_0_[0x14];
    Struct_0203f008* unknown_14_;
    unsigned char unknown_18_[4];
    Object3D* unknown_1c_;
};

struct Struct_0203e8f8_4 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_[4];
    unsigned char* unknown_c_;
};

struct Struct_0203e8f8_3 {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned char unknown_6_[2];
    Struct_0203e8f8_4* unknown_8_;
    unsigned char unknown_c_[8];
};

struct Struct_0203e8f8_5 {
    unsigned char unknown_0_[0x10];
    unsigned int* unknown_10_;
};

struct Struct_0203e8f8_2 {
    unsigned char unknown_0_[0x10];
    void* unknown_10_;
    unsigned char unknown_14_[2];
    unsigned short unknown_16_;
    Struct_0203e8f8_3* unknown_18_;
    unsigned int unknown_1c_;
    unsigned char unknown_20_[4];
    unsigned int unknown_24_;
    unsigned int unknown_28_;
    Struct_0203e8f8_5* unknown_2c_;
};

struct Struct_020e7990 {
    const char* unknown_0_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    short unknown_6_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    unsigned char unknown_e_[2];
};

struct Struct_020e7980 {
    unsigned short unknown_0_[8];
};

struct Struct_0203e624 {
    unsigned short* unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
};

extern "C" Struct_0203e8f8_2* func_0203f008(Struct_0203f008* arg0);
extern "C" void func_020c555c(const unsigned short* arg0);
extern "C" void Set3DClearColorAndDepth_020c5588(int color, int alpha, int depth, int polygonId, int isFogEnabled);
extern "C" void func_020d86d0(int arg0, int arg1);
extern "C" void WaitForVBlank_020c9820(void);
extern "C" Vector3i func_020406f8(Struct_0203e8f8* arg0);
extern "C" Vector3i func_020407c4(Struct_0203e8f8* arg0);
extern "C" void func_020c52e8(void);
extern "C" void func_020c5414(void);
extern "C" void func_ov017_0218eafc(GameResources* arg0, int arg1);
extern "C" int func_0203e7b4(Struct_0203e624* arg0, void* arg1, unsigned char* arg2, void* arg3, unsigned int arg4, int arg5, int arg6, int arg7, int arg8);
extern "C" unsigned int func_02040184(void* arg0, const char* arg1);
extern "C" unsigned int func_020d8524(void* arg0, const void* arg1, unsigned int arg2);
extern "C" Zone3D* GetZone3D_02012fe4(void);

struct Struct_021075f4;
extern "C" void func_020401e4(Struct_021075f4* arg0);
extern "C" void func_0203cf58(Struct_021075f4* arg0);

struct Struct_021075f4 {
    unsigned char unknown_0_[0x1e8];
    Struct_021075f4();
};

static float data_020efd94 = 180.0f;
static float data_020efd90 = 30.0f;
static float data_020efda0 = 30.0f;
static float data_020efd8c = 180.0f;
static float data_021075e0 = data_020efda0 + (data_020efd94 + (data_020efd8c + data_020efd90));
extern float data_021075e4;
static float data_021075d8 = data_021075e4 + data_020efd8c;
float data_021075e4;
static float data_021075f0 = data_021075d8 + data_020efd90;
static float data_021075ec = data_021075f0 + data_020efd94;
static char data_020efda4[] = "stand_up";
static char data_020efdad[] = "stand_down";
static char data_020efdb8[] = "stand_left";
Struct_021075f4 data_021075f4;
extern const int data_020e7950 = 0x50;
extern const int data_020e7960 = 3;
extern const unsigned short data_020e794a = 0x1999;
extern const int data_020e795c = 0xc0;
extern const int data_020e7958 = 0x40;
extern const int data_020e794c = 0x8f;
extern const int data_020e7954 = 0x50;
extern const unsigned short data_020e7948 = 0x18c8;
extern const int data_020e7964 = 0x78;
const Vector3i data_020e7974 = { 0, 0x1000, 0 };
const Struct_020e7990 data_020e7990[] = {
    { data_020efdad, 0x00, 0x00, 0x60, 0x16, 0x40, 0x00 },
    { data_020efdb8, 0x40, 0x00, 0x20, 0x16, 0x20, 0x30 },
    { data_020efda4, 0x80, 0x00, -0x20, 0x16, -0x40, 0x00 },
};
const Vector3i data_020e7968 = { 0, 0, 0 };
const Struct_020e7980 data_020e7980 = { { 0x18c8, 0x18c8, 0x18c8, 0x18c8, 0x18c8, 0x18c8, 0x18c8, 0x18c8 } };
extern const short data_020e9a50[];

static inline int inline_0203e8f8(int arg0, int arg1)
{
    return (int)((((long long)arg0) * arg1 + 0x800) >> 12);
}

// USA: func_0203e8f8
extern "C" ARM int func_0203e8f8(void* arg0, Struct_0203e8f8* arg1, SafeAllocator* arg2)
{
    Struct_020e7980 var0;
    int var7;
    GameResources* var8;
    int var9;
    unsigned int var10;
    unsigned char* var11;
    unsigned char* var12;
    unsigned int var13;
    Struct_0203e8f8_2* var14;
    int var15;
    int var16;
    if (arg2 == 0)
    {
        return 0;
    }
    if (arg1 == 0)
    {
        return 0;
    }
    if (arg1->unknown_14_ == 0)
    {
        return 0;
    }
    if (arg1->unknown_1c_ == 0)
    {
        return 0;
    }
    var14 = func_0203f008(arg1->unknown_14_);
    if (var14 == 0)
    {
        return 0;
    }
    var8 = GetGameResources();
    GetCurrentTimestamp();
    var0 = data_020e7980;
    func_020c555c(var0.unknown_0_);
    Set3DClearColorAndDepth_020c5588(0x7c00, 0, 0x7fff, 0, 0);
    func_020d86d0(0, 0);
    WaitForVBlank_020c9820();
    LockStagedTextureVRAMCopying();
    var9 = GetTextureImageVRAMBanks();
    MapVRAMBanksToTextureImage(var9 & ~VRAM_BANK_D);
    MapVRAMBanksToLCDC(VRAM_BANK_D);
    arg1->unknown_1c_->EnableFlag(0x10);
    Vector3i var1 = func_020406f8(arg1);
    Vector3i var2 = func_020407c4(arg1);
    func_020c52e8();
    func_020c5414();
    static const int var39 = data_020e9a50[0x32];
    static const int var40 = data_020e9a50[0x33];
    RenderConfig::Reset();
    RenderConfig::SetDiffuseAmbientColors(LightingManager::GetInstance()->modelDiffuseColor_, 0, 0);
    {
        Object3D* var17 = arg1->unknown_1c_;
        var17->position_.x = 0x64000;
        var17->position_.y = 0;
        var17->position_.z = 0;
    }
    SetFlags04(var8, 0x1000);
    func_ov017_0218eafc(var8, arg1->unknown_1c_->unknown_4_);
    ClearFlags04(var8, 0x1000);
    arg1->unknown_1c_->position_ = data_020e7968;
    arg1->unknown_1c_->rotation_ = data_020e7968;
    RenderConfig::SubmitToFifo();
    Vector3i var3;
    {
        const Struct_020e7990* var18 = data_020e7990;
        unsigned int var19;
        for (var19 = 0; var19 < 3; var19++, var18++)
        {
            int var20;
            int var21;
            int var22;
            var16 = var18->unknown_a_ << 12;
            var15 = var18->unknown_c_ << 12;
            var21 = inline_0203e8f8(var16, var16);
            var22 = inline_0203e8f8(var15, var15);
            var20 = fix32_Sqrt(var22 + var21);
            var3.x = inline_0203e8f8(var40, var15);
            var3.y = inline_0203e8f8(var39, var20);
            var3.z = inline_0203e8f8(var40, var16);
            Mat4x4_WriteProjectionUnknown((-(var18->unknown_8_ - 0x60)) * 0x78, (-(var18->unknown_8_ + 0x60)) * 0x78, (var18->unknown_6_ - 0x80) * 0x78, (var18->unknown_6_ + 0x80) * 0x78, 0x1000, 0x64000, 0x1000, &data_0210a010.projectionMatrix);
            data_0210a010.flags &= ~0x50;
            data_0210a010.eyeVector = var3;
            data_0210a010.upVector = data_020e7974;
            data_0210a010.targetVector = data_020e7968;
            Mat4x3_WriteViewMatrix(&var3, &data_020e7974, &data_020e7968, &data_0210a010.viewMatrix);
            data_0210a010.flags &= ~0xe8;
            RenderConfig::SubmitToFifo();
            func_ov017_0218eafc(var8, arg1->unknown_1c_->unknown_4_);
        }
    }
    SendQueuedDataToGeometryFifo();
    func_020d86d0(0, 0);
    WaitForVBlank_020c9820();
    *(volatile unsigned int*)0x4000064 = 0x812b0010;
    WaitForVBlank_020c9820();
    DC_FlushRange((void*)0x06870000, 0x10000);
    Struct_0203e624 var4;
    {
        void* var23 = arg2->Allocate(var14->unknown_1c_ * 2);
        unsigned char* var24 = (unsigned char*)arg2->Allocate(0x3c00);
        if (var23 != 0 && var24 != 0 && func_0203e7b4(&var4, var23, var24, (void*)0x06870000, var14->unknown_1c_, 0xc0, 0x50, 0x100, 0x80))
        {
            const Struct_020e7990* var25;
            unsigned int var26;
            DC_FlushRange(var23, var14->unknown_1c_ * 2);
            MemoryMapTexturePalette();
            LoadToTexturePalette(var23, var14->unknown_24_, var14->unknown_1c_ * 2);
            MemoryUnmapTexturePalette();
            DC_FlushRange(var24, 0x8000);
            var25 = data_020e7990;
            for (var26 = 0; var26 < 3; var26++, var25++)
            {
                unsigned int var27 = func_02040184(&var14->unknown_10_, var25->unknown_0_);
                Struct_0203e8f8_5* var28 = (var14->unknown_28_ <= var27) ? 0 : &var14->unknown_2c_[var27];
                if (var28 != 0 && var28->unknown_10_ != 0)
                {
                    unsigned int var29 = *var28->unknown_10_;
                    Struct_0203e8f8_3* var30 = (var14->unknown_16_ <= var29) ? 0 : &var14->unknown_18_[var29];
                    if (var30 != 0)
                    {
                        Struct_0203e8f8_4* var31 = var30->unknown_8_;
                        unsigned int var32;
                        for (var32 = 0; var32 < var30->unknown_4_; var32++, var31++)
                        {
                            var10 = 1 << (var31->unknown_4_ + 3);
                            var7 = 1 << (var31->unknown_6_ + 3);
                            var12 = &var24[(var25->unknown_5_ + var31->unknown_2_) * 0xc0];
                            var12 = &var12[var25->unknown_4_ + var31->unknown_0_];
                            for (var11 = var31->unknown_c_, var13 = 0; var13 < var7; var13++, var11 += var10, var12 += 0xc0)
                            {
                                func_020d8524(var11, var12, var10);
                            }
                        }
                    }
                }
            }
        }
    }
    arg1->unknown_1c_->position_ = var1;
    arg1->unknown_1c_->rotation_ = var2;
    GetCurrentTimestamp();
    MapVRAMBanksToTextureImage(var9);
    UnlockStagedTextureVRAMCopying();
    {
        LightingManager* var33 = LightingManager::GetInstance();
        Zone3D* var34 = GetZone3D_02012fe4();
        int var35 = var33->timeOfDayIndex_;
        int var36 = var33->lightingIndexOverride_;
        LightingInfo* var37 = &var34->lighting_;
        int var38;
        if (var36)
        {
            var35 = var36;
        }
        if (var37->maybeMode_ == 1)
        {
            var38 = var37->basic_.backgroundColor[var35];
        }
        else
        {
            var38 = var37->advanced_.backgroundColor[var35];
        }
        Set3DClearColorAndDepth_020c5588(var38, 0x10, 0x7fff, 0, 0);
    }
    return 1;
}

inline Struct_021075f4::Struct_021075f4()
{
    func_020401e4(this);
    func_0203cf58(this);
}
