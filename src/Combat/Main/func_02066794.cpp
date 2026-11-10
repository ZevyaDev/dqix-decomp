#pragma ipa file
#include <globaldefs.h>
#include "Resource/FontGlyphTable.h"
#include "Resource/MessageSystem.h"
#include "Resource/MessageUpdate.h"
#include "Combat/EntryGetterTypes.h"
#include "GameState/GameState.h"
#include "Input/Input.h"
#include "Resource/GameResources.h"
#include "std_library_functions.h"
#include "Graphics/VRAMStaging.h"

#if defined(jpn)

struct NPCManager_0203dce4_2;
struct NPC_0203dce4;
struct SpriteAnimationList_0205a254;
struct SpriteAnimationList_0205a330;
struct Struct_02065758;
struct Struct_0205ce28_2;
struct Struct_0202f6a4;
struct Struct_02065990;
struct Struct_020456d0;
struct SoundEffectManager_02108760;
struct Queue_02038598_5;
struct NPC_0203de84_2;
struct Struct_02065990_2;
struct Struct_02065990_3;
struct MusicManager_02109bf4_2;
struct Struct_02066a6c_2;
struct Struct_02042b98_3;
struct Struct_02015ef4_2;
struct Struct_02045c00_2;
struct Struct_02043124;
struct Struct_0204500c_4;

struct Struct_02066794 {
    signed char unknown_0_;
    signed char unknown_1_;
    unsigned char unknown_2_;
};

struct Struct_02066934 {
    signed char unknown_0_;
    signed char unknown_1_;
    unsigned char unknown_2_;
};

struct Struct_02065758 {
    unsigned char unknown_0_[0x1708];
    int unknown_1838_;
    unsigned char unknown_170c_[0x1787 - 0x1708 - 4];
    unsigned char unknown_1959_;
    unsigned char unknown_1788_[0x17e7 - 0x1787 - 1];
    unsigned char unknown_19b7_;
};

struct Struct_020657c8 {
    unsigned char unknown_0_[0x789];
    unsigned char unknown_95b_;
};

struct Struct_020657c8_2 {
    unsigned char unknown_0_[0x870];
    int unknown_9a0_;
    int unknown_9a4_;
    int unknown_9a8_;
    int unknown_9ac_;
    int unknown_9b0_;
    unsigned char unknown_9b4_[0x1000 - 0x884];
    struct Struct_020657c8 unknown_1000_;
};

struct Struct_02065920 { unsigned char unknown_0_0_:2; unsigned char unknown_0_2_:1; };

struct Struct_0203de84 {
    int unknown_0_[3];
};

struct Struct_02065990_4 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
};

struct Struct_02065990_5 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_02065990_6 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
};

union Struct_02065990_7 {
    unsigned int unknown_0_;
    struct {
        unsigned int unknown_0_0_ : 7;
        unsigned int unknown_0_7_ : 4;
        unsigned int unknown_1_3_ : 5;
        unsigned int unknown_2_0_ : 5;
        unsigned int unknown_2_5_ : 6;
    } unknown1_0_;
};

struct Struct_02067ea0_2 {
    char unknown_0_[0xc];
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    signed char unknown_18_[2];
    char unknown_1a_[2];
};

struct Struct_02067ea0_3 {
    char unknown_0_[0x50];
    unsigned int unknown_50_0_ : 16;
    unsigned int unknown_52_0_ : 16;
};

struct Struct_02067ea0 {
    void* unknown_0_;
    char* unknown_4_;
    char unknown_8_[0x10 - 0x8];
    unsigned int unknown_10_;
    char unknown_14_[0x44 - 0x14];
    unsigned int unknown_44_;
    char unknown_48_[0x888 - 0x48];
    Struct_02067ea0_2 unknown_888_[128];
    char unknown_1688_[0x1730 - 0x1688];
    int unknown_1730_;
    char unknown_1734_[0x17e1 - 0x1734];
    unsigned char unknown_17e1_;
    char unknown_17e2_[0x17ff - 0x17e2];
    unsigned char unknown_17ff_0_ : 1;
    unsigned char unknown_17ff_1_ : 7;
    char unknown_1800_[0x1c4c - 0x1800];
    Struct_02067ea0_3* unknown_1c4c_;
};

struct Struct_020681b4 {
    char unknown_0_[0xc];
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
};

struct Struct_02066a6c_8 { char unknown_0_[0x1c]; };

struct Struct_02066a6c_9 { short unknown_0_; short unknown_2_; int unknown_4_; int unknown_8_; int unknown_c_; int unknown_10_; int unknown_14_; int unknown_18_; };

struct Struct_02066a6c { char unknown_0_[0x440]; Struct_02066a6c_9* unknown_440_; };

struct Struct_02066a6c_5 {
    void* unknown_0_;
    char unknown_4_[0x7e0]; Struct_02066a6c_9 unknown_7e4_; Struct_02066a6c_9 unknown_800_;
    char unknown_81c_[0x6c]; Struct_02066a6c_8 unknown_888_[128];
    char unknown_1688_[0xc4]; unsigned short unknown_174c_;
    char unknown_174e_[4]; unsigned short unknown_1752_[16];
    unsigned short unknown_1772_;
    char unknown_1774_[0x80]; unsigned char unknown_17f4_; unsigned char unknown_17f5_;
    char unknown_17f6_[0xe]; Struct_02066a6c unknown_1804_;
};

struct Struct_02066cc0 {
    short unknown_0_;
    short unknown_2_;
};

struct Struct_02066a6c_2 {
    char unknown_0_[0x440];
    struct Struct_02066cc0* unknown_440_;
};

struct Struct_02066cf0_2 {
    char unknown_0_[0xc];
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    signed char unknown_18_[2];
    char unknown_1a_[2];
};

struct Struct_02066cf0_3 {
    void* unknown_0_;
    void* unknown_4_;
    int unknown_8_;
    unsigned int unknown_c_;
    unsigned int unknown_10_;
    char unknown_14_[4];
    unsigned short* unknown_18_;
    char unknown_1c_[4];
    int unknown_20_;
    int unknown_24_;
    char unknown_28_[0x10];
    int unknown_38_;
    char unknown_3c_[4];
    unsigned int unknown_40_;
    unsigned int unknown_44_;
    char unknown_48_[0x868 - 0x48];
    int unknown_868_;
    char unknown_86c_[0x880 - 0x86c];
    int unknown_880_;
    char unknown_884_[4];
    Struct_02066cf0_2 unknown_888_[128];
    char unknown_1688_[0x1718 - 0x1688];
    char unknown_1718_[0x10];
    int unknown_1728_;
    int unknown_172c_;
    int unknown_1730_;
    int unknown_1734_;
    int unknown_1738_;
    char unknown_173c_[0x174c - 0x173c];
    unsigned short unknown_174c_;
    char unknown_174e_[0x1772 - 0x174e];
    unsigned short unknown_1772_;
    short unknown_1774_;
    char unknown_1776_[0x1789 - 0x1776];
    unsigned char unknown_1789_;
    char unknown_178a_[0x17e1 - 0x178a];
    unsigned char unknown_17e1_;
    char unknown_17e2_[0x17e8 - 0x17e2];
    unsigned char unknown_17e8_;
    unsigned char unknown_17e9_;
    char unknown_17ea_[0x17f4 - 0x17ea];
    unsigned char unknown_17f4_;
    char unknown_17f5_;
    unsigned char unknown_17f6_;
    char unknown_17f7_[0x17fc - 0x17f7];
    unsigned char unknown_17fc_;
    unsigned char unknown_17fd_;
    char unknown_17fe_;
    unsigned char unknown_17ff_0_ : 1;
    unsigned char unknown_17ff_1_ : 7;
    char unknown_1800_[4];
    char unknown_1804_[0x1c4c - 0x1804];
    void* unknown_1c4c_;
};

enum { Enum_020675fc_2456 = 0x868, Enum_020675fc_288 = 0x7e, Enum_020675fc_90 = 0x5c };

struct Struct_02015ef4 { unsigned int unknown_0_[3]; };

union Struct_020675fc {
    Struct_0203de84 unknown_0_;
    Struct_02015ef4 unknown1_0_;
};

struct Struct_020675fc_2 {
    unsigned char unknown_0_[Enum_020675fc_2456];
    int unknown_998_;
    unsigned char unknown_99c_[0xe9c];
    int unknown_1838_;
    unsigned char unknown_183c_[Enum_020675fc_288];
    unsigned char unknown_195c_;
    unsigned char unknown_195d_[Enum_020675fc_90];
    unsigned char unknown_19b7_;
};

struct Struct_020676e0 {
    char unknown_0_[0x23c];
    int unknown_23c_;
    char unknown_240_[4];
    unsigned char unknown_244_;
};

struct Struct_020676e0_2 { char unknown_0_[0xda]; unsigned short unknown_da_; };

struct Struct_020676e0_3 { char unknown_0_[0x5a68]; unsigned char unknown_5cc8_; };

struct Struct_020676e0_4 {
    char unknown_0_[0x4c];
    Struct_020676e0_2* unknown_8c_;
    unsigned char unknown_90_[0x824 - 0x50];
    int unknown_954_;
    char unknown_958_[0x85c - 0x828];
    int unknown_98c_;
    char unknown_990_[0x870 - 0x860];
    int unknown_9a0_;
    char unknown_9a4_[0x17ea - 0x874];
    unsigned char unknown_19ba_;
    char unknown_19bb_[0x17ff - 0x17eb];
    unsigned char unknown_17ff_0_ : 4;
    unsigned char unknown_19d2_ : 1;
    unsigned char unknown_17ff_5_ : 3;
};

typedef void (Struct_020676e0_4::*Type_02000c9c_11)(int);

struct Struct_0206935c {
    unsigned char unknown_0_[0x24];
    unsigned short* unknown_24_;
    unsigned char unknown_28_[0x50 - 0x28];
    unsigned char unknown_50_[1];
};

enum { Enum_02044420_65312 = 0xff22 };

struct Struct_02067b28 {
    char unknown_0_[0x18];
    unsigned short* unknown_4c_;
    unsigned short* unknown_50_;
    void* unknown_54_;
    void* unknown_58_;
    char unknown_5c_[0x10];
    unsigned int unknown_6c_;
    unsigned int unknown_70_;
    char unknown_74_[0x7c4];
    short unknown_934_, unknown_936_;
    char unknown_938_[0x7c];
    unsigned int unknown_9b4_;
    char unknown_9b8_[0xe00];
    unsigned char unknown_17b8_[0x80];
    char unknown_1838_[0x4a];
    unsigned short unknown_1882_[16];
    unsigned short unknown_1942_;
    short unknown_1946_;
    char unknown_1948_[0x12];
    unsigned char unknown_19dc_;
    char unknown_1789_[0x69];
    unsigned char unknown_17f2_;
    unsigned char unknown_19c2_;
    unsigned char unknown_19c3_;
    unsigned char unknown_19c4_;
};

struct Struct_02069878 {
    unsigned char unknown_0_[0x14];
    void* unknown_14_;
    unsigned char unknown_18_[0x2c - 0x18];
    char* unknown_2c_;
    char* unknown_30_;
    unsigned char unknown_34_[0x870 - 0x34];
    int unknown_870_;
    unsigned char unknown_874_[0x1788 - 0x874];
    unsigned char unknown_1788_;
};

struct Struct_020698d8 {
    char unknown_0_[0x23c];
    char unknown_23c_[0x40];
    char unknown_27c_[0x40];
    char unknown_2bc_[0x40];
    char unknown_2fc_[0x40];
    char unknown_33c_[0x40];
    char unknown_37c_[16][0x40];
    int unknown_77c_;
    int unknown_780_[16];
    unsigned char unknown_7c0_;
    unsigned char unknown_7c1_[16];
    unsigned char unknown_7d1_;
    unsigned char unknown_7d2_[16];
    char unknown_7e2_[0x1750 - 0x7e2];
    signed char unknown_1750_;
};

struct Struct_020698d8_2 {
    char unknown_0_[0x134];
    char* unknown_134_;
};

struct Struct_020698d8_3 {
    void* unknown_0_;
    char* unknown_4_;
    unsigned int unknown_8_0_ : 4;
    unsigned int : 28;
    char unknown_c_[0xc];
    short unknown_18_;
};

struct Struct_020698d8_4 {
    char unknown_0_[0x294];
    Struct_020698d8_3 unknown_294_;
};

struct Struct_020698d8_5 {
    char unknown_0_[0x144];
    Struct_020698d8_4* unknown_144_;
};

struct Struct_020698d8_6 {
    char unknown_0_[0x6f9c];
    short unknown_6f9c_;
};

struct Struct_02069ecc {
    char unknown_0_[0x1710];
    int unknown_1710_;
    char unknown_1714_[0x174e - 0x1714];
    short unknown_174e_;
    char unknown_1750_[0x1776 - 0x1750];
    short unknown_1776_;
    unsigned char unknown_1778_[4];
    signed char unknown_177c_[4];
    signed char unknown_1780_[4];
    signed char unknown_1784_;
    char unknown_1785_[0x178c - 0x1785];
    unsigned char unknown_178c_;
    char unknown_178d_;
    unsigned char unknown_178e_;
    char unknown_178f_[0x17dd - 0x178f];
    signed char unknown_17dd_;
    char unknown_17de_[0x17f7 - 0x17de];
    unsigned char unknown_17f7_;
    unsigned char unknown_17f8_;
};

struct Struct_02069ecc_2 {
    char* unknown_0_[6];
};

struct Struct_02069ecc_3 {
    char unknown_0_[0xf7c];
    unsigned char unknown_f7c_;
};

struct Struct_02069ecc_4 {
    char unknown_0_[0x14];
    unsigned char unknown_14_0_ : 1;
};

struct Struct_0206a3c0
{
    char unknown_0_[0x708];
    int unknown_838_;
    int unknown_83c_;
    int unknown_840_;
    int unknown_844_;
    char unknown_848_[0x18];
    int unknown_860_;
    int unknown_864_;
    char unknown_868_[0x14];
    unsigned short unknown_87c_;
    char unknown_74e_[0x39];
    unsigned char unknown_959_;
    char unknown_95a_[2];
    unsigned char unknown_95c_;
    char unknown_78b_[0x56];
    unsigned char unknown_9b1_;
    char unknown_9b2_[4];
    unsigned char unknown_9b6_;
    unsigned char unknown_9b7_;
    unsigned char unknown_9b8_;
    char unknown_9b9_[2];
    unsigned char unknown_9bb_;
};

struct Struct_0206a3c0_2
{
    char unknown_0_[0x874];
    int unknown_9a4_;
    char unknown_878_[0x788];
    Struct_0206a3c0 unknown_1000_;
};

typedef unsigned short Type_0206aa28;

enum { Enum_0206aa28_20 = 0x14, Enum_0206aa28_80 = 0x1c, Enum_0206aa28_84 = 0x20,
       Enum_0206aa28_36 = 0x24, Enum_0206aa28_52 = 0x34, Enum_0206aa28_108 = 0x38,
       Enum_0206aa28_112 = 0x3c, Enum_0206aa28_116 = 0x40, Enum_0206aa28_120 = 0x44 };

struct Struct_0206b104 {
 char unknown_0_[0x18]; unsigned short* unknown_4c_; int unknown_1c_; int unknown_20_; int unknown_24_;
 char unknown_28_[0x10]; int unknown_6c_; int unknown_70_; union { int unknown_74_; int unknown_88_; }; int unknown_78_;
};

enum { Enum_0206b224_76 = 0x18, Enum_0206b224_640 = 0x140 };

struct Struct_0206b224 {
    char unknown_0_[Enum_0206b224_76];
    void* unknown_4c_;
    void* unknown_50_;
    void* unknown_54_;
    unsigned char* unknown_58_;
    char unknown_5c_[4];
    void* unknown_60_;
};

struct Struct_0206cc50 {
    char unknown_0_[8];
    int unknown_8_;
    char unknown_c_[0x1724];
    int unknown_1730_;
    char unknown_1734_[0x54];
    unsigned char unknown_1788_;
};

struct Struct_02065990 {
    unsigned char unknown_0_[0x18];
    unsigned short* unknown_4c_;
    unsigned char unknown_50_[0x74 - 0x50];
    int unknown_74_;
    int unknown_78_;
};

namespace { enum { Enum_0206b7b0_2324 = 0x7e4, Enum_0206b7b0_324 = 0x104 }; }

enum { Enum_0206b804_6592 = 0x17f0, Enum_0206b804_6605 = 0x17fe, Enum_0206b804_64 = 0xc, Enum_0206b804_6493 = 0x178b };

