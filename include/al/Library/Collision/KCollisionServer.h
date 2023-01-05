#pragma once

#include "al/Library/Yaml/ByamlIter.h"
#include <container/seadPtrArray.h>
#include <math/seadVector.h>

namespace al {

    struct KCHeader {
        u32 mFileIdentifier;        // _0
        u32 mOctreeOffs;            // _4
        u32 mModelListOffs;         // _8
        u32 mModelCount;            // _C
        sead::Vector3f mMinCoord;   // _10
        sead::Vector3f mMaxCoord;   // _1C
        u32 mCoordShift;            // _28
        u32 mYShift;                // _2C
        u32 mZShift;                // _30
        u32 _34;
    };

    struct KCPrismHeader {
        u32 mSection1Offs;          // _0
        u32 mSection2Offs;          // _4
        u32 mSection3Offs;          // _8
        u32 mSection4Offs;          // _C
        f32 mThickness;             // _10
        sead::Vector3f mSpatGrid;   // _14
        u32 mXMask;                 // _20
        u32 mYMask;                 // _24
        u32 mZMask;                 // _28
        u32 mCoordShift;            // _2C
        u32 mYShift;                // _30
        u32 mZShift;                // _34
        f32 mHitBoxRadiusCap;       // _38
    };

    struct KCPrismData {
        f32 mLength;        // _0
        u16 mPosIdx;        // _4
        u16 mDirIdx;        // _6
        u16 mNormAIdx;      // _8
        u16 mNormBIdx;      // _A
        u16 mNormCIdx;      // _C
        u16 mColFlags;      // _E
        u32 mGlobalTriIdx;   // _10
    };

    class KCollisionServer {
    public:
        KCollisionServer();

        void initKCollisionServer(void *, const void *);
        void setData(void *);
        void* getInnerKcl(int) const;
        u32 getNumInnerKcl() const;

        void objectSpaceToAreaOffsetSpace(sead::Vector3<u32> *, const sead::Vector3f &, const KCPrismHeader *) const;
        void areaOffsetSpaceToObjectSpace(sead::Vector3f *, const sead::Vector3<u32> &, const KCPrismHeader *) const;

        void getMinMax(sead::Vector3f *, sead::Vector3f *) const;
        void getAreaSpaceSize(sead::Vector3f *, const KCPrismHeader *) const;
        void getAreaSpaceSize(s32 *, s32 *, s32 *, const KCPrismHeader *) const;
        void getAreaSpaceSize(sead::Vector3<u32> *, const KCPrismHeader *) const;

        u32 calcAreaBlockOffset(const sead::Vector3<u32> &, const KCPrismHeader *) const;

        u32 getTriangleNum(const KCPrismHeader *) const;
        KCPrismData* getPrismData(u32, const KCPrismHeader *) const;

        sead::Vector3f& getFaceNormal(const KCPrismData *, const KCPrismHeader *) const;
        sead::Vector3f& getEdgeNormal1(const KCPrismData *, const KCPrismHeader *) const;
        sead::Vector3f& getEdgeNormal2(const KCPrismData *, const KCPrismHeader *) const;
        sead::Vector3f& getEdgeNormal3(const KCPrismData *, const KCPrismHeader *) const;

        sead::Vector3f& getNormal(u32, const KCPrismHeader *) const;

        sead::Vector3f& getVertexData(u32, const KCPrismHeader *) const;

        inline KCHeader* getHeader() const {
            return reinterpret_cast<KCHeader*>(mKCLData);
        }

        sead::PtrArray<KCPrismData*> mPrismArray;   // _0
        void* mKCLData;                             // _10
        al::ByamlIter* mYamlIter;                   // _18
        u64 mTrisOffset;                            // _20
        u64 mOctreeOffset;                          // _28
        u32 mCoordShift;                            // _30
        u32 mYShift;                                // _34
        u32 mZShift;                                // _38
        u32 _3C;
        u32 _40;
        u32 _44;
        f32 mFarthestVertDist;                      // _48

    };
};