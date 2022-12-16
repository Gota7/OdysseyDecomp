#include "al/Project/HitSensor/SensorHitGroup.h"

namespace al {
    HitSensor* SensorHitGroup::getSensor(int idx) const {
        return mHitSensors[idx];
    }
};