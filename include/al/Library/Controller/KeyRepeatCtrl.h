#pragma once

namespace al {
    class KeyRepeatCtrl {
        public:
        KeyRepeatCtrl();
        void init(int maxIndex, int frameTime);
        void update(bool unk, bool unk2);
        void reset();
        bool isUp() const;
        bool isDown() const;

        int mRepeatInterval;
        int mRepeatTime;
        int mDownTime;
        int mUpTime;
        bool mRepeat;
    };

}    // namespace al