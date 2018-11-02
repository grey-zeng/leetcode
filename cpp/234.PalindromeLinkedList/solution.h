#include "../util/listNode.h"

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) return true; 
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* dummy = NULL;
        while (fast && fast->next) {
            fast = fast->next->next;
            ListNode* slowNext = slow->next;
            slow->next = dummy;
            dummy = slow;
            slow = slowNext;
        }
        // slow长1
        if (fast) {
            slow = slow->next;
        }
        // 比对head和dummy
        while (slow && dummy) {
            if (slow->val != dummy->val) return false;
            slow = slow->next;
            dummy = dummy->next;
        }
        return true;
    }
};
