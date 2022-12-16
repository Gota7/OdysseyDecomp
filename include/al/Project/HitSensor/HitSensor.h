#pragma once

#include <nn/types.h>
#include <sead/sead.h>

namespace al {
    class HitSensor {
    public:
        u8 _0[0x1C];
        u16 _1C;
        u16 _1E;
        u8 _20[0x38-0x20];
        bool _38;
        bool _39;
        Vector3f* mFollowPosVec;        // _48
        Matrix34f* mFollowPosMtx;       // _50
    };
};