#include <cstddef>
#include <cstdlib>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // 这里原来还可以这么写，觉得太神奇了
        ListNode head(0), *current = &head;
        for (div_t sum{0, 0}; sum.quot || l1 || l2; current = current->next) {
            if (l1) {sum.quot += l1->val; l1 = l1->next;}
            if (l2) {sum.quot += l2->val; l2 = l2->next;}
            sum = div(sum.quot, 10);
            current->next = new ListNode(sum.rem);
        }
        return head.next;           
    }
};
