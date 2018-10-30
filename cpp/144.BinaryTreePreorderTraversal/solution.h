#include "../util/treeNode.h"
#include <stack>

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if (root==NULL) return result; 
        // 直接使用堆栈即可
        stack<TreeNode*> treeStack;
        treeStack.push(root);
        while (!treeStack.empty()) {
            TreeNode *temp = treeStack.top();
            result.push_back(temp->val);
            treeStack.pop();
            if (temp->right!=NULL) {
                treeStack.push(temp->right);
            }
            if (temp->left!=NULL) {
                treeStack.push(temp->left);
            }
        }
        return result; 
    }
};
