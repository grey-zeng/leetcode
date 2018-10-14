#include "../util/treeNode.h"

class Solution {
public:
    void flatten(TreeNode* root) {
        // 常规的遍历做法
        while(root) {
            if (root->left) {
                TreeNode* prev = root->left;
                while (prev->right) prev = prev->right;
                prev->right = root->right;
                root->right = root->left;
                root->left = NULL;
            }
            root = root->right;
        }
        return;
        // 把先序遍历转成链表，那就使用逆序遍历每次都拿到最后一个节点再使用指针连起来
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
