#include "../util/treeNode.h"

class Solution {
public:
    // 把先序遍历转成链表，那就使用逆序遍历每次都拿到最后一个节点再使用指针连起来
    void flatten(TreeNode* root) {
        if (root == NULL) return;
        flatten(root->right);
        flatten(root->left);
        root->right = prev;
        root->left = NULL;
        prev = root;
    }
private:
    TreeNode* prev = NULL;
};