extern "C" unsigned char* GetMessageWindow_020421a0();
extern "C" void __clear(void* arg0, unsigned int arg1);
extern "C" void func_02046458(int arg0, int arg1, unsigned char arg2, char* arg3, unsigned char arg4, unsigned char arg5, void* arg6, int arg7, int arg8);
extern "C" void func_02050678(void* arg0, int arg1, int arg2, void* arg3, int arg4, int arg5, short* arg6, short* arg7);
extern "C" NPCManager_0203dce4_2* GetNPCManager_0203cf4c();
extern "C" NPC_0203dce4* GetNPCByIndex_0203dce4(NPCManager_0203dce4_2* npcManager, int index);
extern "C" void func_0206b104(struct Struct_0206b104* arg0);
extern "C" void func_0206cba0(struct Struct_0206b224* arg0);
extern "C" void func_020665bc(char*, int, const char*, const char*);
extern "C" void SetSpriteAnimationOAMIndex_0205a42c(SpriteAnimationList_0205a254*, int, int);
extern "C" void AdvanceSpriteAnimations_0205a330(SpriteAnimationList_0205a330*, int);
extern "C" void ResetMessageWindow_02043204(char*);
extern "C" int func_02065758(Struct_02065758* arg0, int arg1);
extern "C" void func_0202f380(void* arg0, int arg1);
extern "C" int func_0205ce28(Struct_0205ce28_2* arg0);
extern "C" void func_0202f6a4(Struct_0202f6a4* arg0);
extern "C" void func_0206b61c(struct Struct_02065990* arg0);
extern "C" int func_020657c8(struct Struct_020657c8_2* arg0, int arg1);
extern "C" void func_020658ac(unsigned char* arg0, unsigned int arg1);
extern "C" int func_0209ca2c(void* arg0);
extern "C" void func_020456d0(Struct_020456d0*);
extern "C" void func_02065920(unsigned char* arg0, unsigned int arg1);
extern "C" void func_020676e0(Struct_020676e0_4* arg0, int arg1);
extern "C" void CloseMessageWindow_02043124(void* window);
extern "C" void func_ov017_0218d7b0(unsigned char* arg0, char* arg1);
extern "C" void PlaySoundEffect_0205eaa0(SoundEffectManager_02108760* manager, int soundEffectIndex, int handle);
extern "C" void func_ov016_0218b5c0(int arg0, signed char arg1);
extern "C" void func_ov017_0218b5f8(signed char arg0);
extern "C" int IsTypeInQueue_02046b60(Queue_02038598_5*, int);
extern "C" void func_ov017_021a5ab0(void* arg0);
extern "C" void GetNPCPosition_020406f8(Struct_0203de84*, NPC_0203de84_2*);
extern "C" int fix32_Atan2(int arg0, int arg1);
int fix32ReduceAngle0To2Pi(int angle);
extern "C" void func_02065418(int arg0);
extern "C" int GetStandardString_020e51cc(int stringId);
extern "C" void func_020652d0(char* arg0, int arg1, int arg2, int arg3);
extern "C" unsigned char* GetResources_0200fb8c(int* gameState);
extern "C" void func_0208bf28(Struct_02065990_2*, int, unsigned char);
extern "C" unsigned char* GetQuestManager_02094d6c();
extern "C" int func_020965ac(Struct_02065990_3*, unsigned char);
extern "C" void GetCurrentDate_020cf0fc(int);
extern "C" void func_020cf1a8(int);
extern "C" void QueueJingle_0209c830(MusicManager_02109bf4_2*, int);
extern "C" void func_0208be94(unsigned char*);
extern "C" void func_0208beb4(unsigned char*);
extern "C" void func_0205e944(void* arg0, int arg1);

extern "C" int func_02042764(char* arg0);
extern "C" void func_02066934(unsigned char* arg0, void* arg1, void* arg2, int arg3, short arg4, unsigned char arg5);
extern "C" void func_02066794(void* arg0, int arg1, int arg2, char* arg3, short arg4, short arg5, unsigned char arg6);
extern "C" void func_020e2310(char* arg0, int arg1, int arg2, int arg3, char* arg4, unsigned char arg5, unsigned char arg6);
extern "C" void func_020417b0(void* arg0, int arg1, void* arg2, int arg3);
extern "C" void func_0206b804(char* arg0, int* arg1, int* arg2);
extern "C" void func_02066cc0(struct Struct_02066a6c_2* arg0, short* arg1, short* arg2);
extern "C" void func_02042c24(Struct_02042b98_3* arg0, int arg1, int arg2);
extern "C" void func_0202f404(void* arg0, int arg1, int arg2);
extern "C" void func_020681b4(struct Struct_020681b4* arg0, int arg1, int arg2, int arg3);
extern "C" void func_02044530(char* arg0, int arg1);
extern "C" void ColorEffect_ConfigureAlphaBlend(unsigned int* out, unsigned char a, unsigned char b, int c, int d);
extern "C" void func_02066a6c(Struct_02066a6c_5* arg0, int arg1);
extern "C" void func_020e2110(void* arg0);
extern "C" void func_020675fc(Struct_020675fc_2* arg0);
extern "C" bool func_02069408(void* arg0, unsigned int arg1);
extern "C" void func_0206cf44(unsigned char* arg0);
extern "C" void func_02044f5c(Struct_02066cf0_3* arg0, int* arg1, int* arg2);
extern "C" int func_02067ea0(Struct_02067ea0* arg0, int arg1, int arg2, unsigned short* arg3, unsigned short* arg4,
                                 int arg5, int arg6);
extern "C" void func_0204459c(void* arg0, int arg1);
extern "C" void func_020653e4(int arg0, int arg1);
extern "C" void* GetCamera_020100bc(GameState*);
extern "C" int ConvertWorldToScreen_0202ec84(void*, Struct_02015ef4*, int*, int*);
extern "C" void func_020473c8(Struct_02015ef4_2*, int);
extern "C" void func_0205c904(unsigned char*, int);
extern "C" int func_0205cde8(unsigned char*);
extern "C" void func_0205cd94(unsigned char*);
extern "C" int GetFollowCamera_020100f8(char*);
extern "C" int func_020a27c4(Struct_020676e0*);
extern "C" int func_ov017_021a4e70(unsigned char*);
extern "C" int func_0205cecc(void*);
extern "C" int func_0205cb64(void*);
extern "C" void func_0206cbe8(void* arg0, unsigned short arg1, unsigned short* arg2);
extern "C" void func_0205c840(void* arg0);

extern "C" int func_02043014(int, unsigned short*);
extern "C" int func_02045c00(Struct_02045c00_2*, const char*, int);
extern "C" int func_02046530(void*, unsigned short*, int, int);
extern "C" int CompareBytes_02001aec(const void* left, const void* right, unsigned int count);
extern "C" void func_02067b28(Struct_02067b28* arg0);
extern "C" void func_020698d8(Struct_020698d8* arg0, int arg1, signed char* arg2, char* arg3);
extern "C" void func_02069ecc(Struct_02069ecc* arg0, char* arg1, char* arg2);
extern "C" void func_0206c570(void* arg0, const char* arg1);
extern "C" int func_020d857c(const char* arg0, const char* arg1);
extern "C" int GetStringLength_020d2ff0(const char* string);
extern "C" int ParseDecimal_02005a94(const char* string);
extern "C" unsigned char GetOwnPartyLeaderObjectIndex_020100b0(GameState* gameState);
extern "C" int GetProtagonistObjectIndex_020100a8(GameState* gameState);
extern "C" int func_020474b4(Struct_020698d8* arg0, int arg1);
extern "C" void func_020de968(int arg0, char* arg1);
extern "C" const char* func_0206bed8(Struct_0206a3c0_2* arg0, const char* arg1);
extern "C" int func_020d85dc(const char* arg0, const char* arg1);
extern "C" double func_020055d4(const char* arg0);
extern "C" void func_020436dc(Struct_02069ecc* arg0, int arg1, int arg2);
extern "C" void func_02010834(GameState* arg0, int arg1, int* arg2, int* arg3);
extern "C" void func_02010890(GameState* arg0, int* arg1, int* arg2);
extern "C" Struct_02069ecc_4* GetAppearance_02052e2c(GameObject* gameObject);
extern "C" void func_0206c520(void* arg0, const char** arg1, const char* arg2, int arg3);
extern "C" unsigned short func_jpn_02098210(void* arg0, unsigned int arg1);
extern "C" void SetMessageWindowRect_02042b98(void*, int, int, int, int);
extern "C" void func_0206aa28(char* arg0);
extern "C" unsigned short* func_0206c730(void* arg0, unsigned short arg1, unsigned short* arg2);
extern "C" void func_0206c794(void* arg0);
extern "C" void func_0206cb14(void* arg0, int arg1, unsigned short arg2);
extern "C" int func_020694a0(void* arg0, unsigned int arg1);
extern "C" void func_0206b198(struct Struct_0204500c_4* arg0, unsigned short arg1);

extern "C" int func_02044420(void* arg0, void* arg1);
extern "C" void func_02041bbc(Struct_0204166c*);
extern "C" void func_0206b974(void* arg0, int arg1, void* arg2, void* arg3, int arg4, int arg5, int arg6, int arg7);
extern "C" int func_0206cc50(Struct_0206cc50* arg0, unsigned short* arg1);
extern "C" int func_02067ad8(int arg0, void* arg1);

extern const char data_020f07b4[], data_020f07b9[], data_020f07c0[], data_020f07c7[];
extern unsigned char gMusicManager_02109bf4;
extern SoundEffectManager_02108760 gSoundEffectManager_02108760;
extern int data_0210773c;
extern Type_02000c9c_11 data_020f079c[2];
extern const char data_020f07ce[];
extern signed char data_020f07d1[];
extern signed char* data_020f0784[];
extern char data_020f07d4[];
extern char data_020f07d9[];
extern char data_020f07e0[];
extern char data_020f07e5[];
extern char data_020f07ed[];
extern char data_020f07f5[];
extern char data_020f07fd[];
extern char data_020f0802[];
extern char data_020f0805[];
extern char data_020f080d[];
extern char data_020f0817[];
extern char data_020f0820[];
extern char data_020f0829[];
extern char data_020f082f[];
extern char data_020f0838[];
extern char data_020f0841[];
extern char data_020f0848[];
extern char data_020f084f[];
extern char data_020f0728[];
extern char data_020f072e[];
extern char data_020f0734[];
extern char data_020f073b[];
extern char data_020f0742[];
extern char data_020f085d[];
extern char data_020f0866[];
extern char data_020f086d[];
extern char data_020f0874[];
extern char data_020f087a[];
extern char data_020f0881[];
extern char data_020f088c[];
extern char data_020f0894[];
extern char data_020f08a5[];
extern char data_020f08ae[];
extern char data_020f08b8[];
extern char data_020f08c1[];
extern char data_020f08cb[];
extern char data_020f08d9[];
extern char data_020f08de[];
extern char data_020f08e2[];
extern char data_020f08e6[];
extern char data_020f08eb[];
extern char data_020f08ef[];
extern char data_020f08f3[];
extern char data_020f08f8[];
extern char data_020f0900[];
extern char data_020f0908[];
extern char data_020f0916[];
extern char data_020f0928[];
extern char data_020f0932[];
extern char data_020f0941[];
extern char data_020f0947[];
extern char data_020f094c[];
extern char data_020f0951[];
extern char data_020f0959[];
extern char data_020f0963[];
extern char data_020f096c[];
extern char data_020f0977[];
extern char data_020f0984[];
extern char data_020f0990[];
extern char data_020f09a0[];
extern char data_020f09b2[];
extern char data_020f09c3[];
extern char data_020f09cd[];
extern char data_020f09d9[];
extern char data_020f09e4[];
extern char data_020f09eb[];
extern char data_020f09f6[];
extern char data_020f09fb[];
extern char data_020f0a00[];
extern char data_020f0a08[];
extern char data_020f0a14[];
extern char data_020f0a23[];
extern const char data_020f0a2c[];
extern char data_020f0a35[];
extern char data_020f0a42[];
extern char data_020f0a4b[];
extern const char data_020f0a54[];
extern const char data_020f0a5a[];
extern char data_020f0a60[];
extern char data_020f0a66[];
extern char data_020f0a6b[];
extern char data_020f0a71[];
extern char data_020f0a78[];
extern char data_020f0a7e[];
extern char data_020f0a86[];
extern char data_020f0a8e[];
extern char data_020f0a97[];
extern char data_020f0aa0[];
extern char data_020f0aa9[];
extern char data_020f0ab2[];
extern char data_020f0ab5[];
extern char data_020f0ab8[];
extern const char data_020f0a2c[], data_020f0a54[], data_020f0a5a[], data_020f0abb[];
extern const char data_020f0ac2[], data_020f0ac8[], data_020f0ace[], data_020f0ad5[];
extern const char data_020f0adc[], data_020f0ae4[];
extern const char data_020f0aeb[];

static const short data_020e8824[4] = {1, 0, 2, 1};
static const short data_020e881c[4] = {0, 1, 1, 2};
static const signed char data_020e7e10[4] = {-2, 0, 0, 0};
static const signed char data_020e7e1c[4] = {0, 0, -3, 0};

extern "C" ARM void func_02066794(void* arg0, int arg1, int arg2, char* arg3, short arg4, short arg5, unsigned char arg6) {
    const int var99 = 0x3000;
    Struct_02066794 var0;
    __clear(&var0, sizeof(var0));
    var0.unknown_0_ = *(signed char*)(arg3 + 0x18);
    var0.unknown_1_ = *(signed char*)(arg3 + 0x19);
    char* var1 = func_02042a50(*(unsigned char*)(arg3 + 0x1a), (const char*)&var0);
    if (var1 == NULL) return;
    Struct_0203bebc* var2 = func_020429bc(*(unsigned char*)(arg3 + 0x1a));
    if (var2 == NULL) return;
    unsigned char var3 = var2->unknown_2_;
    unsigned char var4 = var2->unknown_3_;
    unsigned char var5 = (GetMessageWindow_020421a0() + 0x1000)[0x789];
    if (var5 & 0x80) {
        unsigned char var6;
        for (var6 = 0; var6 < 4; var6++) {
            func_02046458((short)(arg4 + data_020e881c[var6]), (short)(arg5 + data_020e8824[var6]), arg6, var1, var3, var4, arg0, arg1, arg2);
        }
        func_02046458((short)(arg4 + 1), (short)(arg5 + 1), arg6, var1, var3, var4, arg0, arg1, arg2);
    } else if (var5 & 2) {
        func_02046458((short)(arg4 + 1), (short)(arg5 + 1), 1, var1, var3, var4, arg0, arg1, arg2);
        func_02046458(arg4, arg5, arg6, var1, var3, var4, arg0, arg1, arg2);
    } else {
        func_02046458(arg4, arg5, arg6, var1, var3, var4, arg0, arg1, arg2);
    }
}

extern "C" ARM void func_02066934(unsigned char* arg0, void* arg1, void* arg2, int arg3, short arg4, unsigned char arg5) {
    static const short data_020e882c[4] = {0, 1, 1, 2};
    static const short data_jpn_020e8834[4] = {1, 0, 2, 1};
    short var0;
    short var1;
    Struct_02066934 var2;
    int var4;
    unsigned char var5;
    unsigned char var6;
    unsigned char var7;
    __clear(&var2, sizeof(var2));
    var2.unknown_0_ = *(signed char*)((char*)arg2 + 0x18);
    var2.unknown_1_ = *(signed char*)((char*)arg2 + 0x19);
    var7 = *(unsigned char*)((char*)arg2 + 0x1a);
    var4 = (short)(arg4 - (short)(*(short*)((char*)(*(void**)arg0) + 0xae) * 8));
    var5 = ((unsigned char*)GetMessageWindow_020421a0() + 0x1000)[0x789];
    if (var5 & 0x80) {
        for (var6 = 0; var6 < 4; var6++) {
            func_02050678(arg1, (short)(arg3 + data_020e882c[var6]), (short)(var4 + data_jpn_020e8834[var6]), &var2, var7, 1, &var0, &var1);
        }
        func_02050678(arg1, (short)(arg3 + 1), (short)(var4 + 1), &var2, var7, arg5, &var0, &var1);
    } else if (var5 & 2) {
        func_02050678(arg1, (short)(arg3 + 1), (short)(var4 + 1), &var2, var7, 1, &var0, &var1);
        func_02050678(arg1, (short)arg3, (short)var4, &var2, var7, arg5, &var0, &var1);
    } else {
        func_02050678(arg1, arg3, var4, &var2, var7, arg5, &var0, &var1);
    }
}

ARM unsigned short MessageWindow_02021b84::func_020656d0() {
    return unknown_4c_[unknown_78_];
}

ARM int MessageWindow_02021b84::func_020656e4(int arg0) {
    if (!unknown_19b6_) return 0;

    struct NPC_0203dce4* var0 = GetNPCByIndex_0203dce4(
        (struct NPCManager_0203dce4_2*)GetNPCManager_0203cf4c(),
        unknown_1838_);
    if (var0 == NULL) return 0;

    int var1 = 1;
    func_02040af0(var0,
        unknown_1844_);

    if (func_020409e0(var0) ==
        func_02040a20(var0)) {
        unknown_19b6_ = 0;
        var1 = 0;
    }
    return var1;
}

extern "C" ARM int func_02065758(Struct_02065758* arg0, int arg1) {
    NPC_0203dce4* var0;
    int var1;
    unsigned char var2;

    var0 = GetNPCByIndex_0203dce4((NPCManager_0203dce4_2*)GetNPCManager_0203cf4c(), arg0->unknown_1838_);
    if (var0 == NULL) {
        return 0;
    }
    if (arg0->unknown_19b7_ == 0) {
        return 0;
    }
    var2 = (unsigned char)arg1;
    var1 = 1;
    if (arg0->unknown_1959_ < var2) {
        arg0->unknown_1959_ = 0;
    } else {
        arg0->unknown_1959_ = arg0->unknown_1959_ - var2;
    }
    if (arg0->unknown_1959_ == 0) {
        var1 = 0;
        arg0->unknown_19b7_ = 0;
    }
    return var1;
}

