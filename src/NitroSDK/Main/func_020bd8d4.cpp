#include <globaldefs.h>

struct Struct_020bd8d4_2 { int unknown_0_; int unknown_4_; int loadedAddress_8_; int unknown_c_; };
struct Struct_020bd8d4_3 { int unknown_0_; int unknown_4_; int unknown_8_; struct Struct_020bd8d4_2 entries_c_[1]; };
struct Struct_020bd8d4 { char unknown_0_[0x84]; struct Struct_020bd8d4_3* pFileTable_84_; };
extern struct Struct_020bd8d4* gCurrentSoundArchive_02110370;

// USA: SetLoadedSoundFile_020bd8d4
extern "C" ARM void SetLoadedSoundFile_020bd8d4(unsigned int fileId, int loadedAddress) {
    gCurrentSoundArchive_02110370->pFileTable_84_->entries_c_[fileId].loadedAddress_8_ = loadedAddress;
}
