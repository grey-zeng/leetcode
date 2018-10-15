#include "../util/treeLinkNode.h"

class Solution {
public:
    void connect(TreeLinkNode *root) {
        TreeLinkNode* head = new TreeLinkNode(0);
        head->next = root;
        while(head->next != NULL) {
            TreeLinkNode* newList = new TreeLinkNode(0);
            TreeLinkNode* newListEnd = newList;
            while (head->next != NULL) {
                head = head->next;
                if (head->left) {
                    newListEnd->next = head->left;
                    newListEnd = newListEnd->next;
                }
                if (head->right) {
                    newListEnd->next = head->right;
                    newListEnd = newListEnd->next;
                }
            }
            head = newList;
        }
    }
};