extern "C" ARM int func_020657c8(struct Struct_020657c8_2* arg0, int arg1) {
    unsigned char var0 = arg0->unknown_1000_.unknown_95b_;
    int var1 = 0;
    const int var3 = 0x1f0000;
    const char var4 = 0xf;
    const int var2 = 0x8444;
    if (var0 & 4) {
        if (arg0->unknown_9a0_ == 0) {
            if (var0 & 8) {
                arg0->unknown_9b0_ = arg0->unknown_9b0_ + var2;
                if (arg0->unknown_9b0_ >= var3) {
                    arg0->unknown_9b0_ = var3;
                    arg0->unknown_9ac_ = 0;
                    arg0->unknown_1000_.unknown_95b_ &= ~8;
                    arg0->unknown_1000_.unknown_95b_ |= 0x10;
                }
            } else if (var0 & 0x10) {
                arg0->unknown_9ac_ = arg0->unknown_9ac_ + arg1;
                if (arg0->unknown_9a8_ <= arg0->unknown_9ac_) {
                    arg0->unknown_9ac_ = arg0->unknown_9a8_;
                    arg0->unknown_1000_.unknown_95b_ &= ~0x10;
                    arg0->unknown_1000_.unknown_95b_ |= 0x20;
                }
            } else if (var0 & 0x20) {
                arg1 = arg0->unknown_9b0_ - 0x44;
                arg1 -= 0x8400;
                arg0->unknown_9b0_ = arg1;
                if (arg0->unknown_9b0_ <= 0) {
                    arg0->unknown_9b0_ = 0;
                    arg0->unknown_1000_.unknown_95b_ = arg0->unknown_1000_.unknown_95b_ & ~0x20;
                }
            }
            var1 = 1;
        }
    }
    return var1;
}

extern "C" ARM void func_020658ac(unsigned char* arg0, unsigned int arg1) {
    unsigned char var0;
    if (arg0[0x17f1] != 0) {
        if (arg0[0x17f0] == 0) {
            arg0[0x17f0] = 1;
            arg0[0x178b] = 0x1e;
        }
    }
    if (arg0[0x17f0] == 0) return;
    var0 = arg0[0x178b];
    if (var0 <= arg1) {
        if (arg0[0x17f1] != 0) {
            arg0[0x178b] = var0 + (0x1e - arg1);
        } else {
            arg0[0x178b] = 0;
            arg0[0x17f0] = 0;
        }
    } else {
        arg0[0x178b] = var0 - arg1;
    }
}

extern "C" ARM void func_02065920(unsigned char* arg0, unsigned int arg1) {
    if (
        ((Struct_02065920*)(arg0 + 0x17ff))->unknown_0_2_ != 0
        || *(int*)(arg0 + 0x870) != 4) return;
    arg0[0x7e2] = 0;
    if (arg1 < (arg0 + 0x1000)[0x78d]) {
        (arg0 + 0x1000)[0x78d] -= arg1;
        return;
    }
    (arg0 + 0x1000)[0x78d] = 0;
    (arg0 + 0x1000)[0x7de] = 0;
    (arg0 + 0x1000)[0x7df] = 0;
    (arg0 + 0x1000)[0x7fe] = 1;
    *(int*)(arg0 + 0xc) = 0;
    *(int*)(arg0 + 0x10) = 0;
    func_0206b104((Struct_0206b104*)arg0);
    func_0206cba0((Struct_0206b224*)arg0);
    *(int*)(arg0 + 0x870) = 5;
}

