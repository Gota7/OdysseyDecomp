#pragma once

#include "seadList.h"

namespace sead {
    class Heap;

    class IDisposer {
    public:
        enum HeapNullOption {
            AlwaysUseHeap               = 0,
            UseSpecifiedHeap            = 1,
            DoNotAPppendDisposer        = 2,
            UseSpecifiedOrCurrentHeap   = 3
        };

        IDisposer();
        IDisposer(Heap *, HeapNullOption);

        virtual ~IDisposer();

        Heap* mDisposerHeap;    // _8
        ListNode mNode;         // _10
    };
};