#include "../util/listNode.h"

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL) return false;
        // 使用双指针
        ListNode* first = head;
        ListNode* second = head->next;
        while (second != NULL) {
            // 判断条件
            second = second->next;
            if (second == NULL) return false;
            if (second == first || second->next == first) return true;
            // first晚走，加快匹配速度
            first = first->next;
            second = second->next;
        }
        return false;
    }
};
