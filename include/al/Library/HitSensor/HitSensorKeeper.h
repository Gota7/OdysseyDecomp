#pragma once

#include <nn/types.h>
#include <sead/sead.h>

namespace al {
    class HitSensor;
    class LiveActor;

    class HitSensorKeeper {
    public:
        HitSensorKeeper(int);

        HitSensor* addSensor(LiveActor *, const char *, u32, f32, u16, const Vector3f *, const Matrix34f *, const Vector3f &);
        void update();
        int getSensorNum() const;
        HitSensor* getSensor(int) const;
        void attackSensor();
        void clear();
        void validate();
        void invalidate();
        void validateBySystem();
        void invalidateBySystem();
        HitSensor* getSensor(const char *) const;

        int mMaxSensorNum;          // _0
        int mCurSensorNum;          // _4
        HitSensor** mSensors;       // _8
    };
};
