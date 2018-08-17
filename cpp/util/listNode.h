#include <iostream>
#include <vector>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };


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
