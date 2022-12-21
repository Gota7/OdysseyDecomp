#include "al/Library/HitSensor/HitSensorKeeper.h"
#include "al/Project/HitSensor/HitSensor.h"

namespace al {
    HitSensorKeeper::HitSensorKeeper(int maxCount) {
        mMaxSensorNum = maxCount;
        mCurSensorNum = 0;
        mSensors = new HitSensor*[maxCount];
            
        for (int i = 0; i < mMaxSensorNum; i++) {
            mSensors[i] = nullptr;
        }
    }

    void HitSensorKeeper::update() {
        for (int i = 0; i < mMaxSensorNum; i++) {
            mSensors[i]->update();
        }
    }

    int HitSensorKeeper::getSensorNum() const {
        return mCurSensorNum;
    }

    HitSensor* HitSensorKeeper::getSensor(int idx) const {
        return mSensors[idx];
    }
};