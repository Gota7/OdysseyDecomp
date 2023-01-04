#include "Base/Base.h"

namespace al {
    const char *getBaseName(const char *str) {
        auto s = strchr(str, 47);
        if (s)
            return s + 1;
        return str;
    }
}    // namespace al