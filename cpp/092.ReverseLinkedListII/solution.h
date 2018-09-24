#include "../util/listNode.h"

class Solution {
public:
    // 翻转m到n的节点
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* new_head = new ListNode(0);
        new_head -> next = head;
        ListNode* pre = new_head;
        for (int i = 0; i < m - 1; i++)
            pre = pre -> next;
        // 参考网友的解法
        ListNode* cur = pre -> next;
        for (int i = 0; i < n - m; i++) {
            ListNode* move = cur -> next;
            cur -> next = move -> next;
            move -> next = pre -> next;
            pre -> next = move;
        }
        return new_head -> next;

        // 自己的解法 有点头晕没写出来
        n -= m;
        ListNode* res = new ListNode(0);
        res->next = head;
        ListNode* reverseHead = res;
        while (--m && reverseHead) reverseHead = reverseHead->next;
        ListNode* node = reverseHead->next;
        while (n--) {
            // 链表反转
            ListNode* nextNode = node->next;
            reverseHead->next = nextNode;
            node->next = nextNode->next;
            nextNode->next = node;
        }
        return res->next;
    }
};
