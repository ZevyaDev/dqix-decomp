#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "Resource/PAC.h"

struct Struct_02013fb4;
struct StringList_020727d8;
struct PacEntry_02020cb8_4;

extern "C" void ResetStringList_020727d8(StringList_020727d8* stringList);
extern "C" void LoadStringList_020728ac(void* stringList, void* allocator, void* scriptData, int scriptSize, int idFilter, int idFilterCount, int skippedStringCount);
struct PacEntry_02020aec;
extern "C" char* GetMessageWindow_020421a0();
extern "C" void func_0207f524(void* arg0, void* arg1, Struct_02013fb4* arg2, int arg3);
struct Struct_0207ed1c;
extern "C" void func_0207ef74(Struct_0207ed1c*, SafeAllocator*, Struct_02013fb4*, int);

struct MenuLayout_0207f9f4 {
    void* pStringList_0_;
    char textEntries_4_[8];
    char windowEntries_c_[8];
    SafeAllocator* pAllocator_14_;
    int unknown_18_;
    int pacLoadTaskId_1c_;
#ifndef jpn
    int loadTaskIds_20_[3];
#endif
};

// USA: UpdateMenuLayoutLoad_0207f9f4
extern "C" ARM int UpdateMenuLayoutLoad_0207f9f4(MenuLayout_0207f9f4* menuLayout) {
    if (menuLayout->pacLoadTaskId_1c_ < 0) {
#ifdef jpn
        return -1;
#else
        int* taskIds = menuLayout->loadTaskIds_20_;
        if (taskIds[0] < 0) {
            if (taskIds[1] < 0) {
                if (taskIds[2] < 0) {
                    return -1;
                }
            }
        }

        BackgroundLoader* backgroundLoader = BackgroundLoader::GetInstance();
        int isFinished = 1;
        for (int i = 0; i < 3; i++) {
            if (backgroundLoader->GetTaskStatus(taskIds[i]) == 0) {
                isFinished = 0;
            }
        }

        if (isFinished != 0) {
            void* fileData;
            unsigned int fileSize;
            backgroundLoader->GetLoadedFileByID(taskIds[0], &fileData, &fileSize);
            menuLayout->pStringList_0_ = menuLayout->pAllocator_14_->Allocate(8);
            ResetStringList_020727d8((StringList_020727d8*)menuLayout->pStringList_0_);
            if (fileData != 0) {
                LoadStringList_020728ac(menuLayout->pStringList_0_, menuLayout->pAllocator_14_, fileData, fileSize, 0, 0, 0);
            }
            backgroundLoader->GetLoadedFileByID(taskIds[1], &fileData, &fileSize);
            if (fileData != 0) {
                func_0207f524(menuLayout->textEntries_4_, menuLayout->pAllocator_14_, (Struct_02013fb4*)fileData, fileSize);
            }
            backgroundLoader->GetLoadedFileByID(taskIds[2], &fileData, &fileSize);
            if (fileData != 0) {
                func_0207ef74((Struct_0207ed1c*)menuLayout->windowEntries_c_, (SafeAllocator*)menuLayout->pAllocator_14_, (Struct_02013fb4*)fileData, fileSize);
            }

            for (int i = 0; i < 3; i++) {
                backgroundLoader->RemoveTask(*taskIds);
                *taskIds = -1;
                taskIds++;
            }
    #ifdef jpn
        menuLayout->field18 = *(int*)(GetMessageWindow_020421a0() + 0x28);
#else
        menuLayout->unknown_18_ = *(int*)(GetMessageWindow_020421a0() + 0x5c);
#endif
            return 0;
        }
        return 1;
#endif
    }

    BackgroundLoader* backgroundLoader = BackgroundLoader::GetInstance();
    if (backgroundLoader->GetTaskStatus(menuLayout->pacLoadTaskId_1c_) != 0) {
        void* innerName;
        void* fileData;
        unsigned int fileSize;
        backgroundLoader->GetLoadedFileByID(menuLayout->pacLoadTaskId_1c_, &fileData, &fileSize);
        int numFiles = GetNumFilesInPAC((const void*)((PacEntry_02020cb8_4*)fileData));
        void* innerFiles[3];
        int innerLengths[3];
        for (int i = 0; i < numFiles; i++) {
            innerFiles[i] = GetFileInPACByIndex((void*)((PacEntry_02020aec*)fileData), i, (const char**)(&innerName), (unsigned int*)(&innerLengths[i]));
        }
        menuLayout->pStringList_0_ = menuLayout->pAllocator_14_->Allocate(8);
        ResetStringList_020727d8((StringList_020727d8*)menuLayout->pStringList_0_);
        LoadStringList_020728ac(menuLayout->pStringList_0_, menuLayout->pAllocator_14_, innerFiles[0], innerLengths[0], 0, 0, 0);
        func_0207f524(menuLayout->textEntries_4_, menuLayout->pAllocator_14_, (Struct_02013fb4*)innerFiles[1], innerLengths[1]);
        func_0207ef74((Struct_0207ed1c*)menuLayout->windowEntries_c_, (SafeAllocator*)menuLayout->pAllocator_14_, (Struct_02013fb4*)innerFiles[2], innerLengths[2]);
        backgroundLoader->RemoveTask(menuLayout->pacLoadTaskId_1c_);
        menuLayout->pacLoadTaskId_1c_ = -1;
#ifdef jpn
        menuLayout->unknown_18_ = *(int*)(GetMessageWindow_020421a0() + 0x28);
#else
        menuLayout->unknown_18_ = *(int*)(GetMessageWindow_020421a0() + 0x5c);
#endif
        return 0;
    }
    return 1;
}