extern "C" ARM void func_02065990(MessageWindow_02021b84* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
    unsigned short var1;
    struct Struct_02065990_6 var2;
    union Struct_02065990_7 var3;
    struct Struct_0203de84 var4;
    struct Struct_0203de84 var5;
    struct Struct_02065990_4 var6;
    struct Struct_02065990_5 var7;
    struct Struct_0203de84 var8;
    int var9 = arg1;
    if (var9 == 0) var9 = 1;

    if (*(void**)(var0 + 0x230) != 0 && var0[0x236] != 0 && arg0->unknown_9a0_ == 6) {
        if ((*(unsigned short*)0x4000304 & 0x8000) >> 15 == 1) {
            SetSpriteAnimationOAMIndex_0205a42c((SpriteAnimationList_0205a254*)(*(void**)(var0 + 0x230)), 0, 0x1e);
        }
        AdvanceSpriteAnimations_0205a330((SpriteAnimationList_0205a330*)(*(void**)(var0 + 0x230)), var9);
    }

    if (arg0->unknown_998_ == 0) return;

    if ((arg0->unknown_17ff_.unknown_0_3_) != 0) {
        arg0->unknown_1958_ = *(signed char*)(var0 + 0x1786) - var9;
        if (*(signed char*)(var0 + 0x1786) >= 0) return;
        func_0206b104((Struct_0206b104*)var0);
        ResetMessageWindow_02043204((char*)var0);
        return;
    }

    arg0->func_020656e4(var9);
    if (func_02065758((Struct_02065758*)var0, var9) != 0) return;

    if (arg0->unknown_19b1_ != 0) {
        func_0202f380(var0 + 0x1804, var9);
        if (func_0205ce28((Struct_0205ce28_2*)(var0 + 0x1804)) != 0) {
            func_0202f6a4((Struct_0202f6a4*)(var0 + 0x1804));
        }
        unsigned char* var10 = *(unsigned char**)(var0 + 0x1c44);
        int var11;
        if (var10 != 0) {
            var11 = *(int*)(var10 + 8) == 2;
        } else {
            var11 = 0;
        }
        if (var11 == 0) return;
    }

    if ((arg0->unknown_17ff_.unknown_0_0_) != 0) arg0->unknown_44_ = *(int*)(var0 + 0x44);

    if (arg0->unknown_19b4_ != 0) {
        arg0->unknown_1868_ = arg0->unknown_1868_ + var9;
        if (arg0->unknown_1868_ < arg0->unknown_1864_) return;
        arg0->unknown_1868_ = 0;
        func_0206b61c((Struct_02065990*)var0);
        arg0->unknown_19b4_ = 0;
        arg0->unknown_9a0_ = 5;
        arg0->unknown_19b5_ = 0;
        return;
    }

    if (func_020657c8((Struct_020657c8_2*)var0, var9) != 0) return;
    func_020658ac((unsigned char*)var0, var9);

    if ((arg0->unknown_195b_ & 1) != 0) {
        if (func_0209ca2c(&gMusicManager_02109bf4) == 0) {
            arg0->unknown_195b_ = arg0->unknown_195b_ & ~1;
        }
    } else {
        if (arg0->unknown_8c_ != 0 && (arg0->unknown_8c_)[0xd4] == 2) return;

        if (arg0->unknown_19c9_ != 0) {
            if (func_0209ca2c(&gMusicManager_02109bf4) != 0) return;
            *(int*)(var0 + 0x44) = *(int*)(var0 + 0x44) + 1;
            arg0->unknown_19c9_ = 0;
            return;
        }

        func_020456d0((Struct_020456d0*)var0);
        if (arg0->func_020440cc() != 0) {
            (arg0->unknown_17ff_.unknown_0_3_) = 1;
            arg0->unknown_1958_ = 5;
            return;
        }

        if (arg0->unknown_9a0_ != 5) {
            func_02065920((unsigned char*)var0, var9);
            if (arg0->unknown_19bc_ != 0) {
                arg0->func_02045740();
            }
            func_020676e0((Struct_020676e0_4*)var0, var9);
            arg0->func_02045688();
            return;
        }
    }

    if (*(short*)(var0 + 0x1774) < 0 && arg0->unknown_19c8_ == 0) {
        *(signed char*)(var0 + 0x7e2) = 0;
        arg0->func_02045688();
    }
    else {
        if (*(signed char*)(var0 + 0x7e2) >= 4) {
            *(signed char*)(var0 + 0x7e2) = *(signed char*)(var0 + 0x7e2) - 4;
            arg0->func_02045688();
            arg0->func_020455f8();
        }
        *(signed char*)(var0 + 0x7e2) =
            *(signed char*)(var0 + 0x7e2) + GameState::GetInstance()->GetTickCount();
    }

    if (arg0->unknown_19c5_ != 0) var9 = 0x10;
    int var14 = var9;
    bool var12 = false;

    while (var14 != 0) {
        if (arg0->unknown_6c_ <= arg0->unknown_78_) return;
        var1 = ((unsigned short*)arg0->unknown_4c_)[arg0->unknown_78_];
        if (func_02069430(var0, var1) != 0) {
            int var15 = func_02069444(var0, var1);
            if (var15 != 0) {
                *(int*)(var0 + 0x44) = *(int*)(var0 + 0x44) + var15 + 1;
                continue;
            }
            if (var1 == 0xff01) {
                if ((arg0->unknown_195b_ & 4) != 0) {
                    arg0->unknown_195b_ = arg0->unknown_195b_ | 8;
                }
                arg0->unknown_9a0_ = 0;
                arg0->func_02045688();
                return;
            } else if (var1 == 0xff02) {
                arg0->unknown_9a0_ = 0;
                arg0->func_02045688();
                return;
            } else if (var1 == 0xff03) {
                arg0->unknown_9a0_ = 0;
                arg0->func_02045688();
                ResetMessageWindow_02043204((char*)var0);
                CloseMessageWindow_02043124(var0);
                return;
            } else if (var1 == 0xff0b) {
                arg0->unknown_9a0_ = 4;
                arg0->func_02045688();
                (var0 + 0x1000)[0x78d] = (var0 + 0x1000)[0x78c];
                *(signed char*)(var0 + 0x7e2) = 0;
                if (*(short*)(var0 + 0x1800) >= 0) {
                    (var0 + 0x1000)[0x78d] = (unsigned char)*(short*)(var0 + 0x1800);
                    *(short*)(var0 + 0x1800) = -1;
                }
                return;
            } else if (var1 == 0xff0c) {
                arg0->unknown_1961_ = arg0->unknown_1960_;
                arg0->unknown_9a0_ = 1;
                arg0->func_02045688();
                return;
            } else if (var1 == 0xff0d) {
                arg0->unknown_9a0_ = 1;
                arg0->func_02045688();
                return;
            } else if (var1 == 0xff0a) {
                arg0->unknown_9a0_ = 3;
                arg0->func_02045688();
                return;
            } else if (var1 == 0xff1d) {
                var2.unknown_0_ = 0;
                var2.unknown_1_ = 0;
                var2.unknown_2_ = 0;
                var2.unknown_4_ = 0;
                var2.unknown_5_ = 0;
                var2.unknown_0_ = arg0->unknown_19c6_ == 0;
                var2.unknown_1_ = arg0->unknown_19c7_ == 0;
                var2.unknown_2_ = *(unsigned short*)(var0 + 0x174e);
                var2.unknown_4_ = 1;
                func_ov017_0218d7b0(((unsigned char*)GetGameResources()), (char*)&var2);
                *(int*)(var0 + 0x44) = *(int*)(var0 + 0x44) + 1;
                return;
            } else if (var1 == 0xff1e) {
                int var16 = *(signed char*)(var0 + 0x1785);
                if (var16 >= 0 && var16 < *(signed char*)(var0 + 0x1784)) {
                    int var17;
                    int var18 = *(signed char*)(arg0->unknown_1952_ + var16);
                    var17 = *(signed char*)(var0 + 0x177c + var16);
                    if (var18 > 0) {
                        PlaySoundEffect_0205eaa0((SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 0x65, 0);
                        if (var18 == 2) {
                            var17 = -1;
                            func_ov016_0218b5c0(1, var17);
                            func_ov017_0218b5f8(var17);
                        }
                    }
                    if (var17 >= 0xa && var17 <= 0x32) {
                        int var19 = var17 / 0xa - 1;
                        int var20 = var19 >= 0 && var19 <= 3;
                        if (var20) {
                            func_ov016_0218b5c0(1, var19);
                            func_ov017_0218b5f8(var19);
                        }
                        var17 = var17 - (var19 + 1) * 0xa;
                    }
                    int var21 = var17 >= 0 && var17 <= 3;
                    if (var21) {
                        func_ov016_0218b5c0(1, var17);
                        func_ov017_0218b5f8(var17);
                        unsigned char* var22 = ((unsigned char*)GetGameResources());
                        if (IsTypeInQueue_02046b60((Queue_02038598_5*)(*(void**)(var22 + 0x34ec)), 0xc) != 0) {
                            func_ov017_021a5ab0(*(void**)(var22 + 0x350c));
                        }
                    }
                }
                arg0->unknown_1957_ = *(signed char*)(var0 + 0x1785) + 1;
                *(int*)(var0 + 0x44) = *(int*)(var0 + 0x44) + 1;
                return;
            } else if (var1 == 0xff1c) {
                if ((arg0->unknown_17ff_.unknown_0_2_) != 0) return;
                arg0->func_02045688();
                ((int*)(var0 + 0x173c))[*(signed char*)(var0 + 0x17dc)] =
                    ((int*)(var0 + 0x173c))[*(signed char*)(var0 + 0x17dc)] - 1;
                if (((int*)(var0 + 0x173c))[*(signed char*)(var0 + 0x17dc)] > 0) return;
                ((int*)(var0 + 0x173c))[*(signed char*)(var0 + 0x17dc)] = 0;
                *(int*)(var0 + 0x44) = *(int*)(var0 + 0x44) + 1;
                arg0->unknown_19ac_ = *(signed char*)(var0 + 0x17dc) + 1;
                arg0->unknown_19ac_ = *(signed char*)(var0 + 0x17dc) & 3;
                *(signed char*)(var0 + 0x7e2) = 0;
                return;
            } else if (var1 == 0xff1f) {
                arg0->unknown_9a0_ = 2;
                arg0->func_02045688();
                return;
            } else if (var1 == 0xff20) {
                arg0->func_02045688();
                ((int*)(var0 + 0x173c))[*(signed char*)(var0 + 0x17dc)] =
                    ((int*)(var0 + 0x173c))[*(signed char*)(var0 + 0x17dc)] - 1;
                if (((int*)(var0 + 0x173c))[*(signed char*)(var0 + 0x17dc)] > 0) {
                    if (g_keyManager.TestKeysPressed(0xfe3) == 0 &&
                        g_touchInput.pressed_ == 0) {
                        return;
                    }
                }
                ((int*)(var0 + 0x173c))[*(signed char*)(var0 + 0x17dc)] = 0;
                *(int*)(var0 + 0x44) = *(int*)(var0 + 0x44) + 1;
                arg0->unknown_19ac_ = *(signed char*)(var0 + 0x17dc) + 1;
                arg0->unknown_19ac_ = *(signed char*)(var0 + 0x17dc) & 3;
                *(signed char*)(var0 + 0x7e2) = 0;
                return;
            } else if (var1 == 0xff21) {
                arg0->unknown_19ca_ = 0;
                arg0->unknown_9a0_ = 2;
                arg0->func_02045688();
                return;
            } else if (var1 == 0xff28) {
                arg0->unknown_19b1_ = 1;
                arg0->unknown_19cd_ = 1;
            } else if (var1 == 0xff29) {
                arg0->unknown_19b1_ = 0;
                arg0->unknown_19cd_ = 1;
            } else if (var1 == 0xff2a) {
                arg0->unknown_19b8_ = 1;
            } else if (var1 == 0xff2b) {
                arg0->unknown_19b8_ = 0;
            } else if (var1 == 0xff2c) {
                arg0->unknown_1844_ = *(int*)(var0 + 0x1710);
                arg0->unknown_19b6_ = 1;
                *(int*)(var0 + 0x44) = *(int*)(var0 + 0x44) + 1;
                arg0->func_02045688();
                return;
            } else if (var1 == 0xff2e) {
                arg0->unknown_1844_ = arg0->unknown_183c_;
                arg0->unknown_19b6_ = 1;
                *(int*)(var0 + 0x44) = *(int*)(var0 + 0x44) + 1;
                arg0->func_02045688();
                return;
            } else if (var1 == 0xff2f) {
                unsigned char* var23 = (unsigned char*)GameState::GetInstance()->GetUnknownGameObject();
                void* var24 = GetNPCByIndex_0203dce4((NPCManager_0203dce4_2*)GetNPCManager_0203cf4c(), arg0->unknown_1838_);
                if (var23 != 0 && var24 != 0) {
                    var4 = *(struct Struct_0203de84*)(var23 + 0x44);
                    GetNPCPosition_020406f8(&var8, (NPC_0203de84_2*)var24);
                    var5 = var8;
                    arg0->unknown_1844_ = fix32ReduceAngle0To2Pi(fix32_Atan2(var4.unknown_0_[0] - var5.unknown_0_[0], var4.unknown_0_[2] - var5.unknown_0_[2]));
                    arg0->unknown_19b6_ = 1;
                    arg0->func_02045688();
                }
                *(int*)(var0 + 0x44) = *(int*)(var0 + 0x44) + 1;
                return;
            } else if (var1 == 0xff30) {
                arg0->func_02045688();
                (var0 + 0x1000)[0x787] = 0x3c;
                (var0 + 0x1000)[0x7e7] = 1;
                (var0 + 0x1000)[0x78a] = 0;
                *(int*)(var0 + 0x44) = *(int*)(var0 + 0x44) + 1;
                *(signed char*)(var0 + 0x7e2) = 0;
                PlaySoundEffect_0205eaa0((SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 6, 0);
                return;
            } else if (var1 == 0xff31) {
                arg0->func_02045688();
                (var0 + 0x1000)[0x787] = 0x3c;
                (var0 + 0x1000)[0x7e7] = 1;
                (var0 + 0x1000)[0x78a] = 1;
                *(int*)(var0 + 0x44) = *(int*)(var0 + 0x44) + 1;
                *(signed char*)(var0 + 0x7e2) = 0;
                PlaySoundEffect_0205eaa0((SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 0x1c, 0);
                return;
            } else if (var1 == 0xff04 || var1 == 0xff05 || var1 == 0xff06 || var1 == 0xff07) {
                func_02065418(arg0->unknown_19cc_);
                int var25 = 0;
                if (*(int*)(var0 + 0x218) == 1 || var1 == 0xff05) var25 = 1;
                *(int*)(var0 + 0x218) = 0;
                func_020665bc((char*)(var0 + 0x50), var25, data_020f07b4, data_020f07b9);
                arg0->unknown_94c_[2] = var25;
                (var0 + 0x1000)[0x7ea] = 1;
                *(int*)(var0 + 0x85c) = 0;
                arg0->unknown_9a0_ = 6;
                arg0->func_02045688();
                PlaySoundEffect_0205eaa0((SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 5, 0);
                int var28 = 1;
                unsigned char* var29 = (unsigned char*)GameState::GetInstance();
                unsigned char* var30 = GetResources_0200fb8c((int*)var29);
                if ((var29 + 0x5000)[0xa68] == 2) var28 = 0;
                if (var30 != 0 && var28 != 0) (var30 + 0x4000)[0x134] = 0xa;
                return;
            } else if (var1 == 0xff08) {
                volatile unsigned int* var31 = (volatile unsigned int*)0x4000000;
                unsigned int var32 = (*var31 & 0x1f00) >> 8;
                unsigned int var33 = *var31 & ~0x1f00;
                *var31 = var33 | ((var32 | 0x10) << 8);
                func_02065418(arg0->unknown_19cc_);
                func_020665bc((char*)(var0 + 0x50), 0, data_020f07c0, data_020f07c7);
                arg0->unknown_94c_[2] = 0;
                (var0 + 0x1000)[0x7ea] = 1;
                *(int*)(var0 + 0x85c) = 1;
                arg0->unknown_9a0_ = 6;
                arg0->func_02045688();
                PlaySoundEffect_0205eaa0((SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 5, 0);
                unsigned char* var36 = GetResources_0200fb8c((int*)GameState::GetInstance());
                if (var36 != 0) (var36 + 0x4000)[0x134] = 0xa;
                return;
            } else if (var1 == 0xff0f) {
                unsigned char* var37 = arg0->unknown_8c_;
                {
                    *(unsigned short*)(var37 + 0xda) = *(unsigned short*)(var37 + 0xda) | 0x40;
                    func_0208bf28((Struct_02065990_2*)(arg0->unknown_8c_), *(short*)(var0 + 0x1776), 0);
                    *&arg0->unknown_195b_ |= 1;
                    unsigned char* var38 = GetQuestManager_02094d6c();
                    int var39 = func_020965ac((Struct_02065990_3*)var38, (unsigned char)*(short*)(var0 + 0x1776));
                    GetCurrentDate_020cf0fc((int)&var6);
                    func_020cf1a8((int)&var7);
                    var3.unknown1_0_.unknown_0_0_ = var6.unknown_0_;
                    var3.unknown1_0_.unknown_0_7_ = var6.unknown_4_;
                    var3.unknown1_0_.unknown_1_3_ = var6.unknown_8_;
                    var3.unknown1_0_.unknown_2_0_ = var7.unknown_0_;
                    var3.unknown1_0_.unknown_2_5_ = var7.unknown_4_;
                    *(unsigned int*)(var38 + var39 * 4 + 0x178) = var3.unknown_0_;
                    QueueJingle_0209c830((MusicManager_02109bf4_2*)&gMusicManager_02109bf4, 0x32);
                }
            } else if (var1 > 0xff39 && var1 < 0xff4e) {
                arg0->func_02045688();
                QueueJingle_0209c830((MusicManager_02109bf4_2*)&gMusicManager_02109bf4, var1 - 0xff08);
                arg0->unknown_19c9_ = 1;
                return;
            } else if (var1 >= 0xff4f && var1 <= 0xff51) {
                int var40 = -1;
                if (var1 == 0xff50) var40 = 0xe;
                if (var40 >= 0) {
                    PlaySoundEffect_0205eaa0((SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 0xe, 0);
                }
            } else if (var1 == 0xff10) {
                unsigned char* var41 = arg0->unknown_8c_;
                if (var41 != 0) *(short*)(var41 + 0xd2) = *(short*)(var0 + 0x1776);
            } else if (var1 == 0xff11) {
                unsigned char* var42 = arg0->unknown_8c_;
                if (var42 != 0) {
                    *(unsigned short*)(var42 + 0xda) = *(unsigned short*)(var42 + 0xda) | 0x200;
                    func_0208be94((unsigned char*)(arg0->unknown_8c_));
                    *&arg0->unknown_195b_ |= 1;
                    QueueJingle_0209c830((MusicManager_02109bf4_2*)&gMusicManager_02109bf4, 0x33);
                }
            } else if (var1 == 0xff13) {
                unsigned char* var43 = arg0->unknown_8c_;
                if (var43 != 0) {
                    *(unsigned short*)(var43 + 0xda) = *(unsigned short*)(var43 + 0xda) | 0x300;
                    func_0208be94((unsigned char*)(arg0->unknown_8c_));
                    *&arg0->unknown_195b_ |= 1;
                    QueueJingle_0209c830((MusicManager_02109bf4_2*)&gMusicManager_02109bf4, 0x44);
                }
            } else if (var1 == 0xff12) {
                if (arg0->unknown_8c_ != 0) {
                    func_0208beb4((unsigned char*)(arg0->unknown_8c_));
                }
            } else if (var1 == 0xff37) {
                var12 = true;
            } else if (var1 == 0xff38) {
                var12 = false;
            } else if (var1 >= 0xff52 && var1 <= 0xff55) {
                int var44 = *(signed char*)(var0 + 0x1778 + (var1 - 0xff52));
                func_0205e944(&gSoundEffectManager_02108760, ((var44 * 0x21dd) >> 10) & 0x7f);
            } else if (var1 == 0xff0e) {
                arg0->unknown_19c0_ = 1;
                arg0->unknown_195d_ = 0x1e;
            } else if ((unsigned short)(var1 + 0xe6) <= 1) {
                var14++;
            }
        }
        arg0->unknown_9a0_ = 5;
        *(int*)(var0 + 0x44) = *(int*)(var0 + 0x44) + 1;
        if (!var12) var14--;
    }
}

extern "C" ARM int func_02067ea0(Struct_02067ea0* arg0, int arg1, int arg2, unsigned short* arg3, unsigned short* arg4,
                                 int arg5, int arg6) {
    Struct_02067ea0_2* var5;
    int var1;
    int var3;
    unsigned short var4;
    int var0;

    const int var20 = 0x74;
    const int var21 = 0x3000;
    const int var22 = 7;
    var0 = 0;
    var1 = 0;
    while (arg3[var1] != 0xff37) {
        var1++;
    }
    var3 = 0;
    for (; (var4 = arg4[var3]) != 0xff38; var3++) {
        if (func_02069430(arg0, var4) == 0 && var4 < 0x80) {
            var5 = &arg0->unknown_888_[var4];
            char var6[3];
            __clear(var6, 3);
            var6[0] = var5->unknown_18_[0];
            var6[1] = var5->unknown_18_[1];
            var0 += func_02042764(var6);
        }
    }
    var0 = arg1 + ((var1 - 2) * arg0->unknown_1730_ + 12 - var0 >> 1);
    int var7 = arg2 - var22;
    int var9;
    short var10;
    short var11;
    Struct_02067ea0_2* var14;
    int var8;
    var8 = 0x56b5;
    if (arg0->unknown_17e1_ == 0) {
        var8 = 0x6b5a;
    }
    var14 = arg0->unknown_888_;
    var9 = var7 - var20;
    var10 = var9;
    var11 = var7 + 2;

    unsigned short* var12 = arg4;
    unsigned short var13;
    for (; (var13 = *var12) != 0xff38; var12++) {
        if (func_02069430(arg0, var13) == 0) {
            Struct_02067ea0_2* var19 = &var14[var13];
            if (arg6 != 0) {
                func_02066934((unsigned char*)arg0, arg0->unknown_0_, var19, (short)var0, var11, 6);
            } else if (arg0->unknown_17ff_0_) {
                if (arg0->unknown_10_ != arg0->unknown_44_) {
                    void* var15 = AllocateVRAMStagingMemory(var21);
                    if (var15 != NULL) {
                        unsigned int var16 = arg0->unknown_1c4c_->unknown_50_0_ * 8;
                        func_02066794(var15, 0x100, 0x60, (char*)var19, (short)var0, var10, (arg0->unknown_17e1_ == 0) + 6);
                        StageMemoryToVRAM(VRAMSubregion_TextureImage, var15, var16 + 0x700, var21, true, false);
                        FreeVRAMStagingMemory(var15);
                    }
                }
            } else if (arg0->unknown_4_ != NULL) {
                char var17[3];
                __clear(var17, 3);
                var17[0] = var19->unknown_18_[0];
                var17[1] = var19->unknown_18_[1];
                func_020e2310(arg0->unknown_4_, 0, var0, var9, var17, 6, 6);
            } else {
                var19->unknown_c_ = var0;
                var19->unknown_10_ = var7;
                var19->unknown_14_ = 0;
                func_020417b0(var19, var8, 0, arg5);
            }
            char var18[3];
            __clear(var18, 3);
            var18[0] = var19->unknown_18_[0];
            var18[1] = var19->unknown_18_[1];
            var0 += func_02042764(var18);
        }
    }
    return var3 - 1;
}

extern "C" ARM void func_020681b4(struct Struct_020681b4* arg0, int arg1, int arg2, int arg3) {
    arg0->unknown_c_ = arg1;
    arg0->unknown_10_ = arg2;
    arg0->unknown_14_ = arg3;
}

extern "C" ARM void func_02066a6c(Struct_02066a6c_5* arg0, int arg1) {
    if (!arg0->unknown_17f5_) return;
    Struct_02066a6c* var0 = &arg0->unknown_1804_;
    unsigned int var1;
    unsigned short* var2;
    unsigned char var3;
    var1 = 0;
    var2 = NULL;
    if (arg0->unknown_17f4_) {
        var2 = arg0->unknown_1752_;
        var1 = arg0->unknown_1772_ & 255;
    }
    if (var2) {
        int var4, var5;
        short var6, var7;
        func_0206b804((char*)arg0, &var4, &var5);
        func_02066cc0((Struct_02066a6c_2*)var0, &var6, &var7);
        var7 -= 19;
        var0->unknown_440_ = &arg0->unknown_800_;
        if (var0->unknown_440_) {
            var0->unknown_440_->unknown_10_ = 4096;
            var0->unknown_440_->unknown_14_ = 4096;
        }
        if (var0->unknown_440_) var0->unknown_440_->unknown_8_ = 2;
        if (arg1) func_02042c24((Struct_02042b98_3*)var0, var6, var7);
        else {
            func_02042c24((Struct_02042b98_3*)var0, (short)(var6 + var4), (short)(var7 + var5));
            func_0202f404(var0, 1, 0);
        }
        short var8 = 8 - ((var1 * 10) & 7);
        var6 += (var8 + 18) >> 1;
        var7 += 5;
        for (var3 = 0; var3 < var1; var3++) {
            unsigned short var9 = var2[var3];
            if ((var9 & 0xff00) == 0xff00) {
                if (var9 == 0xff01) break;
                if (var9 == 0xff19) { var6 += 10; continue; }
                if (var9 == 0xff1a) { var6 += 10; continue; }
                if (var9 == 0xff1b) { var6 += 5; continue; }
                var9 &= 0x7f;
            }
            Struct_02066a6c_8* var10 = &arg0->unknown_888_[var9];
            if (arg1) func_02066934((unsigned char*)arg0, arg0->unknown_0_, var10, var6, var7, 15);
            else {
                func_020681b4((Struct_020681b4*)var10, var6, var7, 0);
                func_020417b0(var10, arg0->unknown_174c_, 0, 31);
            }
            var6 += 10;
        }
    }
    var0->unknown_440_ = &arg0->unknown_7e4_;
}

extern "C" ARM void func_02066cc0(struct Struct_02066a6c_2* arg0, short* arg1, short* arg2) {
    if (arg0->unknown_440_ != NULL) {
        *arg1 = arg0->unknown_440_->unknown_0_;
        *arg2 = arg0->unknown_440_->unknown_2_;
    }
}

extern "C" ARM void func_02066cf0(Struct_02066cf0_3* arg0, int arg1) {
    const int var36 = 0x74;
    unsigned short var0;
    int var1;
    int var2;
    int var3;
    unsigned int var4;

    if (arg0->unknown_17fd_) return;

    int var5, var6;
    func_0206b804((char*)arg0, &var5, &var6);

    if ((arg0->unknown_868_ && arg0->unknown_17e1_) || arg0->unknown_17fc_) {
        if (arg0->unknown_17fc_) {
            if (func_0205ce28((Struct_0205ce28_2*)arg0->unknown_1804_)) {
                func_0202f6a4((Struct_0202f6a4*)arg0->unknown_1804_);
                func_0202f380(arg0->unknown_1804_, 1);
            }
        }

        if (arg0->unknown_868_ && arg0->unknown_17e1_) {
            func_02066a6c((Struct_02066a6c_5*)arg0, arg1);
        }

        short var7, var8;
        func_02066cc0((Struct_02066a6c_2*)arg0->unknown_1804_, &var7, &var8);
        func_02042c24((Struct_02042b98_3*)arg0->unknown_1804_, (short)(var7 + var5), (short)(var8 + var6));

        if (arg1 == 0) {
            if (arg0->unknown_4_) {
                func_020e2110(arg0->unknown_4_);
            } else {
                func_0202f404(arg0->unknown_1804_, 1, 1);
            }
        }

        func_02042c24((Struct_02042b98_3*)arg0->unknown_1804_, var7, var8);
    }

    if (!arg0->unknown_868_) return;
    func_020675fc((Struct_020675fc_2*)arg0);

    void* var9 = 0;
    Struct_02066cf0_2* var10;
    if (arg0->unknown_17e9_ == 1) {
        var9 = arg0->unknown_1718_;
    }

    if (!arg0->unknown_20_ | !arg0->unknown_24_) return;
    if (!arg0->unknown_38_) return;

    func_02044530((char*)arg0, arg1);

    int var11[16];
    int var12[16];
    var1 = 0;
    __clear(var11, sizeof(var11));
    __clear(var12, sizeof(var12));

    int var13 = 0x1f;
    int var14 = 0;
    int var15 = 0x1f;
    if (arg0->unknown_1789_ & 4) {
        var15 = arg0->unknown_880_ >> 16;
        if (arg1 != 0) {
            var15 &= 0x1f;
            if (var15 != 0) {
                var13 = 0xf - (var15 >> 1);
            }
            ColorEffect_ConfigureAlphaBlend((unsigned int*)0x04000050, 8, 1, var15, var13);
        }
    }

    if (arg0->unknown_17f6_) {
        if (!func_02069408(arg0, arg0->unknown_18_[arg0->unknown_44_])) return;
    }

    if (arg0->unknown_1789_ & 0x40) {
        func_0206cf44((unsigned char*)arg0);
    }

    if (arg0->unknown_17e8_) {
        func_02044f5c(arg0, var11, var12);
        for (int var16 = 0; var16 < 0x10; var16++) {
            var12[var16] = arg0->unknown_172c_;
        }
    } else {
        if (arg0->unknown_1774_ < 0) var14 = 10;
        for (int var17 = 0; var17 < 0x10; var17++) {
            var11[var17] = arg0->unknown_1728_;
            var12[var17] = arg0->unknown_172c_;
        }
    }

    unsigned int var18 = arg0->unknown_44_;
    var4 = arg0->unknown_40_;
    if (arg0->unknown_17f4_ && arg0->unknown_1774_ >= 0 && var4 < arg0->unknown_1772_) var4 = arg0->unknown_1774_;

    unsigned char var19 = 1;
    int var20, var21;
    unsigned short* var22 = 0;
    unsigned short* var23 = 0;
    var3 = var12[0] - arg0->unknown_1738_;
    var2 = var11[0];

    for (; var4 < var18; var4++) {
        var0 = arg0->unknown_18_[var4];

        if (func_02069430(arg0, var0)) {
            if (func_02069408(arg0, var0)) {
                break;
            }
            if (var0 == 0xff18) {
                var1++;
                var2 = var11[var1];
                var3 += arg0->unknown_1734_;
                var19 = 1;
            } else if (var0 == 0xff1a) {
                if (var19) var2 += arg0->unknown_1730_;
                else var2 += arg0->unknown_8_;
            } else if (var0 == 0xff1b) {
                var2 += arg0->unknown_1730_ >> 1;
            } else if (var0 == 0xff1c || var0 == 0xff1f || var0 == 0xff20 || var0 == 0xff21) {
            } else if (var0 == 0xff36) {
                var21 = var3;
                var20 = var2 + var14;
                var22 = &arg0->unknown_18_[var4];
            } else if (var0 == 0xff37) {
                var23 = &arg0->unknown_18_[var4];
            } else if (var0 == 0xff19) {
                var2 += arg0->unknown_1730_;
            } else if (var0 == 0xff22) {
                var4++;
                var2 = var11[var1] + arg0->unknown_18_[var4];
            } else if (var0 == 0xff23) {
                var4++;
                var3 = var12[var1] + arg0->unknown_18_[var4];
            } else if (var0 == 0xff24) {
                var2 = var11[var1] + arg0->unknown_18_[var4 + 1];
                var4 += 2;
                var3 = var12[var1] + arg0->unknown_18_[var4];
            } else if (var0 == 0xff25) {
                var4++;
                var2 += arg0->unknown_18_[var4];
            } else if (var0 == 0xff26) {
                var4++;
                var3 += arg0->unknown_18_[var4];
            } else if (var0 == 0xff27) {
                var2 += arg0->unknown_18_[var4 + 1];
                var4 += 2;
                var3 += arg0->unknown_18_[var4];
            }
            continue;
        }

        var10 = &arg0->unknown_888_[var0];
        var19 = 0;
        if (var22 && var23) {
            var4 += func_02067ea0((Struct_02067ea0*)arg0, var20, var21, var22, var23, var15, arg1);
            var22 = 0;
            var23 = 0;
            continue;
        }

        int var24 = var2 + var14;
        if (arg1 != 0) {
            if (arg0->unknown_c_ <= var4) {
                func_02066934((unsigned char*)arg0, arg0->unknown_0_, var10, (short)var24, (short)(var3 + 2), 0xf);
            }
        } else if (arg0->unknown_17ff_0_) {
            if (arg0->unknown_10_ != arg0->unknown_44_) {
                void* var25 = AllocateVRAMStagingMemory(0x3000);
                if (var25 != 0) {
                    int var26 = (int)(((unsigned int)*(int*)((char*)arg0->unknown_1c4c_ + 0x50) << 16) >> 13);
                    func_02066794(var25, 0x100, 0x60, (char*)var10, (short)var24, (short)(var3 - var36), 0xf);
                    StageMemoryToVRAM(VRAMSubregion_TextureImage, var25, var26 + 0x700, 0x3000, true, false);
                    FreeVRAMStagingMemory(var25);
                }
            }
        } else if (arg0->unknown_4_) {
            char var27[3] = {0};
            var27[0] = var10->unknown_18_[0];
            var27[1] = var10->unknown_18_[1];
            func_020e2310((char*)arg0->unknown_4_, 0, var24, var3 - var36, var27, 0xc, 0xf);
        } else {
            var10->unknown_c_ = var24;
            var10->unknown_10_ = var3;
            var10->unknown_14_ = 0;
            func_020417b0(var10, arg0->unknown_174c_, var9, var15);
        }

        var2 += arg0->unknown_1730_;
    }

    func_0204459c(arg0, arg1);
    arg0->unknown_c_ = var18;

    if (!arg0->unknown_17ff_0_) return;
    void* var28 = arg0->unknown_1c4c_;
    if (!var28) return;

    unsigned int var29 = (unsigned int)(*(int*)((char*)var28 + 0x50) << 16) >> 13;

    *(volatile unsigned int*)0x04000444 = 0;
    *(volatile unsigned int*)0x04000470 = 0;
    *(volatile unsigned int*)0x04000470 = 0x74000;
    *(volatile unsigned int*)0x04000470 = 0x400000;
    *(volatile unsigned int*)0x0400046c = 0x1000;
    *(volatile unsigned int*)0x0400046c = 0x1000;
    *(volatile unsigned int*)0x0400046c = 0x1000;

    *(volatile unsigned int*)0x04000444 = 0;
    *(volatile unsigned int*)0x04000470 = 0;
    *(volatile unsigned int*)0x04000470 = 0x80000;
    *(volatile unsigned int*)0x04000470 = 0;
    *(volatile unsigned int*)0x0400046c = 0x1000;
    *(volatile unsigned int*)0x0400046c = 0xfffff000;
    *(volatile unsigned int*)0x0400046c = 0x1000;

    *(volatile unsigned int*)0x04000444 = 0;
    *(volatile unsigned int*)0x040004c0 = 0x7fffffff;
    *(volatile unsigned int*)0x040004c4 = 0x4210;
    *(volatile unsigned int*)0x040004a8 = 0x6e500000u | ((var29 + 0x700) >> 3);
    *(volatile unsigned int*)0x040004ac = (unsigned int)data_0210773c >> 4;
    *(volatile unsigned int*)0x040004a4 = 0x3e1f00c0;

    *(volatile unsigned int*)0x0400046c = 0x100000;
    *(volatile unsigned int*)0x0400046c = 0x80000;
    *(volatile unsigned int*)0x0400046c = 0x1000;

    *(volatile unsigned int*)0x04000500 = 1;
    *(volatile unsigned int*)0x04000480 = 0x7fff;

    int var30 = 0x80;
    float var31 = 0.0f;
    int var32 = (int)(var30 * var31);
    float var33 = 1.0f - var31;
    var32 = var32 << 12;
    func_020653e4(0, var32);

    unsigned int var34 = ((unsigned int)(unsigned short)(int)(4096.0f * var33)) << 16;
    *(volatile unsigned int*)0x0400048c = var34;
    *(volatile unsigned int*)0x0400048c = 0;
    func_020653e4(0x100000, var32);

    unsigned int var35 = ((unsigned int)(unsigned short)(int)(4096.0f * var33)) << 16;
    var35 |= 0x1000;
    *(volatile unsigned int*)0x0400048c = var35;
    *(volatile unsigned int*)0x0400048c = 0;
    func_020653e4(0x100000, 0x80000);

    *(volatile unsigned int*)0x0400048c = 0x1000;
    *(volatile unsigned int*)0x0400048c = 0;
    func_020653e4(0, 0x80000);

    *(volatile unsigned int*)0x0400048c = 0;
    *(volatile unsigned int*)0x0400048c = 0;
    *(volatile unsigned int*)0x04000504 = 0;
    *(volatile unsigned int*)0x04000448 = 1;
    *(volatile unsigned int*)0x04000448 = 1;
    *(volatile unsigned int*)0x04000448 = 1;
}

extern "C" ARM void func_020675fc(Struct_020675fc_2* arg0) {
    static const unsigned char data_020e7e08[2] = {0xd, 0xe};
    if (!arg0->unknown_998_) return;
    NPC_0203dce4* var0 = GetNPCByIndex_0203dce4(GetNPCManager_0203cf4c(), arg0->unknown_1838_);
    if (var0 && arg0->unknown_19b7_) {
        GameResources* var1 = GetGameResources();
        void* var2 = GetCamera_020100bc(GameState::GetInstance());
        int var3;
        int var4;
        Struct_02015ef4 var5;
        Struct_020675fc var6;
        GetNPCPosition_020406f8(&var6.unknown_0_, (NPC_0203de84_2*)var0);
        var5 = var6.unknown1_0_;
        ConvertWorldToScreen_0202ec84(var2, &var5, &var3, &var4);
        var3 -= 12;
        var4 -= 62;
        int var7 = var3 << 12;
        Struct_02012fa4* var8 = &var1->substruct_array_2b90[data_020e7e08[arg0->unknown_195c_]];
        int var9 = var4 << 12;
        var8->unknown_1c_[0] = var7;
        var8->unknown_1c_[1] = var9;
        var8->unknown_1c_[2] = 0;
        func_020473c8((Struct_02015ef4_2*)var8, 1);
    }
}

extern "C" ARM void func_020676e0(Struct_020676e0_4* arg0, int arg1) {
    if (arg0->unknown_9a0_ != 6) return;
    if (!arg0->unknown_19ba_) return;
    func_0205c904(arg0->unknown_90_, arg1);
    if (!func_0205cde8(arg0->unknown_90_)) {
        func_0205cd94(arg0->unknown_90_);
        return;
    }
    int var0 = 1;
    bool var1 = g_keyManager.TestKeysPressed(0x401) != 0;
    bool var2 = g_keyManager.TestKeysPressed(2) != 0;
    GameState* var3;
    unsigned char* var4;
    int var5 = arg0->unknown_98c_;
    var3 = GameState::GetInstance();
    Struct_020676e0* var6 = (Struct_020676e0*)GetFollowCamera_020100f8((char*)var3);
    var4 = (unsigned char*)GetResources_0200fb8c((int*)var3);
    if (var5 != 1 && arg0->unknown_19d2_) {
        if (var6) {
            if ((var6->unknown_244_ & 2) || !func_020a27c4(var6))
                var1 |= g_keyManager.TestKeysPressed(0x200);
        } else {
            var1 |= g_keyManager.TestKeysPressed(0x200);
        }
    }
    int var7 = 0;
    if (((Struct_020676e0_3*)var3)->unknown_5cc8_ == 2) var7 = 1;
    if (!var7 && var4 && !func_ov017_021a4e70(var4)) {
        var1 = 0;
        var2 = 0;
        var0 = 0;
    }
    if (!var7 && arg0->unknown_8c_ && (arg0->unknown_8c_->unknown_da_ & 0x20)) {
        var1 = 0;
        var2 = 0;
        var0 = 0;
    }
    int var8 = -1;
    if (var0) var8 = func_0205cecc(arg0->unknown_90_);
    if (var1) var8 = func_0205cb64(arg0->unknown_90_);
    else if (var2) var8 = -2;
    arg0->unknown_954_ = var8;
    (arg0->*data_020f079c[var5])(var8);
}

extern "C" ARM void func_0206917c(MessageWindow_02021b84* arg0, int arg1) {
    int var0 = arg0->unknown_78_;
    unsigned short* var1 = arg0->unknown_4c_;
    unsigned short var2 = var1[var0];
    int var3 = (var2 == 0xff06);
    int var4 = (var2 == 0xff07);

    switch (arg1) {
    case 0:
        func_0206b104((Struct_0206b104*)arg0);
        if (!var3) {
            PlaySoundEffect_0205eaa0((struct SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 1, 0);
        }
        func_0206cbe8(arg0, 0xff14, arg0->unknown_24_);
        func_0205c840(arg0->unknown_50_);
        arg0->unknown_19cd_ = 1;
        arg0->unknown_40_ = 0;
        return;
    case 1:
        if (!var3 && !var4) {
            PlaySoundEffect_0205eaa0((struct SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 1, 0);
        }
    case -2:
        arg0->unknown_94c_[2] = 1;
        func_0206b104((Struct_0206b104*)arg0);
        func_0206cbe8(arg0, 0xff15, arg0->unknown_24_);
        func_0205c840(arg0->unknown_50_);
        arg0->unknown_19cd_ = 1;
        arg0->unknown_40_ = 0;
        return;
    default:
        return;
    }
}

extern "C" ARM void func_02069294(MessageWindow_02021b84* arg0, int arg1) {
    switch (arg1) {
    case 0:
        func_0206b104((Struct_0206b104*)arg0);
        PlaySoundEffect_0205eaa0((struct SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 1, 0);
        func_0206cbe8(arg0, 0xff16, arg0->unknown_24_);
        func_0205c840(arg0->unknown_50_);
        arg0->unknown_19cd_ = 1;
        arg0->unknown_40_ = 0;
        return;
    case 1:
        PlaySoundEffect_0205eaa0((struct SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 1, 0);
    case -2:
        arg0->unknown_94c_[2] = 1;
        func_0206b104((Struct_0206b104*)arg0);
        func_0206cbe8(arg0, 0xff17, arg0->unknown_24_);
        func_0205c840(arg0->unknown_50_);
        arg0->unknown_19cd_ = 1;
        arg0->unknown_40_ = 0;
        return;
    default:
        return;
    }
}

extern "C" ARM void func_0206935c(Struct_0206935c* arg0, int arg1) {
    switch (arg1) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            PlaySoundEffect_0205eaa0((SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 1, 0);
            func_0206cbe8(arg0, arg1 + 0xff56, arg0->unknown_24_);
            break;
        case 6:
            PlaySoundEffect_0205eaa0((SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 1, 0);
        case -2:
            func_0206cbe8(arg0, 0xff5c, arg0->unknown_24_);
            break;
        default:
            return;
    }
    func_0205c840(arg0->unknown_50_);
}

extern "C" ARM bool func_02069408(void* arg0, unsigned int arg1) {
    if (arg1 >= 0xff01u && arg1 <= 0xff0du) return 1;
    return 0;
}

extern "C" ARM int func_02069430(void* arg0, unsigned short arg1) {
    if ((arg1 & 0xff00) == 0xff00) {
        return 1;
    }
    return 0;
}

extern "C" ARM int func_02069444(void* arg0, unsigned short arg1) {
    int var1 = 0;
    if (!func_02069430(arg0, arg1)) return 0;
    switch (arg1) {
    case Enum_02044420_65312 + 0:
    case Enum_02044420_65312 + 1:
    case Enum_02044420_65312 + 3:
    case Enum_02044420_65312 + 4:
        var1 = 1;
        break;
    case Enum_02044420_65312 + 2:
    case Enum_02044420_65312 + 5:
        var1 = 2;
        break;
    }
    return var1;
}

extern "C" ARM int func_020694a0(void* arg0, unsigned int arg1) {
    if (arg1 >= 0xff01 && arg1 <= 0xff18) return 1;
    return (arg1 & 0xffe0) == 0xffe0;
}

extern "C" ARM void func_02067b28(Struct_02067b28* arg0) {
    if (!arg0->unknown_54_ | !arg0->unknown_58_) return;
    if (arg0->unknown_70_ <= arg0->unknown_6c_) return;
    char var0[3] = {0};
    while (arg0->unknown_6c_ < arg0->unknown_70_) {
        unsigned short var1;
        unsigned short* var2;
        unsigned short* var3;
        int var4;
        var2 = arg0->unknown_50_ + arg0->unknown_6c_;
        var1 = *var2;
        var4 = arg0->unknown_19dc_;
        var3 = arg0->unknown_4c_ + arg0->unknown_6c_;
        if (func_02069430(arg0, var1)) {
            if (var1 == 0xff37) arg0->unknown_17f2_ = 1;
            else if (var1 == 0xff38) arg0->unknown_17f2_ = 0;
            *var3 = var1;
            ++arg0->unknown_6c_;
            int var5 = func_02069444(arg0, var1);
            memcpy(var3 + 1, var2 + 1, var5 * 2);
            arg0->unknown_6c_ += var5;
            continue;
        }
        memcpy(var0, var2, 2);
        if (!arg0->unknown_19c2_) {
            arg0->unknown_19c4_ = 1;
            if (arg0->unknown_1946_ <= 0) arg0->unknown_19c4_ = 0;
            var4 = 10;
            if (!CompareBytes_02001aec(var0, data_020f07ce, 2)) {
                if (arg0->unknown_1942_ == 0) arg0->unknown_19c4_ = 0;
                else {
                    int var6 = arg0->unknown_1942_ * var4;
                    arg0->unknown_934_ = (short)(8 - (var6 & 7)) + (var6 + 18);
                    arg0->unknown_936_ = 22;
                }
                arg0->unknown_19c3_ = 1;
                arg0->unknown_19c2_ = 1;
                var4 = arg0->unknown_19dc_;
            }
        }
        if (arg0->unknown_17f2_) var4 = 6;
        int var7 = func_02043014(var4, (unsigned short*)var0);
        if (var7 >= 0) {
            int var8 = func_02045c00((Struct_02045c00_2*)arg0, var0, var4);
            if (var8 < 0) {
                unsigned short var9 = func_02046530(arg0, (unsigned short*)var0, var7, var4);
                if (!arg0->unknown_19c2_) arg0->unknown_1882_[arg0->unknown_1942_] = var9;
                *var3 = var9;
                ++arg0->unknown_6c_;
                arg0->unknown_9b4_ = (arg0->unknown_9b4_ + 1) & 0x7f;
                break;
            }
            unsigned short var10 = var8;
            if (!arg0->unknown_19c2_) {
                arg0->unknown_1882_[arg0->unknown_1942_] = var10;
                ++arg0->unknown_1942_;
                arg0->unknown_1942_ &= 0xf;
            }
            *var3 = var10;
            if (arg0->unknown_17b8_[var10] < 255) ++arg0->unknown_17b8_[var10];
        } else {
            if (!arg0->unknown_19c2_) {
                arg0->unknown_1882_[arg0->unknown_1942_] = 0xff19;
                ++arg0->unknown_1942_;
                arg0->unknown_1942_ &= 0xf;
            }
            *var3 = 0xff19;
        }
        ++arg0->unknown_6c_;
    }
    if (!arg0->unknown_19c2_) {
        ++arg0->unknown_1942_;
        arg0->unknown_1942_ &= 0xf;
    }
}

extern "C" ARM void func_02067e58(void* arg0, int arg1) {
    GameState* var0;
    unsigned int var1;
    if (arg1 == 0) {
        return;
    }
    var0 = GameState::GetInstance();
    var1 = ((GameState*)(var0))->GetTickCount();
    if ((unsigned int)arg1 < var1) {
        arg1 = var1;
    }
    while (arg1 != 0 || ((unsigned char*)arg0)[0x17f2] != 0) {
        func_02067b28((Struct_02067b28*)arg0);
        if (arg1 != 0) {
            arg1--;
        }
    }
}

extern "C" ARM void func_02069878(Struct_02069878* arg0, signed char* arg1) {
    func_0206b104((Struct_0206b104*)arg0);
    memset(arg0->unknown_14_, 0, 0x800);
    func_020698d8((Struct_020698d8*)arg0, arg0->unknown_1788_, arg1, arg0->unknown_2c_);
    func_02069ecc((Struct_02069ecc*)arg0, arg0->unknown_2c_, arg0->unknown_30_);
    func_0206c570(arg0, arg0->unknown_30_);
    arg0->unknown_870_ = 5;
}

extern "C" ARM void func_020698d8(Struct_020698d8* arg0, int arg1, signed char* arg2, char* arg3) {
    if (arg2 == 0 || arg3 == 0) {
        return;
    }
    unsigned char var0 = arg1;
    while (*arg2 != 0) {
        if (func_020d857c((char*)arg2, (char*)data_020f07d1)) {
            GameState* var1 = GameState::GetInstance();
            signed char var2[5];
            __clear(var2, 5);
            var2[2] = GetOwnPartyLeaderObjectIndex_020100b0(var1);
            var2[3] = GetProtagonistObjectIndex_020100a8(var1);
            var2[4] = GetOwnPartyLeaderObjectIndex_020100b0(var1);
            unsigned char var3 = 0;
            int var4 = 0;
            for (signed char** var5 = data_020f0784; *var5 != 0; var3++, var5++) {
                if (func_020d857c((char*)arg2 + 2, (char*)*var5 + 2)) {
                    Struct_020698d8_2* var6 = (Struct_020698d8_2*)var1->GetPartyMemberByIndex(var2[var3]);
                    if (var6 != 0) {
                        arg2 += GetStringLength_020d2ff0((char*)*var5);
                        arg3 += sprintf(arg3, var6->unknown_134_);
                        var4 = 1;
                    }
                    break;
                }
            }
            if (var4) {
                continue;
            }
        }
        signed char var7 = *arg2;
        if (var7 == '[') {
            int var8 = 0;
            if (CompareBytes_02001aec(arg2, data_020f07d4, 4) == 0) {
                arg2 += 4;
                Struct_020698d8_5* var9 = (Struct_020698d8_5*)GetPartyMemberBaseByIndex_0200ff1c(GameState::GetInstance(), arg0->unknown_1750_);
                if (var9 != 0) {
                    Struct_020698d8_3* var10 = &var9->unknown_144_->unknown_294_;
                    if (var10 != 0 && var10->unknown_18_ > 0 && var10->unknown_8_0_ == 0) {
                        arg3 += sprintf(arg3, var10->unknown_4_);
                    }
                }
            } else if (CompareBytes_02001aec(arg2, data_020f07d9, 6) == 0) {
                arg2 += 6;
                arg3 += sprintf(arg3, arg0->unknown_23c_);
            } else if (CompareBytes_02001aec(arg2, data_020f07e0, 4) == 0) {
                arg2 += 4;
                arg3 += sprintf(arg3, arg0->unknown_27c_);
            } else if (CompareBytes_02001aec(arg2, data_020f07e5, 7) == 0) {
                arg2 += 7;
                arg3 += sprintf(arg3, arg0->unknown_2bc_);
            } else if (CompareBytes_02001aec(arg2, data_020f07ed, 7) == 0) {
                arg2 += 7;
                arg3 += sprintf(arg3, arg0->unknown_2fc_);
            } else if (CompareBytes_02001aec(arg2, data_020f07f5, 7) == 0) {
                arg2 += 7;
                arg3 += sprintf(arg3, arg0->unknown_33c_);
            } else if (CompareBytes_02001aec(arg2, data_020f07fd, 4) == 0) {
                arg2 += 4;
                arg3 += sprintf(arg3, data_020f0802, arg0->unknown_77c_);
            } else if (CompareBytes_02001aec(arg2, data_020f0805, 7) == 0) {
                arg2 += 7;
                int var11 = ParseDecimal_02005a94((char*)arg2) - 1;
                if (var11 >= 0 && var11 < 16) {
                    arg3 += sprintf(arg3, arg0->unknown_37c_[var11]);
                } else {
                    var8 = 1;
                }
            } else if (CompareBytes_02001aec(arg2, data_020f080d, 9) == 0) {
                arg2 += 9;
            } else if (CompareBytes_02001aec(arg2, data_020f0817, 8) == 0 || CompareBytes_02001aec(arg2, data_020f0820, 8) == 0) {
                arg2 += 8;
            } else if (CompareBytes_02001aec(arg2, data_020f0829, 5) == 0) {
                arg2 += 5;
                int var12 = ParseDecimal_02005a94((char*)arg2) - 1;
                if (var12 >= 0 && var12 < 16) {
                    int var14 = arg0->unknown_780_[var12];
                    unsigned char var13 = arg0->unknown_7d2_[var12];
                    if (var13 != 0) {
                        unsigned char var15 = var13 - func_020474b4(arg0, var14);
                        int var16 = var15 * var0;
                        switch (arg0->unknown_7c1_[var12]) {
                            case 0:
                                arg3 += sprintf(arg3, data_020f082f, var14, var16);
                                break;
                            case 1:
                                arg3 += sprintf(arg3, data_020f0838, var16, var14);
                                break;
                            default:
                                arg3 += sprintf(arg3, data_020f0802, var14);
                                break;
                        }
                    } else {
                        arg3 += sprintf(arg3, data_020f0802, var14);
                    }
                } else {
                    var8 = 1;
                }
            } else {
                *arg3++ = var7;
                arg2++;
                continue;
            }
            while (*arg2 != ']' && *arg2 != 0) {
                arg2++;
            }
            if (*arg2 == 0) {
                arg3 += sprintf(arg3, data_020f0841);
                break;
            }
            arg2++;
            if (var8) {
                arg3 += sprintf(arg3, data_020f0841);
            }
            continue;
        }
        if (var7 == '<') {
            if (CompareBytes_02001aec(arg2, data_020f0848, 6) == 0) {
                switch ((unsigned char)ParseDecimal_02005a94((char*)arg2 + 6)) {
                    case 8:
                        var0 = 8;
                        break;
                    case 10:
                        var0 = 10;
                        break;
                    case 12:
                        var0 = 12;
                        break;
                    default:
                        var0 = arg1;
                        break;
                }
            }
            if (CompareBytes_02001aec(arg2, data_020f084f, 13) == 0) {
                arg2 += 13;
                GameState* var16 = GameState::GetInstance();
                char var17[0x30];
                __clear(var17, 0x30);
                func_020de968(((Struct_020698d8_6*)var16)->unknown_6f9c_, var17);
                if (GetStringLength_020d2ff0(var17) != 0) {
                    arg3 += sprintf(arg3, var17);
                }
            }
        }
        unsigned char var18 = *arg2;
        if ((var18 >= 0x81 && var18 <= 0x9f) || (var18 >= 0xe0 && var18 <= 0xea)) {
            *arg3++ = *arg2++;
        }
        *arg3++ = *arg2++;
    }
    *arg3 = 0;
}

static inline void inline_02069ecc(char* arg0, unsigned short arg1) {
    memcpy(arg0, &arg1, 2);
}

extern "C" ARM void func_02069ecc(Struct_02069ecc* arg0, char* arg1, char* arg2) {
    unsigned short var0;
    if (arg1 == 0 || arg2 == 0) {
        return;
    }
    const char* var140 = arg1;
    var140 = func_0206bed8((Struct_0206a3c0_2*)arg0, var140);
    unsigned char var3 = 1;
    unsigned char var2 = 1;
    unsigned char var1 = 1;
    unsigned char var4 = 1;
    unsigned char var5 = 0;
    unsigned char var6 = 0;
    unsigned short var7 = 0;
    while (*var140 != 0) {
        signed char var8 = *var140;
        if ((var8 == '\\' && var140[1] == 'n') || (var8 == '\r' && var140[1] == '\n')) {
            inline_02069ecc(arg2, 0xff18);
            var140 += 2;
            arg2 += 2;
            continue;
        }
        if (var8 == '\n') {
            inline_02069ecc(arg2, 0xff18);
            var140 += 1;
            arg2 += 2;
            continue;
        }
        if ((unsigned char)var8 == 0x81 && var140[1] == 0x40) {
            inline_02069ecc(arg2, 0xff1a);
            var140 += 2;
            arg2 += 2;
            continue;
        }
        if (var8 == ' ') {
            inline_02069ecc(arg2, 0xff1b);
            var140 += 1;
            arg2 += 2;
            continue;
        }
        if (var8 == '[' && var5 == 0 && var6 == 0) {
            inline_02069ecc(arg2, 0xff36);
            var140 += 1;
            arg2 += 2;
            var5 = 1;
            continue;
        }
        if (var8 == '/' && var5 != 0 && var6 == 0) {
            inline_02069ecc(arg2, 0xff37);
            var140 += 1;
            arg2 += 2;
            var6 = 1;
            continue;
        }
        if (var8 == ']' && var5 != 0 && var6 != 0) {
            inline_02069ecc(arg2, 0xff38);
            var140 += 1;
            var5 = 0;
            var6 = 0;
            arg2 += 2;
            continue;
        }
        if (var8 == '<') {
            {
                const char* var16[6] = {data_020f0728, data_020f0742, data_020f0734, data_020f072e, data_020f073b, 0};
                const char** var17 = var16;
                while (*var17 != 0) {
                    if (func_020d857c(var140, *var17)) {
                        while (*var140 != '>') {
                            var140++;
                        }
                        var140++;
                        break;
                    }
                    var17++;
                }
            }
            if (func_020d85dc(var140, data_020f085d)) {
                int var18 = 8;
                arg0->unknown_178e_ = ParseDecimal_02005a94(var140 + var18);
                while (var140[var18] != '>') {
                    if (var140[var18] == 0) {
                        return;
                    }
                    var18++;
                }
                inline_02069ecc(arg2, 0xff0c);
                var140 += var18 + 1;
                arg2 += 2;
                continue;
            }
            if (func_020d85dc(var140, data_020f0866)) {
                inline_02069ecc(arg2, 0xff0d);
                var140 += 6;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f086d)) {
                int var21 = 6;
                arg0->unknown_178c_ = ParseDecimal_02005a94(var140 + var21);
                while (var140[var21] != '>') {
                    if (var140[var21] == 0) {
                        return;
                    }
                    var21++;
                }
                inline_02069ecc(arg2, 0xff0b);
                var140 += var21 + 1;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0874)) {
                inline_02069ecc(arg2, 0xff0a);
                var140 += 5;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f087a)) {
                int var24 = 6;
                int var25 = ParseDecimal_02005a94(var140 + var24);
                while (var140[var24] != '>') {
                    if (var140[var24] == 0) {
                        return;
                    }
                    var24++;
                }
                if (var25 < 0) {
                    var25 = 0;
                }
                func_020436dc(arg0, var25, arg0->unknown_17dd_);
                arg0->unknown_17dd_++;
                inline_02069ecc(arg2, 0xff1c);
                var140 += var24 + 1;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0881)) {
                inline_02069ecc(arg2, 0xff1f);
                var140 += 10;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f088c)) {
                int var28 = 7;
                int var29 = ParseDecimal_02005a94(var140 + var28);
                while (var140[var28] != '>') {
                    if (var140[var28] == 0) {
                        return;
                    }
                    var28++;
                }
                if (var29 < 0) {
                    var29 = 0;
                }
                func_020436dc(arg0, var29, arg0->unknown_17dd_);
                arg0->unknown_17dd_++;
                inline_02069ecc(arg2, 0xff20);
                var140 += var28 + 1;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0894)) {
                inline_02069ecc(arg2, 0xff21);
                var140 += 0x10;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f08a5)) {
                inline_02069ecc(arg2, 0xff28);
                var140 += 8;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f08ae)) {
                inline_02069ecc(arg2, 0xff29);
                var140 += 9;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f08b8)) {
                inline_02069ecc(arg2, 0xff2a);
                var140 += 8;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f08c1)) {
                inline_02069ecc(arg2, 0xff2b);
                var140 += 9;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f08cb)) {
                int var36 = 0xd;
                arg0->unknown_17f7_ = ParseDecimal_02005a94(var140 + var36) != 0;
                int var37 = 0;
                while (var140[var36] != ',') {
                    if (var140[var36] == '>') {
                        var37 = 1;
                        break;
                    }
                    var36++;
                }
                var36++;
                if (var37) {
                    var140 += var36 + 1;
                    continue;
                }
                arg0->unknown_17f8_ = ParseDecimal_02005a94(var140 + var36) != 0;
                while (var140[var36] != ',') {
                    if (var140[var36] == '>') {
                        var37 = 1;
                        break;
                    }
                    var36++;
                }
                var36++;
                if (var37) {
                    var140 += var36 + 1;
                    continue;
                }
                arg0->unknown_174e_ = ParseDecimal_02005a94(var140 + var36);
                while (var140[var36] != '>') {
                    if (var140[var36] == 0) {
                        return;
                    }
                    var36++;
                }
                inline_02069ecc(arg2, 0xff1d);
                var140 += var36 + 1;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f08d9)) {
                int var39 = 4;
                signed char var40 = ParseDecimal_02005a94(var140 + var39);
                int var41 = 0;
                while (var140[var39] != ',') {
                    if (var140[var39] == '>') {
                        var41 = 1;
                        break;
                    }
                    var39++;
                }
                var39++;
                if (var41) {
                    var140 += var39 + 1;
                    continue;
                }
                signed char var42 = ParseDecimal_02005a94(var140 + var39);
                while (var140[var39] != '>') {
                    if (var140[var39] == 0) {
                        return;
                    }
                    var39++;
                }
                inline_02069ecc(arg2, 0xff1e);
                var140 += var39 + 1;
                arg2 += 2;
                arg0->unknown_177c_[arg0->unknown_1784_] = var40;
                arg0->unknown_1780_[arg0->unknown_1784_] = var42;
                arg0->unknown_1784_++;
                continue;
            }
            if (func_020d857c(var140, data_020f08de)) {
                int var44 = 3;
                short var45 = ParseDecimal_02005a94(var140 + var44);
                while (var140[var44] != '>') {
                    if (var140[var44] == 0) {
                        return;
                    }
                    var44++;
                }
                inline_02069ecc(arg2, 0xff22);
                var140 += var44 + 1;
                memcpy(arg2 + 2, &var45, 2);
                arg2 += 4;
                continue;
            }
            if (func_020d857c(var140, data_020f08e2)) {
                int var47 = 3;
                short var48 = ParseDecimal_02005a94(var140 + var47);
                while (var140[var47] != '>') {
                    if (var140[var47] == 0) {
                        return;
                    }
                    var47++;
                }
                inline_02069ecc(arg2, 0xff23);
                var140 += var47 + 1;
                memcpy(arg2 + 2, &var48, 2);
                arg2 += 4;
                continue;
            }
            if (func_020d857c(var140, data_020f08e6)) {
                short var50 = 0;
                short var51 = 0;
                int var52 = 4;
                var50 = ParseDecimal_02005a94(var140 + var52);
                int var53 = 0;
                while (var140[var52] != ',') {
                    if (var140[var52] == '>') {
                        var53 = 1;
                        break;
                    }
                    var52++;
                }
                var52++;
                if (var53) {
                    var140 += var52 + 1;
                    continue;
                }
                var51 = ParseDecimal_02005a94(var140 + var52);
                while (var140[var52] != '>') {
                    if (var140[var52] == 0) {
                        return;
                    }
                    var52++;
                }
                inline_02069ecc(arg2, 0xff24);
                var140 += var52 + 1;
                memcpy(arg2 + 2, &var50, 2);
                memcpy(arg2 + 4, &var51, 2);
                arg2 += 6;
                continue;
            }
            if (func_020d857c(var140, data_020f08eb)) {
                int var55 = 3;
                short var56 = ParseDecimal_02005a94(var140 + var55);
                while (var140[var55] != '>') {
                    if (var140[var55] == 0) {
                        return;
                    }
                    var55++;
                }
                inline_02069ecc(arg2, 0xff25);
                var140 += var55 + 1;
                memcpy(arg2 + 2, &var56, 2);
                arg2 += 4;
                continue;
            }
            if (func_020d857c(var140, data_020f08ef)) {
                int var58 = 3;
                short var59 = ParseDecimal_02005a94(var140 + var58);
                while (var140[var58] != '>') {
                    if (var140[var58] == 0) {
                        return;
                    }
                    var58++;
                }
                inline_02069ecc(arg2, 0xff26);
                var140 += var58 + 1;
                memcpy(arg2 + 2, &var59, 2);
                arg2 += 4;
                continue;
            }
            if (func_020d857c(var140, data_020f08f3)) {
                short var61 = 0;
                short var62 = 0;
                int var63 = 4;
                var61 = ParseDecimal_02005a94(var140 + var63);
                int var64 = 0;
                while (var140[var63] != ',') {
                    if (var140[var63] == '>') {
                        var64 = 1;
                        break;
                    }
                    var63++;
                }
                var63++;
                if (var64) {
                    var140 += var63 + 1;
                    continue;
                }
                var62 = ParseDecimal_02005a94(var140 + var63);
                while (var140[var63] != '>') {
                    if (var140[var63] == 0) {
                        return;
                    }
                    var63++;
                }
                inline_02069ecc(arg2, 0xff27);
                var140 += var63 + 1;
                memcpy(arg2 + 2, &var61, 2);
                memcpy(arg2 + 4, &var62, 2);
                arg2 += 6;
                continue;
            }
            if (func_020d857c(var140, data_020f08f8)) {
                inline_02069ecc(arg2, 0xff04);
                var140 += 7;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0900)) {
                inline_02069ecc(arg2, 0xff05);
                var140 += 7;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0908)) {
                inline_02069ecc(arg2, 0xff06);
                var140 += 0xb;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0916)) {
                inline_02069ecc(arg2, 0xff07);
                var140 += 0xf;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0928)) {
                inline_02069ecc(arg2, 0xff08);
                var140 += 9;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0932)) {
                int var71 = 0xe;
                int var72 = ParseDecimal_02005a94(var140 + var71);
                while (var140[var71] != '>') {
                    if (var140[var71] == 0) {
                        return;
                    }
                    var71++;
                }
                arg0->unknown_1778_[var7] = var72;
                inline_02069ecc(arg2, var7 + 0x52 + 0xff00);
                var7 = (unsigned short)(var7 + 1) & 3;
                var140 += var71 + 1;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0941)) {
                var0 = 0xff56;
                var0 += (signed char)(var140[5] - '0');
                inline_02069ecc(arg2, var0);
                var140 += 7;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0947)) {
                var0 = 0xffd0;
                var0 += (unsigned short)(var140[4] - 0x40);
                inline_02069ecc(arg2, var0);
                var140 += 6;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f094c)) {
                var0 = 0xffe0;
                var0 += (unsigned short)(var140[4] - 0x40);
                inline_02069ecc(arg2, var0);
                var140 += 6;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0951)) {
                GameState* var77 = GameState::GetInstance();
                int var142 = GetProtagonistObjectIndex_020100a8(var77);
                int var78[4];
                int var79[4];
                int var80 = 0;
                int var81 = 0;
                func_02010834(var77, var142, var78, &var80);
                func_02010890(var77, var79, &var81);
                var140 += 7;
                if (var80 == var81) {
                    var1 = 1;
                    continue;
                }
                var1 = 0;
                func_0206c520(arg0, &var140, data_020f0959, 9);
                continue;
            }
            if (func_020d857c(var140, data_020f0959)) {
                if (var1 == 0) {
                    var140 += 9;
                    continue;
                }
                func_0206c520(arg0, &var140, data_020f0963, 8);
                continue;
            }
            if (func_020d857c(var140, data_020f0963)) {
                var140 += 8;
                continue;
            }
            if (func_020d857c(var140, data_020f096c)) {
                GameState* var82 = GameState::GetInstance();
                GameObject* var83 = GetPartyMemberBaseByIndex_0200ff1c(var82, GetOwnPartyLeaderObjectIndex_020100b0(var82));
                var140 += 0xa;
                if (var83 == 0) {
                    continue;
                }
                if (GetAppearance_02052e2c(var83)->unknown_14_0_ == 0) {
                    var2 = 1;
                    continue;
                }
                var2 = 0;
                func_0206c520(arg0, &var140, data_020f0977, 0xc);
                continue;
            }
            if (func_020d857c(var140, data_020f0977)) {
                if (var2 == 0) {
                    var140 += 0xc;
                    continue;
                }
                func_0206c520(arg0, &var140, data_020f0984, 0xb);
                continue;
            }
            if (func_020d857c(var140, data_020f0984)) {
                var140 += 0xb;
                continue;
            }
            if (func_020d857c(var140, data_020f0990)) {
                GameObject* var84 = GetPartyMemberBaseByIndex_0200ff1c(GameState::GetInstance(), 0);
                var140 += 0xf;
                if (var84 == 0) {
                    continue;
                }
                if (GetAppearance_02052e2c(var84)->unknown_14_0_ == 0) {
                    var3 = 1;
                    continue;
                }
                var3 = 0;
                func_0206c520(arg0, &var140, data_020f09a0, 0x11);
                continue;
            }
            if (func_020d857c(var140, data_020f09a0)) {
                if (var3 == 0) {
                    var140 += 0x11;
                    continue;
                }
                func_0206c520(arg0, &var140, data_020f09b2, 0x10);
                continue;
            }
            if (func_020d857c(var140, data_020f09b2)) {
                var140 += 0x10;
                continue;
            }
            if (func_020d857c(var140, data_020f09c3)) {
                Struct_02069ecc_3* var85 = (Struct_02069ecc_3*)GetParty_02010828(GameState::GetInstance());
                var140 += 9;
                if (var85->unknown_f7c_ > 1) {
                    var4 = 1;
                    continue;
                }
                var4 = 0;
                func_0206c520(arg0, &var140, data_020f09cd, 0xb);
                continue;
            }
            if (func_020d857c(var140, data_020f09cd)) {
                if (var4 == 0) {
                    var140 += 0xb;
                    continue;
                }
                func_0206c520(arg0, &var140, data_020f09d9, 0xa);
                continue;
            }
            if (func_020d857c(var140, data_020f09d9)) {
                var140 += 0xa;
                continue;
            }
            if (func_020d857c(var140, data_020f09e4)) {
                int var86 = 6;
                float var87 = func_020055d4(var140 + var86);
                while (var140[var86] != '>') {
                    if (var140[var86] == 0) {
                        return;
                    }
                    var86++;
                }
                inline_02069ecc(arg2, 0xff2c);
                var140 += var86 + 1;
                arg2 += 2;
                arg0->unknown_1710_ = var87 * 4096.0f;
                continue;
            }
            if (func_020d857c(var140, data_020f09eb)) {
                inline_02069ecc(arg2, 0xff0f);
                var140 += 0xa;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f09f6)) {
                int var90 = 4;
                int var91 = ParseDecimal_02005a94(var140 + var90);
                while (var140[var90] != '>') {
                    if (var140[var90] == 0) {
                        return;
                    }
                    var90++;
                }
                inline_02069ecc(arg2, var91 + 0x39 + 0xff00);
                var140 += var90 + 1;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f09fb)) {
                int var93 = 4;
                int var94 = ParseDecimal_02005a94(var140 + var93);
                while (var140[var93] != '>') {
                    if (var140[var93] == 0) {
                        return;
                    }
                    var93++;
                }
                unsigned short var96 = 0xff50;
                unsigned short var97 = 0;
                const short var95[2] = {14, -1};
                while (var95[var97] >= 0) {
                    if (var94 == var95[var97]) {
                        var96 += var97;
                        break;
                    }
                    var97++;
                }
                inline_02069ecc(arg2, var96);
                var140 += var93 + 1;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0a00)) {
                int var99 = 7;
                short var100 = ParseDecimal_02005a94(var140 + var99);
                arg0->unknown_1776_ = func_jpn_02098210(GetQuestManager_02094d6c(), var100 & 0xff);
                while (var140[var99] != '>') {
                    if (var140[var99] == 0) {
                        return;
                    }
                    var99++;
                }
                inline_02069ecc(arg2, 0xff10);
                var140 += var99 + 1;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0a08)) {
                inline_02069ecc(arg2, 0xff11);
                var140 += 0xb;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0a14)) {
                inline_02069ecc(arg2, 0xff13);
                var140 += 0xe;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0a23)) {
                inline_02069ecc(arg2, 0xff12);
                var140 += 8;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0a2c)) {
                inline_02069ecc(arg2, 0xff2d);
                var140 += 8;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0a35)) {
                inline_02069ecc(arg2, 0xff02);
                var140 += 0xc;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0a42)) {
                inline_02069ecc(arg2, 0xff2e);
                var140 += 8;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0a4b)) {
                inline_02069ecc(arg2, 0xff2f);
                var140 += 8;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0a54)) {
                inline_02069ecc(arg2, 0xff30);
                var140 += 5;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0a5a)) {
                inline_02069ecc(arg2, 0xff31);
                var140 += 5;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0a60)) {
                inline_02069ecc(arg2, 0xff14);
                var140 += 5;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0a66)) {
                inline_02069ecc(arg2, 0xff15);
                var140 += 4;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0a6b)) {
                inline_02069ecc(arg2, 0xff16);
                var140 += 5;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0a71)) {
                inline_02069ecc(arg2, 0xff17);
                var140 += 6;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0a78)) {
                inline_02069ecc(arg2, 0xff01);
                var140 += 5;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0a7e)) {
                inline_02069ecc(arg2, 0xff03);
                var140 += 7;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0a86)) {
                inline_02069ecc(arg2, 0xff0e);
                var140 += 7;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0a8e)) {
                char var118[3] = "\xea\x43";
                unsigned short var119;
                memcpy(&var119, var118, 2);
                inline_02069ecc(arg2, var119);
                var140 += 8;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0a97)) {
                char var121[3] = "\xea\x44";
                unsigned short var122;
                memcpy(&var122, var121, 2);
                inline_02069ecc(arg2, var122);
                var140 += 8;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0aa0)) {
                char var124[3] = "\xea\x45";
                unsigned short var125;
                memcpy(&var125, var124, 2);
                inline_02069ecc(arg2, var125);
                var140 += 8;
                arg2 += 2;
                continue;
            }
            if (func_020d857c(var140, data_020f0aa9)) {
                char var127[3] = "\xea\x46";
                unsigned short var128;
                memcpy(&var128, var127, 2);
                inline_02069ecc(arg2, var128);
                var140 += 8;
                arg2 += 2;
                continue;
            }
        }
        if (*var140 >= 'A' && *var140 <= 'Z') {
            signed char var131 = *var140 - 'A';
            memcpy(arg2, data_020f0ab2, 2);
            arg2[1] += var131;
            arg2 += 2;
            var140 += 1;
            continue;
        }
        if (*var140 >= 'a' && *var140 <= 'z') {
            signed char var132 = *var140 - 'a';
            memcpy(arg2, data_020f0ab5, 2);
            arg2[1] += var132;
            arg2 += 2;
            var140 += 1;
            continue;
        }
        if (*var140 >= '0' && *var140 <= '9') {
            signed char var133 = *var140 - '0';
            memcpy(arg2, data_020f0ab8, 2);
            arg2[1] += var133;
            arg2 += 2;
            var140 += 1;
            continue;
        }
        int var134 = 0;
        int var137 = 0;
        char var135[] = "-!?[]{}()~,.a";
        char var136[] = "\x81\x7c\x81\x49\x81\x48\x81\x75\x81\x76\x81\x75\x81\x76\x81\x69\x81\x6a\x81\x60\x81\x41\x81\x44";
        for (; var135[var137] != 'a'; var137++) {
            if (*var140 == var135[var137]) {
                memcpy(arg2, &var136[var137 * 2], 2);
                arg2 += 2;
                var140 += 1;
                var134 = 1;
                break;
            }
        }
        if (var134) {
            continue;
        }
        var137 = 0;
        char var138[] = "+*/%&|=:;<>$@#^_\\\"'a";
        for (; var138[var137] != 'a'; var137++) {
            if (*var140 == var138[var137]) {
                var140 += 1;
                var134 = 1;
                break;
            }
        }
        if (var134) {
            continue;
        }
        arg2[0] = *var140;
        var140++;
        arg2[1] = *var140;
        var140++;
        arg2 += 2;
    }
    var0 = 0xff01;
    memcpy(arg2, &var0, 2);
    arg2[2] = 0;
}

