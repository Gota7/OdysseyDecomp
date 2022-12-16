#pragma once

namespace sead {
    class TreeNode {
    public:
        TreeNode();

        TreeNode* mParent;  // _0
        TreeNode* mChild;   // _8
        TreeNode* mNext;    // _10
        TreeNode* mPrev;    // _18
    };

    template<typename T>
    class TTreeNode : public TreeNode {
    public:
        TTreeNode() = default;

        T mData;        // _20
    };
};