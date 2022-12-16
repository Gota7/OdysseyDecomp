#pragma once

#include <nn/types.h>

namespace sead {
    namespace hostio {
        struct CurveDataInfo {
            u8 _0;
            u8 _1;
            u8 _2;
            u8 _3;
        };

        template<typename T>
        static T curveLinear_(T, const CurveDataInfo *, const T *);
        template<typename T>
        static T curveHermit_(T, const CurveDataInfo *, const T *);
        template<typename T>
        static T curveStep_(T, const CurveDataInfo *, const T *);
        template<typename T>
        static T curveSin_(T, const CurveDataInfo *, const T *);
        template<typename T>
        static T curveCos_(T, const CurveDataInfo *, const T *);
        template<typename T>
        static T curveSinPow2_(T, const CurveDataInfo *, const T *);
        template<typename T>
        static T curveLinear2D_(T, const CurveDataInfo *, const T *);
        template<typename T>
        static T curveHermit2D_(T, const CurveDataInfo *, const T *);
        template<typename T>
        static T curveStep2D_(T, const CurveDataInfo *, const T *);
        template<typename T>
        static T curveNonuniformSpline_(T, const CurveDataInfo *, const T *);
        template<typename T>
        static T curveHermit2DSmooth_(T, const CurveDataInfo *, const T *);
    };

    class LifeCheckable {

    };

    class PropertyEventListener : public LifeCheckable {

    };

    class NodeEventListener : public PropertyEventListener {

    };

    class Reflexible : public NodeEventListener {

    };

    class Node : public Reflexible {
    public:
        virtual u32 getNodeClassType() const {
            return 1;
        }
    };
};