extern "C" ARM const char* func_0206bed8(Struct_0206a3c0_2* arg0, const char* arg1)
{
    static const char data_020e88a5[9][3] = {"\x94\x92", "\x92\x83", "\x90\xd4", "\x89\xa9", "\x97\xce", "\x90\xc2", "\x8e\x87", "\x90\x85", "\x8a\x44"};
    static const unsigned short data_020e884a[10] = {0x7fff, 0x1ff, 0x1f, 0x3ff, 0x3e0, 0x7c00, 0x7c1f, 0x7fe0, 0x3def, 0};
    unsigned char var0 = 1;
    arg0->unknown_1000_.unknown_9b6_ = (unsigned char)var0;
    GameObject* var1 = GameState::GetInstance()->GetUnknownGameObject();
    NPC_0203dce4* var2 = GetNPCByIndex_0203dce4(GetNPCManager_0203cf4c(), arg0->unknown_1000_.unknown_838_);
    if (var1 != NULL && var2 != NULL)
    {
        Struct_0203de84 var3;
        Struct_0203de84 var4;
        Struct_0203de84 var5;
        var3 = *(Struct_0203de84*)&var1->obj3D_.position_;
        GetNPCPosition_020406f8(&var5, (NPC_0203de84_2*)var2);
        var4 = var5;
        arg0->unknown_1000_.unknown_844_ = fix32ReduceAngle0To2Pi(fix32_Atan2(var3.unknown_0_[0] - var4.unknown_0_[0], var3.unknown_0_[2] - var4.unknown_0_[2]));
        arg0->unknown_1000_.unknown_9b6_ = 1;
    }
    arg0->unknown_1000_.unknown_959_ = 0;
    arg0->unknown_1000_.unknown_9b7_ = 0;
    while (var0)
    {
        if (func_020d857c(arg1, data_020f0a2c))
        {
            arg0->unknown_1000_.unknown_844_ = arg0->unknown_1000_.unknown_83c_;
            arg0->unknown_1000_.unknown_9b6_ = 0;
            arg1 += 8;
        }
        else if (func_020d857c(arg1, data_020f0a54))
        {
            arg0->unknown_1000_.unknown_959_ = 60;
            arg0->unknown_1000_.unknown_9b7_ = 1;
            arg0->unknown_1000_.unknown_95c_ = 0;
            arg1 += 5;
            PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 6, 0);
        }
        else if (func_020d857c(arg1, data_020f0a5a))
        {
            arg0->unknown_1000_.unknown_959_ = 60;
            arg0->unknown_1000_.unknown_9b7_ = 1;
            arg0->unknown_1000_.unknown_95c_ = 1;
            arg1 += 5;
            PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 28, 0);
        }
        else if (func_020d85dc(arg1, data_020f0abb))
        {
            unsigned char var6;
            int var7 = 6;
            int var8 = var7;
            var6 = 0;
            while (arg1[var8] != '>')
            {
                if (arg1[var8] == 0) return arg1 + var8;
                var8++;
            }
            int var9 = ParseDecimal_02005a94(arg1 + 6);
            while (arg1[var7] != ',')
            {
                if (arg1[var7] == '>')
                {
                    arg1 += var7 + 1;
                    var6 = 1;
                    break;
                }
                var7++;
            }
            if (var6) return arg1;
            var7++;
            int var10 = ParseDecimal_02005a94(arg1 + var7);
            while (arg1[var7] != ',')
            {
                if (arg1[var7] == '>')
                {
                    arg1 += var7 + 1;
                    var6 = 1;
                    break;
                }
                var7++;
            }
            if (var6) return arg1;
            var7++;
            int var11 = ParseDecimal_02005a94(arg1 + var7);
            while (arg1[var7] != ',')
            {
                if (arg1[var7] == '>')
                {
                    arg1 += var7 + 1;
                    var6 = 1;
                    break;
                }
                var7++;
            }
            if (var6) return arg1;
            int var12 = ParseDecimal_02005a94(arg1 + (var7 + 1));
            if (var9 < 0) var9 = 0;
            if (var9 > 256) var9 = 256;
            if (var10 < 0) var10 = 0;
            if (var10 > 192) var10 = 192;
            if (var11 < 0) var11 = 256 - var9;
            if (var11 > 256) var11 = 256 - var9;
            if (var12 < 0) var12 = 192 - var10;
            if (var12 > 192) var12 = 192 - var10;
            SetMessageWindowRect_02042b98(arg0, var9, var10, var11, var12);
            arg1 += var8 + 1;
        }
        else if (func_020d85dc(arg1, data_020f0ac2))
        {
            arg0->unknown_1000_.unknown_9b1_ = 0;
            arg1 += 5;
        }
        else if (func_020d85dc(arg1, data_020f0ac8))
        {
            arg0->unknown_1000_.unknown_9b8_ = 1;
            arg1 += 5;
        }
        else if (func_020d85dc(arg1, data_020f0ace))
        {
            int var13 = 6;
            int var14 = ParseDecimal_02005a94(arg1 + 6);
            while (arg1[var13] != '>')
            {
                if (arg1[var13] == 0) return arg1 + var13;
                var13++;
            }
            if (var14 < 1) var14 = 1;
            arg0->unknown_9a4_ = var14;
            arg1 += var13 + 1;
        }
        else if (func_020d85dc(arg1, data_020f0ad5))
        {
            int var15 = 6;
            int var16 = var15;
            while (arg1[var16] != '>')
            {
                if (arg1[var16] == 0) return arg1 + var16;
                var16++;
            }
            int var17 = ParseDecimal_02005a94(arg1 + 6);
            if (var17 <= 0) var17 = 12;
            while (arg1[var15] != ',')
            {
                if (arg1[var15] == '>')
                {
                    arg1 += var15 + 1;
                    break;
                }
                var15++;
            }
            int var18 = ParseDecimal_02005a94(arg1 + (var15 + 1));
            if (var18 <= 0) var18 = 16;
            arg0->unknown_1000_.unknown_860_ = var17;
            arg0->unknown_1000_.unknown_864_ = var18;
            arg1 += var16 + 1;
        }
        else if (func_020d85dc(arg1, data_020f0adc))
        {
            int var19 = 7;
            int var20 = var19;
            while (arg1[var20] != '>')
            {
                if (arg1[var20] == 0) return arg1 + var20;
                var20++;
            }
            unsigned char var21 = 0;
            char var22[3] = {};
            signed char var23 = 0;
            memcpy(var22, arg1 + 7, 2);
            for (; data_020e88a5[var23][0]; var23++) {
                if (CompareBytes_02001aec(var22, data_020e88a5[var23], 2) == 0) {
                    arg0->unknown_1000_.unknown_87c_ = data_020e884a[var23];
                    arg1 += var20 + 1;
                    var21 = 1;
                    break;
                }
            }
            if (var21) continue;
            int var24 = ParseDecimal_02005a94(arg1 + 7);
            if (var24 < 0) var24 = 255;
            if (var24 > 255) var24 = 255;
            while (arg1[var19] != ',')
            {
                if (arg1[var19] == '>')
                {
                    arg1 += var19 + 1;
                    var21 = 1;
                    break;
                }
                var19++;
            }
            if (var21) continue;
            var19++;
            int var25 = ParseDecimal_02005a94(arg1 + var19);
            if (var25 < 0) var25 = 255;
            if (var25 > 255) var25 = 255;
            while (arg1[var19] != ',')
            {
                if (arg1[var19] == '>')
                {
                    arg1 += var19 + 1;
                    var21 = 1;
                    break;
                }
                var19++;
            }
            if (var21) continue;
            int var26 = ParseDecimal_02005a94(arg1 + (var19 + 1));
            if (var26 < 0) var26 = 255;
            if (var26 > 255) var26 = 255;
            arg0->unknown_1000_.unknown_87c_ = (var24 >> 3) | ((var25 >> 3) << 5) | ((var26 >> 3) << 10);
            arg1 += var20 + 1;
        }
        else if (func_020d85dc(arg1, data_020f0ae4))
        {
            arg0->unknown_1000_.unknown_9bb_ = 0;
            arg1 += 6;
        }
        else var0 = 0;
    }
    return arg1;
}

