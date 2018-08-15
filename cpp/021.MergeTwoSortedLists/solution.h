#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;
        ListNode *head;
        if (l1->val < l2->val) {
            head = new ListNode(l1->val);
            l1 = l1->next;
        }  else {
            head = new ListNode(l2->val);
            l2 = l2->next;
        }
        ListNode *current = head;
        while (l1 || l2) {
            while (l1 && (!l2 || l1->val <= l2->val)) {
                cout << l1->val << endl;
                current->next = new ListNode(l1->val);
                current = current->next;
                l1 = l1->next;
            }
            while (l2 && (!l1 || l1->val >= l2->val)) {
                cout << l2->val << endl;
                current->next = new ListNode(l2->val);
                current = current->next;
                l2 = l2->next;
            }
        }
        return head;
    }

    ListNode* mergeTwoLists_simple(ListNode* l1, ListNode* l2) {
        ListNode head(0), *cur = &head;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                cur->next = new ListNode(l1->val);
                l1 = l1->next;
            } else {
                cur->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            cur = cur->next;
        }
        while (l1) {
            cur->next = new ListNode(l1->val);
            cur = cur->next;
            l1 = l1->next;
        }
        while (l2) {
            cur->next = new ListNode(l2->val);
            cur = cur->next;
            l2 = l2->next;
        }
        return head.next;
    }
};
