#include "al/Library/Collision/KCollisionServer.h"

namespace al {
    u32 KCollisionServer::getTriangleNum(const KCPrismHeader *pHeader) const {
        return ((u64)pHeader->mSection4Offs - (u64)pHeader->mSection3Offs) / 0x14;
    }

    void KCollisionServer::getMinMax(sead::Vector3f *pOutMin, sead::Vector3f *pOutMax) const {
        KCHeader* hdr = getHeader();
        pOutMin->set(hdr->mMinCoord.x, hdr->mMinCoord.y, hdr->mMinCoord.z);
        hdr = getHeader();
        pOutMax->set(hdr->mMaxCoord.x, hdr->mMaxCoord.y, hdr->mMaxCoord.z);
    }
};