extern "C" ARM void func_0206c520(void* arg0, const char** arg1, const char* arg2, int arg3) {
    if (!arg1 || !arg2) return;
    const char* var0 = *arg1;
    while (*var0) {
        if (!CompareBytes_02001aec(var0, arg2, arg3)) break;
        var0++;
    }
    *arg1 = var0;
}

extern "C" ARM void func_0206c570(void* arg0, const char* arg1) {
    MessageWindow_02021b84* var0 = static_cast<MessageWindow_02021b84*>(arg0);
    if (arg1 == NULL) return;
    {
        void* var1 = var0->unknown_14_;
        memcpy(var1, arg1, (var0->unknown_34_ = GetStringLength_020d2ff0(arg1)));
    }
    {
        unsigned short* var2 = static_cast<unsigned short*>(var0->unknown_14_);
        var0->unknown_24_ = var2;
        var0->unknown_20_ = var2;
    }
    memset(var0->unknown_4c_, 0, 0x140);
    memset(var0->unknown_1c_, 0, 0x140);
    func_0206aa28((char*)arg0);
}

extern "C" ARM void func_0206aa28(char* arg0) {
    (*(int*)(arg0 + Enum_0206aa28_108)) = 0;
    (*(int*)(arg0 + Enum_0206aa28_112)) = 0;
    (*(int*)(arg0 + Enum_0206aa28_116)) = 0;
    (*(int*)(arg0 + Enum_0206aa28_120)) = 0;
    Type_0206aa28* var0 = *(Type_0206aa28**)(arg0 + Enum_0206aa28_84);
    Type_0206aa28* var1 = *(Type_0206aa28**)(arg0 + Enum_0206aa28_80);
    bool var2 = false;
    while (var0 != 0) {
        *var1 = *var0;
        ++var1;
        (*(int*)(arg0 + Enum_0206aa28_112))++;
        if (*(unsigned int*)(arg0 + Enum_0206aa28_52) < (unsigned int)(var0 - *(Type_0206aa28**)(arg0 + Enum_0206aa28_20))) {
            *(int*)(arg0 + 0x868) = 0;
            break;
        }
        if (func_02069430(arg0, *var0)) {
            if (*var0 == 0xff1a || *var0 == 0xff1b) var2 = 1;
            if (func_02069408(arg0, *var0)) {
                if (!var2) {
                    (*(int*)(arg0 + Enum_0206aa28_112))--;
                    *(Type_0206aa28**)(arg0 + Enum_0206aa28_84) = ++var0;
                    --var1;
                    continue;
                }
                *(Type_0206aa28**)(arg0 + Enum_0206aa28_36) = var0;
                break;
            }
            unsigned short var3 = *var0;
            if ((var3 & 0xffe0) == 0xffe0) {
                var3 = (unsigned short)(var3 ^ 0xffe0) + 0xffd0;
                var0 = func_0206c730(arg0, var3, *(Type_0206aa28**)(arg0 + Enum_0206aa28_20));
                if (!var0) {
                    unsigned char var4 = *(unsigned char*)(arg0 + 0x17fd);
                    ResetMessageWindow_02043204(arg0);
                    CloseMessageWindow_02043124((Struct_02043124*)(arg0));
                    arg0[0x17fd] = var4;
                    break;
                }
            }
        } else {
            var2 = 1;
        }
        ++var0;
    }
    func_0206c794(arg0);
}

