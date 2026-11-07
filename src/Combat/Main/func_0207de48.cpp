#include <globaldefs.h>

extern "C" void func_020bb700(int* arg0);
extern "C" void func_020bb910(int* arg0);
extern "C" int func_020bb588(unsigned int arg0, int arg1, int arg2);
extern "C" int func_020bb7cc(unsigned int arg0, int arg1, int arg2);

struct TextureImageVRAMState_0207de48 { unsigned int unknown_0_[10]; };
struct TexturePaletteVRAMState_0207de48_2 { int unknown_0_[2]; };
struct TextureVRAMArea_0207de48_3 {
    TextureImageVRAMState_0207de48 baseImageState_0_;
    TextureImageVRAMState_0207de48 savedImageState_28_;
    int imageAllocation_50_;
    int imageSize_54_;
    TexturePaletteVRAMState_0207de48_2 basePaletteState_58_;
    TexturePaletteVRAMState_0207de48_2 savedPaletteState_60_;
    int paletteAllocation_68_;
    int paletteSize_6c_;
};

// USA: InitTextureVRAMArea_0207de48
extern "C" ARM void InitTextureVRAMArea_0207de48(void* area, int imageSize, int paletteSize) {
    struct TextureVRAMArea_0207de48_3* textureVRAMArea = (struct TextureVRAMArea_0207de48_3*)area;
    func_020bb700((int*)&textureVRAMArea->baseImageState_0_);
    textureVRAMArea->savedImageState_28_ = textureVRAMArea->baseImageState_0_;
    func_020bb910(textureVRAMArea->basePaletteState_58_.unknown_0_);
    int remainingImageSize = imageSize;
    textureVRAMArea->savedPaletteState_60_ = textureVRAMArea->basePaletteState_58_;
    textureVRAMArea->imageAllocation_50_ = 0;

    while (remainingImageSize > 0) {
        if (remainingImageSize > 0x20000) {
            textureVRAMArea->imageAllocation_50_ = func_020bb588(0x20000, 0, 0);
            remainingImageSize -= 0x20000;
        } else {
            textureVRAMArea->imageAllocation_50_ = func_020bb588(remainingImageSize, 0, 0);
            remainingImageSize = 0;
        }
    }
    if (imageSize != 0 && textureVRAMArea->imageAllocation_50_ == 0) imageSize = 0;

    textureVRAMArea->paletteAllocation_68_ = 0;
    if (paletteSize != 0) {
        textureVRAMArea->paletteAllocation_68_ = func_020bb7cc(paletteSize, 0, 0);
    }
    if (paletteSize != 0 && textureVRAMArea->paletteAllocation_68_ == 0) paletteSize = 0;

    textureVRAMArea->imageSize_54_ = imageSize;
    textureVRAMArea->paletteSize_6c_ = paletteSize;
}
