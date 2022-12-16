#pragma once

#include <nn/types.h>

namespace sead {
    class Base64 {
    public:
        static void encode(char *, const void *, u32, bool);
        static bool decode(void *, u32, const char *, u32, u32 *);
    };
};