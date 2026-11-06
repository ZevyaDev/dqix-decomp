#pragma once

struct FontLoader_0208cb08 {
    void* unknown_0_;
    void* unknown_4_;
    char unknown_8_[4];
    int unknown_c_;
    int unknown_10_;
    int loadTaskIds_14_[8];
    int requestedFontSetId_34_;
    int nextRequestedFontSetId_38_;
    int unknown_3c_;
    int unknown_40_;
    char unknown_44_[16];
    unsigned char unknown_54_;
    unsigned char unknown_55_;
    unsigned char loadState_56_;
    unsigned char unknown_57_;
    unsigned char unknown_58_;
    char unknown_59_[8];
    unsigned char unknown_61_;
    unsigned char unknown_62_;
    unsigned char unknown_63_;
    unsigned char unknown_64_;
};

extern "C" FontLoader_0208cb08* GetFontLoader_02094a00(void);
extern "C" void CancelFontLoad_02094ab0(FontLoader_0208cb08* loader);
extern "C" void func_02094b2c(FontLoader_0208cb08* arg0, int arg1, const char* arg2, unsigned char arg3,
                           unsigned char arg4);
extern "C" void RequestSingleFontLoad_02094b30(FontLoader_0208cb08* loader, int fontSetId, int isPackArchive);
extern "C" void RequestFontLoad_02094b34(FontLoader_0208cb08* loader, int fontSetId, int nextFontSetId, unsigned char isPackArchive,
                           unsigned char isNextPackArchive);
extern "C" void func_02094b38(FontLoader_0208cb08* arg0, int arg1);
extern "C" void func_02094b3c(FontLoader_0208cb08* arg0, int arg1);
extern "C" void ClearLoadedFontSets_02094b40(FontLoader_0208cb08* loader);
extern "C" void* func_02094b44(FontLoader_0208cb08* arg0, int arg1);
extern "C" int UpdateFontLoad_02094b4c(FontLoader_0208cb08* loader);
extern "C" int func_02094b54(FontLoader_0208cb08* arg0, int arg1, char* arg2, int arg3);
