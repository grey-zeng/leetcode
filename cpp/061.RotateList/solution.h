#include "../util/listNode.h"
#include <iostream>
using namespace std;

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (k==0 || head == NULL || head->next == NULL) return head;
        ListNode* current = head;
        int i=0;
        while (i++ < k && current->next != NULL)  current = current->next;
        // 超长了
        if (i<=k) return rotateRight(head, k%i);
        // 进行双指针偏移
        else {
            ListNode* begin = head;
            while (current->next != NULL) {
                begin = begin->next;
                current = current->next;
            }
            current->next = head;
            ListNode* beginNext = begin->next;
            begin->next = NULL;
            return beginNext;
        }
    }
};
