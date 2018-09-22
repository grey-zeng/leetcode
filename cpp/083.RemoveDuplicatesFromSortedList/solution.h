#include "../util/listNode.h"

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* current = head->next;
        ListNode* prev = head;
        while (current != NULL) {
            if (current->val != prev->val) {
                prev->next = current;
                prev = prev->next;
            }
            current = current->next;
        }
        prev->next = NULL;
        return head;
    }
};
