#include "../util/treeNode.h"

class Solution {
public:
    int sumNumbers(TreeNode* root) {
        return sumNumbers(root, 0);
    }

    int sumNumbers(TreeNode* root, int s) {
        if (root == NULL) return 0;
        if (root->left == NULL && root->right == NULL) return s*10 + root->val;
        return sumNumbers(root->left, s*10 + root->val) + sumNumbers(root->right, s*10 + root->val);
    }
};
