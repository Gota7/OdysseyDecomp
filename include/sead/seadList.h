#pragma once

namespace sead {
    class ListNode {
    public:

        void insertBack_(ListNode *);
        void insertFront_(ListNode *);
        void erase_();

        ListNode* mPrev;    // _0
        ListNode* mNext;    // _8
    };
    
    class ListImpl {
    public:

        void popBack();
        void popFront();
        long nth(int) const;
        int indexOf(const ListNode *) const;
        void clear();
        void swap(ListNode *, ListNode *);
        void moveAfter(ListNode *, ListNode *);
        void moveBefore(ListNode *, ListNode *);

        void reverse();

        ListNode mStartEnd; // _0
        int mCount;         // _10
    };
};