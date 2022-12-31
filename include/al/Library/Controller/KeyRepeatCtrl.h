#pragma once

#include <basis/seadTypes.h>

namespace al {
    class KeyRepeatCtrl {
    public:
        KeyRepeatCtrl();
        void init(s32 maxIndex, s32 frameTime);
        void update(bool unk, bool unk2);
        void reset();
        bool isUp() const;
        bool isDown() const;

        s32 mRepeatInterval;    // _0
        s32 mRepeatTime;        // _4
        s32 mDownTime;          // _8
        s32 mUpTime;            // _C
        bool mRepeat;           // _10
    };

}    // namespace al