#include "../util/treeNode.h"
#include <vector>
using namespace std;

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (root == NULL) return true;
        return isBalanced(root->left) && isBalanced(root->right) && abs(depth(root->left) - depth(root->right)) <= 1;
    }

    int depth(TreeNode* root) {
        if (root == NULL) return 0;
        return max(depth(root->left), depth(root->right)) + 1;
    }
};
