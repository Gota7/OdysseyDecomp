#include "al/Library/Collision/KCollisionServer.h"
#include <cstring>

namespace al {

    KCollisionServer::KCollisionServer() {
        memset(this, 0, 0x48);
        mFarthestVertDist = 1.0f;
    }

    void KCollisionServer::initKCollisionServer(void *pKCLData, const void *pYamlData) {
        setData(pKCLData);

        if (pYamlData != nullptr) {
            mYamlIter = new ByamlIter((const u8*)pYamlData);
        }
    }

    u32 KCollisionServer::getNumInnerKcl() const {
        return ((KCHeader*)mKCLData)->mModelCount;
    }

    u32 KCollisionServer::getTriangleNum(const KCPrismHeader *pHeader) const {
        return ((u64)pHeader->mSection4Offs - (u64)pHeader->mSection3Offs) / 0x14;
    }

    void KCollisionServer::getMinMax(sead::Vector3f *pOutMin, sead::Vector3f *pOutMax) const {
        KCHeader* hdr = getHeader();
        pOutMin->set(hdr->mMinCoord.x, hdr->mMinCoord.y, hdr->mMinCoord.z);
        hdr = getHeader();
        pOutMax->set(hdr->mMaxCoord.x, hdr->mMaxCoord.y, hdr->mMaxCoord.z);
    }

    void KCollisionServer::getAreaSpaceSize(sead::Vector3f *pOut, const KCPrismHeader *pHeader) const {
        auto x = (s32)~pHeader->mXMask;
        auto y = (s32)~pHeader->mYMask;
        auto z = (s32)~pHeader->mZMask;
        pOut->set(x, y, z);
    }

    void KCollisionServer::getAreaSpaceSize(int *pX, int *pY, int *pZ, const KCPrismHeader *pHeader) const {
        *pX = ~pHeader->mXMask;
        *pY = ~pHeader->mYMask;
        *pZ = ~pHeader->mZMask;
    }

    void KCollisionServer::getAreaSpaceSize(sead::Vector3<u32> *pOut, const KCPrismHeader *pHeader) const {
        pOut->x = ~pHeader->mXMask;
        pOut->y = ~pHeader->mYMask;
        pOut->z = ~pHeader->mZMask;
    }

    sead::Vector3f& KCollisionServer::getFaceNormal(const KCPrismData *pPrism, const KCPrismHeader *pHeader) const {
        s32 normalIdx = pPrism->mDirIdx;
        return *(reinterpret_cast<sead::Vector3f*>((s64)pHeader + (s64)pHeader->mSection2Offs + normalIdx * (s32)sizeof(sead::Vector3f)));
    }

    sead::Vector3f& KCollisionServer::getEdgeNormal1(const KCPrismData *pPrism, const KCPrismHeader *pHeader) const {
        s32 normalIdx = pPrism->mNormAIdx;
        return *(reinterpret_cast<sead::Vector3f*>((s64)pHeader + (s64)pHeader->mSection2Offs + normalIdx * (s32)sizeof(sead::Vector3f)));
    }

    sead::Vector3f& KCollisionServer::getEdgeNormal2(const KCPrismData *pPrism, const KCPrismHeader *pHeader) const {
        s32 normalIdx = pPrism->mNormBIdx;
        return *(reinterpret_cast<sead::Vector3f*>((s64)pHeader + (s64)pHeader->mSection2Offs + normalIdx * (s32)sizeof(sead::Vector3f)));
    }

    sead::Vector3f& KCollisionServer::getEdgeNormal3(const KCPrismData *pPrism, const KCPrismHeader *pHeader) const {
        s32 normalIdx = pPrism->mNormCIdx;
        return *(reinterpret_cast<sead::Vector3f*>((s64)pHeader + (s64)pHeader->mSection2Offs + normalIdx * (s32)sizeof(sead::Vector3f)));
    }

    sead::Vector3f& KCollisionServer::getNormal(u32 idx, const KCPrismHeader *pHeader) const {
        return *(reinterpret_cast<sead::Vector3f*>((s64)pHeader + (s64)pHeader->mSection2Offs) + (s32)idx);
    }

    sead::Vector3f& KCollisionServer::getVertexData(u32 idx, const KCPrismHeader *pHeader) const {
        return *(reinterpret_cast<sead::Vector3f*>((s64)pHeader + (s64)pHeader->mSection1Offs) + (s32)idx);
    }

};