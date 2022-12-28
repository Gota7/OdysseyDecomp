#include "Placement/PlacementInfo.h"

namespace al {
    PlacementInfo::PlacementInfo() = default;

    void PlacementInfo::set(const ByamlIter &a1, const ByamlIter &a2) {
        _0 = a1;
        _10 = a2;
    }
};