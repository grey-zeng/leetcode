#include <iostream>
#include "../util/listNode.h"
using namespace std;

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        } else {
            ListNode *next = head->next;
            cout << "swap:" << head->val << "-" << next->val << endl; 
            head->next = swapPairs(next->next);
            next->next = head;
            return next;
        }
    }
};
