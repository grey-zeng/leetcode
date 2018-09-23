#include "../util/listNode.h"
using namespace std;

class Solution {
public:
    // 题目不是很好理解：通过x拆分成两条链，然后进行组合
    ListNode* partition(ListNode* head, int x) {
        ListNode node1(0), node2(0);
        ListNode *p1 = &node1, *p2 = &node2;
        while(head) {
            if (head->val < x) 
                p1 = p1->next = head;
            else 
                p2 = p2->next = head;
            head = head->next;
        }
        p2->next = NULL;
        p1->next = node2.next;
        return node1.next;
    }
};