extern "C" ARM unsigned short* func_0206c730(void* arg0, unsigned short arg1, unsigned short* arg2) {
    MessageWindow_02021b84* var0 = static_cast<MessageWindow_02021b84*>(arg0);
    if (!arg2) return NULL;
    if (!func_02069430(arg0, arg1)) return NULL;
    unsigned int var1 = 0;
    while (arg2) {
        if (*arg2 == arg1) return arg2;
        var1++;
        arg2++;
        if (var0->unknown_34_ < var1) break;
    }
    return NULL;
}

extern "C" ARM void func_0206c794(void* arg0) {
    MessageWindow_02021b84* var0 = static_cast<MessageWindow_02021b84*>(arg0);
    unsigned short var1[16];
    unsigned char var2 = 0;
    __clear(var1, sizeof(var1));
    unsigned short* var3 = static_cast<unsigned short*>(var0->unknown_1c_);
    int var4 = 0;
    var0->unknown_1774_ = 0;
    unsigned char var5 = var0->unknown_17f3_;
    for (;;) {
        if (func_02069408(var0, *var3)) {
            var2 = 0;
            var0->unknown_1774_ = -1;
            var0->unknown_1772_ = 0;
            var0->unknown_19c4_ = 0;
            var4 = 1;
            break;
        }
        if (!func_02069430(var0, *var3)) {
            if (CompareBytes_02001aec(var3, data_020f07ce, 2) == 0) {
                var0->unknown_17f3_ = 0;
                break;
            }
            var1[var2] = *var3;
            var2 = (unsigned char)(var2 + 1) & 15;
        }
        var0->unknown_1774_++;
        var3++;
    }
    var3++;
    for (;;) {
        if (func_02069408(var0, *var3)) break;
        if (!func_02069430(var0, *var3)) {
            if (CompareBytes_02001aec(var3, data_020f0aeb, 2) == 0) {
                var2 = 0;
                var0->unknown_1774_ = -1;
                var0->unknown_1772_ = 0;
                var0->unknown_19c4_ = 0;
                var0->unknown_17f3_ = var5;
                var4 = 1;
                break;
            }
            if (CompareBytes_02001aec(var3, data_020f07ce, 2) == 0) break;
        }
        var3++;
    }
    if (!var0->unknown_17f3_ && var2) {
        unsigned short var6;
        for (unsigned char var7 = 0; var7 < var0->unknown_1772_; var7++) {
            var6 = var0->unknown_1752_[var7];
            if (!func_02069430(var0, var6)) {
                Struct_0204166c* var8 = &var0->unknown_9b8_[var6];
                if (var8->unknown_8_ >= 0 &&
                    var8->unknown1_18_ != var1[var7]) {
                    var4 = 1;
                    break;
                }
            }
        }
    }
    if (var4) {
        for (unsigned char var9 = 0; var9 < var0->unknown_1772_; var9++)
            func_0206cb14(var0, 10, var0->unknown_1752_[var9]);
        memset(var0->unknown_1752_, 0xff01, sizeof(var0->unknown_1752_));
        var0->unknown_19c3_ = 0;
    } else if (var0->unknown_1772_) {
        var0->unknown_6c_ = (short)var0->unknown_1774_;
        var0->unknown1_40_ = var0->unknown_1774_;
        var0->unknown_78_ = (short)var0->unknown_1774_;
        return;
    }
    var0->unknown_1772_ = 0;
}

