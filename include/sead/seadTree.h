#pragma once

#include <nn/types.h>
#include "seadSafeString.h"

namespace sead {
    template<typename T>
    class TreeMapNode {
    public:
        virtual ~TreeMapNode() {

        }

        virtual void erase_() = 0;

        TreeMapNode* mLeft;     // _0
        TreeMapNode* mRight;    // _8
        uintptr_t mPtr;         // _10
        T mKey;                 // _18
    };

    template<size_t MaxKeyLength, typename Value>
    class StrTreeMap {
    public:
        class Node : public TreeMapNode<SafeString> {
            Value mValue;
            StrTreeMap* mMap;
            char mKeyData[MaxKeyLength + 1];
        };

        Value* insert(const SafeString &, Heap *, s32);
    };
};
