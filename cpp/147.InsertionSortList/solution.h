#include "../util/listNode.h"

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* res = new ListNode(0);
        res->next = head;
        ListNode* pre = res, *cur = head;
        while (cur) {
            if (cur->next && (cur->next->val < cur->val)) {
                while ((pre->next) && (pre->next->val < cur->next->val)) {
                    pre = pre -> next;
                }
                ListNode* temp = pre->next;
                pre->next = cur->next;
                cur->next = cur->next->next;
                pre->next->next = temp;
                // 复原
                pre = res;
            }
            else {
                cur = cur->next;
            }
        }
        return res->next;
    }
};
