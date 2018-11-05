#include "../util/listNode.h"

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* cur1 = headA, *cur2 = headB;
        // 交换之后将会和
        while (cur1 != cur2) {
            cur1 = cur1?cur1->next:headB;
            cur2 = cur2?cur2->next:headA;
        }
        return cur1;
    }
};
