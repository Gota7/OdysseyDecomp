#pragma once

#include "seadSafeString.h"

namespace sead {
    class INamable {
    public:
        INamable() = default;

        explicit INamable(const SafeString &rName) : mName(rName) {
            
        }

        SafeString mName;
    };
};