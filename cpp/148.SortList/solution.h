#include "../util/listNode.h"

class Solution {
public:
    // 还是递归生成比较简单些
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* head2 = slow->next;
        slow->next = NULL;
        return merge(sortList(head), sortList(head2));
    }
private:
    ListNode* merge(ListNode* prev, ListNode* next) {
        ListNode* res = new ListNode(0);
        ListNode* pRes = res;
        while (prev || next) {
            while (prev && (!next || prev->val <= next->val)) {
                pRes->next = prev;
                pRes = pRes->next;
                prev = prev->next;
            }
            while (next && (!prev || next->val <= prev->val)) {
                pRes->next = next;
                pRes = pRes->next;
                next = next->next;
            }
        }
        return res->next;
    }
};
