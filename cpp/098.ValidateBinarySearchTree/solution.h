#include "../util/treeNode.h"
#include <stack>
using namespace std;

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        // 使用先序读取
        if (root == NULL) return true;
        stack<TreeNode*> s;
        TreeNode* prev = NULL;
        while (root != NULL || !s.empty()) {
            while (root != NULL) {
                s.push(root);
                root = root->left; 
            }
            root = s.top();
            s.pop();
            if (prev != NULL && root->val <=  prev->val) return false;
            prev = root;
            root = root->right;
        }
        return true;

        // 递归算法会陷入子树问题
        if (!root) return true;
        if (root->left && (root->left->val >= root->val || !isValidBST(root->left)))  return false; 
        if (root->right && (root->right->val <= root->val || !isValidBST(root->right)))  return false; 
        return true;
    }
};
