#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         ListNode **del = &head, *iter = head;
         for (int i=0; i<n; ++i, iter = iter->next) ;
         // 重点在这个double指针的引用上
         for (; iter != NULL; del = &((*del)->next), iter = iter->next ) ;
         *del = (*del)->next;
         return head;
    }
};
