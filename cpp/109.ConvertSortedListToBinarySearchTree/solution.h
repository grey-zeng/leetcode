#include "../util/treeNode.h"
#include "../util/listNode.h"

class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        return sortedListToBST(head, NULL);
    }

    TreeNode* sortedListToBST(ListNode* head, ListNode* endNode) {
        if (head == NULL || head == endNode ) return NULL;
        // 使用双指针找中点
        ListNode* mid = head;
        ListNode* end = head;
        while (true) {
            if (end == endNode || end->next == endNode) break;
            end = end->next->next;
            mid = mid->next;
        }
        TreeNode* root = new TreeNode(mid->val);
        root->left = sortedListToBST(head, mid); 
        // 一开始这里的尾节点没有写对
        root->right = sortedListToBST(mid->next, endNode);
        return root;
    }
};
