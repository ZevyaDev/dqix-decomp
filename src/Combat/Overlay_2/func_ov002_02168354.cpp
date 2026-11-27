#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include <globaldefs.h>
#include "Resource/StringList.h"

#if defined(jpn)
#define func_02053c6c func_02054fe4
#endif

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

struct Struct_0201099c_3;
struct StringList_020727d8;

extern "C" unsigned char func_ov013_021847c4(void *arg0, int arg1);
extern "C" char *GetMessageWindow_020421a0();
extern "C" int func_ov002_021574d4(void *arg0, int arg1);
extern "C" void func_ov013_02184c8c(void *arg0, void *arg1);
extern "C" void *memset(void *arg0, int arg1, unsigned int arg2);
extern "C" unsigned char func_0209a678(char *arg0, void *arg1, unsigned short *arg2);
extern "C" void *func_0202ae18();
extern "C" int IsLocalWirelessOn_0202b7d8(int *wireless);
extern "C" void QueuePartyMemberStatusPacket_ov017_021c9e00(int memberIndex, int updateDeathState, int recalculateStats, int redrawPanels);
extern "C" void func_ov017_021ccc34(int arg0);
extern "C" void func_ov017_021cd0d8(int arg0, unsigned short *arg1, int arg2);
extern "C" void ResetStringList_020727d8(StringList_020727d8 *stringList);
extern "C" void LoadStringList_020728ac(void *stringList, void *allocator, void *scriptData, unsigned int scriptSize, int idFilter, int idFilterCount, int skippedStringCount);
extern "C" void InitNounTable_020e526c(void *nounTable);
extern "C" void LoadNounTable_020e5604(void *nounTable, void *allocator, void *fileData, unsigned int fileSize);
extern "C" void *func_02053c6c(unsigned char *gameObject);
extern "C" void CalculatePartyMemberStats_02083e28(void *memberData, int outStats);

extern "C" const char data_ov002_0216d300[];
extern "C" const char data_ov002_0216d315[];

// USA: func_ov002_02168354
extern "C" ARM void func_ov002_02168354(char *arg0) {
    unsigned int var0;
    *(unsigned int *) (arg0 + 0x247c) |= 4;
    if (func_ov013_021847c4(arg0 + 0xd70 + 0x1000, *(int *) (arg0 + 0x1ba0)) != 6) {
        return;
    }
    GameState *var1 = GameState::GetInstance();
    GetMessageWindow_020421a0();
    *(unsigned int *) (arg0 + 0x247c) &= ~4;
    if (*(unsigned char *) (arg0 + 0x2455) == 0) {
        char *var2 =
            (char *) GetPartyMemberBaseByIndex_0200ff1c(var1, func_ov002_021574d4(arg0, *(short *) (arg0 + 0x1c08)));
        if (var2 != 0) {
            func_ov013_02184c8c(arg0 + 0xd70 + 0x1000, var2);
        }
        if (var2 != 0) {
            ((SafeAllocator *) (arg0 + 0x64 + 0x800))->Reset();
            *(void **) (arg0 + 0x2450) = ((SafeAllocator *) (arg0 + 0x64 + 0x800))->Allocate(0x6e);
            memset(*(void **) (arg0 + 0x2450), 0, 0x6e);
            *(unsigned char *) (arg0 + 0x2455) =
                func_0209a678(arg0 + 0x3c + 0x2400, var2, *(unsigned short **) (arg0 + 0x2450));
            if (IsLocalWirelessOn_0202b7d8((int *) func_0202ae18())) {
                int var3 = func_ov002_021574d4(arg0, *(short *) (arg0 + 0x1c08));
                QueuePartyMemberStatusPacket_ov017_021c9e00(var3, 0, 0, 0);
                func_ov017_021ccc34(var3);
                func_ov017_021cd0d8(var3, *(unsigned short **) (arg0 + 0x2450), *(unsigned char *) (arg0 + 0x2455));
            }
            if (*(unsigned char *) (arg0 + 0x2455) == 0) {
                *(int *) (arg0 + 0x1bc0) += 1;
                return;
            }
            BackgroundLoader::AddLockGlobal();
            BackgroundLoader::FreeAllocationsGlobal();
            const char *var4 = ((StringList*)((Struct_0201099c_3 *) (arg0 + 0x20)))->GetString(0x65);
            void *var5        = ExtractFileFromGP2((const char*)(((StringList*)((Struct_0201099c_3 *) (arg0 + 0x20)))->GetString(0x64)), (const char*)(var4), (unsigned int*)(&var0));
            *(void **) (arg0 + 0x2448) = ((SafeAllocator *) (arg0 + 0x64 + 0x800))->Allocate(8);
            ResetStringList_020727d8(*(StringList_020727d8 **) (arg0 + 0x2448));
            if (var5 != 0) {
                LoadStringList_020728ac(*(void **) (arg0 + 0x2448), arg0 + 0x64 + 0x800, var5, var0, 0, 0, 0);
            }
            var5                       = ExtractFileFromGP2((const char*)(data_ov002_0216d300), (const char*)(data_ov002_0216d315), (unsigned int*)(&var0));
            *(void **) (arg0 + 0x244c) = ((SafeAllocator *) (arg0 + 0x64 + 0x800))->Allocate(0xc);
            InitNounTable_020e526c(*(void **) (arg0 + 0x244c));
            if (var5 != 0) {
                LoadNounTable_020e5604(*(void **) (arg0 + 0x244c), arg0 + 0x64 + 0x800, var5, var0);
            }
            BackgroundLoader::RemoveLockGlobal();
            CalculatePartyMemberStats_02083e28(func_02053c6c((unsigned char *) var2), 0);
        }
    }
    *(int *) (arg0 + 0x1bc0) += 1;
}