extern "C" ARM void func_0206b104(struct Struct_0206b104* arg0) {
    if ((arg0->unknown_20_ == 0) | (arg0->unknown_24_ == 0)) return;
    if (arg0->unknown_6c_ == 0) return;
    unsigned short* var0;
    unsigned int var1 = arg0->unknown_88_;
    for (; var1 < arg0->unknown_6c_; var1++) {
        var0 = arg0->unknown_4c_ + var1;
        if (func_02069430(arg0, *var0)) {
            var1 += func_02069444(arg0, *var0);
        } else {
            func_0206cb14(arg0, 12, *var0);
            func_0206cb14(arg0, 6, *var0);
        }
    }
    arg0->unknown_6c_ = 0;
    arg0->unknown_70_ = 0;
    arg0->unknown_74_ = 0;
    arg0->unknown_78_ = 0;
}

extern "C" ARM void func_0206cb14(void* arg0, int arg1, unsigned short arg2) {
    MessageWindow_02021b84* var0 = static_cast<MessageWindow_02021b84*>(arg0);
    if (arg2 >= 0x80) return;
    if (func_02069430(var0, arg2)) return;
    Struct_0204166c* var1 = &var0->unknown_9b8_[arg2];
    if (var1->unknown_8_ < 0) return;
    if (var0->unknown_17b8_[arg2] == 0) return;
    if (arg1 != var1->unknown_1a_) return;
    int var2 = var0->unknown_17b8_[arg2] - 1;
    var0->unknown_17b8_[arg2] = var2;
    if ((var2 & 0xff) != 0) return;
    func_02041bbc(var1);
    var0->unknown_9b4_ = (var0->unknown_9b4_ - 1) & 0x7f;
}

extern "C" ARM void func_0206cba0(struct Struct_0206b224* arg0) {
    func_0206b104((Struct_0206b104*)arg0);
    memset(arg0->unknown_4c_, 0, Enum_0206b224_640);
    memset(arg0->unknown_50_, 0, Enum_0206b224_640);

    int var0 = 2;
    unsigned char* var1 = arg0->unknown_58_;
    arg0->unknown_54_ = var1 + var0;
    arg0->unknown_58_ = var1 + var0;

    func_0206aa28((char*)arg0);
}

extern "C" ARM void func_0206cbe8(void* arg0, unsigned short arg1, unsigned short* arg2) {
    MessageWindow_02021b84* var0 = static_cast<MessageWindow_02021b84*>(arg0);
    char* var1 = static_cast<char*>(arg0);
    unsigned short* var2 = func_0206c730(arg0, arg1, arg2);
    if (var2 == NULL) {
        ResetMessageWindow_02043204(var1);
        CloseMessageWindow_02043124(arg0);
        return;
    }
    func_0206b104((Struct_0206b104*)arg0);
    memset(var0->unknown_4c_, 0, 0x140);
    memset(var0->unknown_1c_, 0, 0x140);
    var0->unknown_24_ = var2;
    var0->unknown_20_ = var2;
    func_0206aa28((char*)arg0);
    var0->unknown_9a0_ = 5;
}

extern "C" ARM int func_0206cc50(Struct_0206cc50* arg0, unsigned short* arg1) {
    if (!arg1) return 0;
    unsigned short var2;
    int var0 = 0;
    int var1 = 0;
    while (!func_020694a0(arg0, *arg1)) {
        var2 = *arg1;
        if (func_02069430(arg0, var2)) {
            int var3 = func_02069444(arg0, var2);
            switch (var2) {
            case 0xff19:
                var0 += arg0->unknown_1788_;
                break;
            case 0xff1a:
                switch (arg0->unknown_1788_) {
                case 8:
                case 10:
                    var0 += arg0->unknown_1788_;
                    break;
                case 12:
                    var0 += arg0->unknown_8_;
                    break;
                }
                break;
            case 0xff1b:
                var0 += arg0->unknown_1788_ >> 1;
                break;
            case 0xff22:
                if (var0 < arg1[1]) var0 = arg1[1];
                break;
            case 0xff25:
                var0 += arg1[1];
                break;
            case 0xff37:
                var1 = 1;
                break;
            case 0xff38:
                var1 = 0;
                break;
            }
            arg1 = arg1 + var3 + 1;
        } else {
            if (var1 != 0) {
                arg1++;
            } else {
                arg1++;
                var0 += arg0->unknown_1730_;
            }
        }
    }
    return var0;
}

extern "C" ARM void func_0206cdcc(void* arg0, int* arg1, int* arg2) {
    MessageWindow_02021b84* var0 = static_cast<MessageWindow_02021b84*>(arg0);
    unsigned short* var1 = static_cast<unsigned short*>(var0->unknown_1c_);
    int var2 = var0->unknown1_40_;
    int var3 = var0->unknown_78_;
    int var4;
    int var5;
    unsigned short* var6 = var1 + var2;
    unsigned short* var7 = var1 + var3;
    var4 = var0->unknown_860_;
    var5 = 0;
    arg1[var5] = var4 - (func_0206cc50((Struct_0206cc50*)var0, var6) >> 1);
    arg2[var5] = 0;
    var6++;
    var5++;
    while (var6 != var7) {
        if (func_02069408(var0, *var6)) return;
        if (func_020694a0(var0, *var6)) {
            var6++;
            arg1[var5] = var4 - (func_0206cc50((Struct_0206cc50*)var0, var6) >> 1);
            arg2[var5] = 0;
            var5++;
        }
        var6++;
    }
}

extern "C" ARM void func_0206b61c(struct Struct_02065990* arg0) {
    int var0 = 1;
    int var1 = 0;
    int var2 = var1;
    unsigned short* var3 = arg0->unknown_4c_ + arg0->unknown_74_;
    while (var0) {
        int var4;
        if (func_020694a0(arg0, *var3)) {
            var0 = var2;
        }
        if (func_02069430(arg0, *var3)) {
            var4 = func_02069444(arg0, *var3);
            var3 += var4;
            var1 += var4;
        } else {
            func_0206cb14(arg0, *((unsigned char*)arg0 + 0x1788), *var3);
            func_0206cb14(arg0, 12, *var3);
            func_0206cb14(arg0, 6, *var3);
        }
        var3 += 1;
        var1 += 1;
    }
    arg0->unknown_74_ += var1;
    arg0->unknown_78_ += 1;
}

extern "C" ARM void func_0206cf44(unsigned char* arg0) {
    const char var10 = 3;
    const int var9 = 0xc0;
    const short var11 = 0xe0;
    unsigned short* var0 = *(unsigned short**)(arg0 + 0x20);
    unsigned short* var1 = *(unsigned short**)(arg0 + 0x24);
    int var2 = 0;
    while (var0 != var1) {
        unsigned short var3 = *var0;
        if (var3 == 0xff01 || var3 == 0xff0c || var3 == 0xff0d) break;
        if (var3 == 0xff18) var2++;
        var0++;
    }
    int var4 = *(int*)(arg0 + 0x1734);
    int var5 = (var2 - 1) * var4 + 12;
    int var6 = (var9 - var5) >> 1;
    int var7 = var6 - 0x10;
    int var8 = var9 - var7;
    SetMessageWindowRect_02042b98(arg0, 2, var7, 0xfc, var8);
}

extern "C" ARM void func_0206cfd4(char* arg0) {
    short var0 = *(short*)(arg0 + Enum_0206b7b0_2324);
    short var1 = *(short*)(arg0 + Enum_0206b7b0_2324 + 4);
    short var2 = *(short*)(arg0 + Enum_0206b7b0_324 + 4);
    short var3 = *(short*)(arg0 + Enum_0206b7b0_324 + 6);
    short var4 = *(short*)(arg0 + Enum_0206b7b0_2324 + 2);
    short var5 = var0 + var1 - var2;
    if (var5 < 0) var5 = 0;
    short var6 = var4 - var3;
    if (var6 < 0) var6 = 0;
    *(short*)(arg0 + Enum_0206b7b0_324) = var5;
    *(short*)(arg0 + Enum_0206b7b0_324 + 2) = var6;
}

extern "C" ARM void func_0206b804(char* arg0, int* arg1, int* arg2) {
    *arg2 = 0;
    *arg1 = 0;
    if (*(unsigned char*)(arg0 + Enum_0206b804_6592) != 0) {
        int var0;
        *(unsigned char*)(arg0 + Enum_0206b804_6605) = 1;
        *(int*)(arg0 + Enum_0206b804_64) = 0;
        var0 = *(unsigned char*)(arg0 + Enum_0206b804_6493) & 3;
        *arg1 = data_020e7e10[var0];
        *arg2 = data_020e7e1c[var0];
    }
}
#endif
