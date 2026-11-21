#ifndef COMBAT_NODE_LOOKUP_H
#define COMBAT_NODE_LOOKUP_H

struct NPCPlacement_0206db20 {
    unsigned char npcId_0_;
    char unknown_1_[0x67];
    NPCPlacement_0206db20 *pNext_68_;
};

extern "C" NPCPlacement_0206db20 *FindNPCPlacement_0206db20(void *placementList, int npcId);
extern "C" void func_0206dd68(void *arg0, int arg1);

#endif
