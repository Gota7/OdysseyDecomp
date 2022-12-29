#pragma once

#include <math/seadMatrix.h>
#include <math/seadVector.h>

namespace al {
    class HitSensor;
    class HitInfo;
    class LiveActor;
    class KCollisionServer;
    class TriangleFilterBase;
    class SphereHitResultBuffer;

    class CollisionParts {
    public:
        CollisionParts(void *pKCLFile, const void *pByamlFile);

        void calcInvMtxScale();
        LiveActor* getConnectedHost() const;
        void initParts(const sead::Matrix34f &);
        void resetAllMtx(const sead::Matrix34f &);
        void updateBoundingSphereRange(sead::Vector3f);
        void validateByUser();
        void invalidateByUser();
        void validateBySystem();
        void invalidateBySystem();
        void onJoinList();
        f32 makeEqualScale(sead::Matrix34f *);
        void resetAllMtxPrivate(const sead::Matrix34f &);
        void resetAllMtx();
        void updateBoundingSphereRange();
        void forceResetAllMtxAndSetUpdateMtxOneTime(const sead::Matrix34f &);
        void forceResetAllMtxAndSetUpdateMtxOneTime();
        void syncMtx(const sead::Matrix34f &);
        void syncMtx();
        void updateMtx();
        void updateScale();
        void updateBoundingSphereRangePrivate(f32);
        bool checkBoundingSphereRange(const sead::Vector3f &, f32);
        bool checkStrikePoint(HitInfo *, const sead::Vector3f &, const TriangleFilterBase *) const;
        bool checkStrikeSphere(SphereHitResultBuffer *, const sead::Vector3f &, f32, bool, const sead::Vector3f &, const TriangleFilterBase *) const;
        bool checkStrikeSphereCore(SphereHitResultBuffer *, const sead::Vector3f &, const sead::Vector3f &, const sead::Vector3f &, f32, const TriangleFilterBase *) const;

        u64* _0;
        u64* _8;
        CollisionParts* _10;
        u64* _18;
        u64* _20;
        u64* _28;
        sead::Matrix34f _30;
        sead::Vector3f _60;
        f32 _6C;
        f32 _70;
        sead::Matrix34f _88;
        sead::Vector3f _A4;
        f32 _B0;
        f32 _B4;
        sead::Matrix34f _B8;
        sead::Matrix34f _E8;
        sead::Vector3f _118;
        f32 _124;
        f32 _128;
        int mPriority;                      // _12C
        KCollisionServer* mColServer;       // _130
        HitSensor* mHostSensor;             // _138
        const char* mOptionalPurpose;       // _140
        const char* mSpecialPurpose;        // _148
        sead::Vector3f _150;
        f32 _15C;
        f32 _160;
        f32 _164;
        u16 _168;
        u8 _16A;
        u8 _16B;
        u8 _16C;
    };
};