#include "Filesystem/FSInnerDefs.h"
#include "System/Memory.h"
#include <globaldefs.h>

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020d084c
extern "C" ARM bool TransferScratchBuffer(Struct_02111f20* input)
{
    CardReadManager* ptr = &data_021118e0;
    unsigned int romCurrentBlockStart = ptr->cartridgeReadOffset & 0xfffffe00;
    if (romCurrentBlockStart == (unsigned int)input->alignedWrite)
    {
        unsigned int offsetFromAlignment = ptr->cartridgeReadOffset
            - romCurrentBlockStart;
        unsigned int usefulLength = 0x200 - offsetFromAlignment;
        if (usefulLength > ptr->writeLength)
            usefulLength = ptr->writeLength;

        VectorizedInvertedMemcpy(input->scratchBuffer + offsetFromAlignment,
            ptr->writeDst, usefulLength);
        ptr->cartridgeReadOffset += usefulLength;
        ptr->writeDst += usefulLength;
        ptr->writeLength -= usefulLength;
    }
    return ptr->writeLength != 0;
}
