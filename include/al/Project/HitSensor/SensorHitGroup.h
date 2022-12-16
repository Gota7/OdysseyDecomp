#pragma once

namespace al {
    class HitSensor;

    class SensorHitGroup {
    public:

        HitSensor* getSensor(int) const;

        int mMaxSensorCount;        // _0
        int mCurrentSensorCount;    // _4
        HitSensor** mHitSensors;    // _8
    };
};