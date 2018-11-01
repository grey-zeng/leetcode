#include "../util/listNode.h"
#include <stack>

class Solution {
public:
    // 使用双指针，空间小，综合效率较高
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* dummy = NULL;
        while (head) {
            ListNode* nextList = head->next;
            head->next = dummy;
            dummy = head;
            head = nextList;
        }
        return dummy;
    }

    // 使用堆栈，空间换时间
    ListNode* reverseList_stack(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        stack<ListNode*> nodeStack;
        while (head) {
            nodeStack.push(head);
            head = head->next;
        }
        ListNode* dummy = new ListNode(0);
        head = dummy;
        while (!nodeStack.empty()) {
            head->next = nodeStack.top();
            head = head->next;
            nodeStack.pop();
        }
        head->next = NULL;
        return dummy->next;
    }

    // 递归描述
    ListNode* reverseList_recursion(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* end = head;
        while (end->next->next != NULL) end = end->next;
        ListNode* res = end->next;
        end->next = NULL;
        res->next = reverseList_recursion(head);
        return res;
    }
};
