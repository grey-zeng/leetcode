#include "../util/listNode.h"
#include <iostream>

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        ListNode* output = new ListNode(0);
        ListNode* prev = output;
        while (current != NULL) {
            // 如果有重复就跳过
            int currentVal = current->val;
            if (current->next != NULL && current->next->val == currentVal) {
                while (current != NULL && current->val == currentVal) current = current->next;
                continue; 
            }
            prev->next = current;
            prev = prev->next;
            current = current->next;
        }
        // 结尾需要断尾
        prev->next = NULL;
        return output->next;
    }
};
