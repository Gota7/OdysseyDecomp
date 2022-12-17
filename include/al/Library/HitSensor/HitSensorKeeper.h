#pragma once

#include <nn/types.h>

namespace al {
    class HitSensor;

    class HitSensorKeeper {
    public:
        HitSensorKeeper(int);

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

        int mMaxSensorNum;      // _0
        int mCurSensorNum;      // _4
    };
};
