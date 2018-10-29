#include "../util/listNode.h"

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL) return NULL; 
        ListNode* first = head;
        ListNode* second = head->next;
        while (second != NULL) {
            second = second->next;
            if (second == NULL) return NULL;
            if (second == first || second->next == first) {
                ListNode* detect = head;
                // 使用循环解法
                // 网上看到的推导式有些复杂，就不再实现了
                // 使用暴力解法
                // 探针从头进入，然后里面的环每次都执行一次循环判断探针是否进入环
                ListNode* guard = first;
                while (true) {
                    if (guard == detect) return detect;
                    while (first != guard) {
                        if (first == detect) return detect;
                        first = first->next;
                    }
                    detect = detect->next;
                    first = guard->next;
                }
            }
            first = first->next;
            second = second->next;
        }
        return NULL;
    }
};
