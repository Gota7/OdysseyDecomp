#pragma once

#include "al/Library/Yaml/ByamlIter.h"

namespace al {
    class PlacementInfo {
    public:
        PlacementInfo();

        void set(const ByamlIter &, const ByamlIter &);

        ByamlIter _0;
        ByamlIter _10;
    };
};