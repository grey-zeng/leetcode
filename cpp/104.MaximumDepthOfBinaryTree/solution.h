#include "../util/treeNode.h"

class Solution {
public:
    /**
     * 使用简单的递归来实现
     * 优化可以考虑多几种边界，然后减少递归深度
     */
    int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
