#include <vector>
#include <iostream>
#include "solution.h"
using namespace std;

ListNode* create(vector<int> arr) {
    auto beg = arr.begin();
    ListNode *head = new ListNode(*beg++);
    for (ListNode *cur = head; beg != arr.end(); cur = cur->next) {
        cur->next = new ListNode(*beg++);
    }
    return head;
}

void print(ListNode *head) {
    while (head) {
        cout << head->val << endl;
        head = head->next;
    }
}

int main(int argc, char const *argv[])
{
    Solution s;
    ListNode *l11 = create({1,2,4}); 
    ListNode *l12 = create({1,3,4}); 
    ListNode *l1 = s.mergeTwoLists(l11, l12);
    print(l1);
}
