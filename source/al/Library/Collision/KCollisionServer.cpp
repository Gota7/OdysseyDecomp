#include "al/Library/Collision/KCollisionServer.h"

namespace al {
    u32 KCollisionServer::getTriangleNum(const KCPrismHeader *pHeader) const {
        return ((u64)pHeader->mSection4Offs - (u64)pHeader->mSection3Offs) / 0x14;
    }
};