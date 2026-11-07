#if defined(jpn)
enum {Enum_ov023_021f3fbc_3756=0xe28, Enum_ov023_021f3fbc_21896=0x5778};
#else
enum {Enum_ov023_021f3fbc_3756=0xeac, Enum_ov023_021f3fbc_21896=0x5588};
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_0209ca2c(void* arg0);
extern "C" void func_ov023_021d8af8(void* arg0);
extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
extern "C" void* GetParty_02010828(GameState*);
extern "C" void func_ov017_021cc730(int arg0, unsigned char arg1, unsigned char arg2, unsigned char arg3);
extern "C" int GetMessageWindow_020421a0(void);
extern "C" void ResetMessageWindow_02043204(char* window);
extern "C" void CloseMessageWindow_02043124(char* window);
extern "C" void* GetGlobalFlags_020d6c00(void);
struct GlobalFlags_02038598_4;
extern "C" void ClearGlobalFlags_020466f4(struct GlobalFlags_02038598_4*, unsigned int);
extern "C" void func_ov000_02160d80(void* arg0, int arg1);
struct MusicManager_02109bf4_4;
extern "C" void StopMusic_0209c678(struct MusicManager_02109bf4_4*, int);
extern "C" void PopSubOverlay_020a1f4c(int);

extern char gMusicManager_02109bf4;

// USA: func_ov023_021f3fbc
extern "C" ARM int func_ov023_021f3fbc(char* arg0) {
    if (func_0209ca2c(&gMusicManager_02109bf4)) {
        return *(int*)(arg0 + Enum_ov023_021f3fbc_3756);
    }

    if (*(void**)(arg0 + Enum_ov023_021f3fbc_21896) != 0) {
        func_ov023_021d8af8(*(void**)(arg0 + Enum_ov023_021f3fbc_21896));
        *(void**)(arg0 + Enum_ov023_021f3fbc_21896) = 0;
    }

    if (IsLocalWirelessOn_0202b7d8((int*)GetLocalWireless_0202ae18())) {
        GameState* var0 = GameState::GetInstance();
        unsigned char* var1 = (unsigned char*)GetParty_02010828(var0);
        for (int var2 = 0; var2 < var1[0xf7c]; var2++) {
            unsigned char* var3 = var1 + var2;
            func_ov017_021cc730(var3[0xf78], 0, 0, 1);
        }
    }

    int var4 = GetMessageWindow_020421a0();
    ResetMessageWindow_02043204((char*)var4);
    CloseMessageWindow_02043124((char*)var4);
    ClearGlobalFlags_020466f4((struct GlobalFlags_02038598_4*)GetGlobalFlags_020d6c00(), 0x20000);
    func_ov000_02160d80(arg0, 4);
    StopMusic_0209c678((struct MusicManager_02109bf4_4*)&gMusicManager_02109bf4, 0);
    PopSubOverlay_020a1f4c(1);
    return *(int*)(arg0 + Enum_ov023_021f3fbc_3756);
}
