#pragma once

namespace sead {
    template<typename T>
    class Matrix34 {
    public:
        union
        {
            T m[3][4];
            T a[12];
        };
    };
};

typedef sead::Matrix34<float> Matrix34f;