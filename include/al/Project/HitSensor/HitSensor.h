#pragma once

#include <nn/types.h>
#include <sead/sead.h>

class HitSensor {
public:

    u16 _1C;
    u16 _1E;

    bool _38;
    bool _39;
    Vector3f* mFollowPosVec;        // _48
    Matrix34f* mFollowPosMtx;       // _50
};