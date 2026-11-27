#include <globaldefs.h>

struct SoundFileEntry_020bd8ac_2 { int unknown_0_; int unknown_4_; int loadedAddress_8_; int unknown_c_; };
struct SoundFileTable_020bd8ac_3 { int unknown_0_; int unknown_4_; int fileCount_8_; struct SoundFileEntry_020bd8ac_2 entries_c_[1]; };
struct SoundArchive_020bd8ac { char unknown_0_[0x84]; struct SoundFileTable_020bd8ac_3* pFileTable_84_; };
extern struct SoundArchive_020bd8ac* gCurrentSoundArchive_02110370;

// USA: GetLoadedSoundFile_020bd8ac
extern "C" ARM int GetLoadedSoundFile_020bd8ac(unsigned int fileId) {
    struct SoundFileTable_020bd8ac_3* fileTable = gCurrentSoundArchive_02110370->pFileTable_84_;
    if (fileId >= (unsigned int)fileTable->fileCount_8_) return 0;
    return fileTable->entries_c_[fileId].loadedAddress_8_;
}
