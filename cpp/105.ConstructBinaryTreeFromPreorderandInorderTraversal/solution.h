#include "../util/treeNode.h"
#include <vector>
using namespace std;

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return buildTree(0, 0, inorder.size()-1, preorder, inorder);
    }

    TreeNode* buildTree(int preStart, int inStart, int inEnd, vector<int>& preorder, vector<int>& inorder) {
        if (preStart > preorder.size() - 1 || inStart > inEnd) return NULL;
        TreeNode* root = new TreeNode(preorder[preStart]);
        int inIndex = 0;
        for (int i = inStart; i <= inEnd; i++) {
            if (inorder[i] == root->val) inIndex = i;
        }
        root->left = buildTree(preStart + 1, inStart, inIndex - 1, preorder, inorder);
        // 右子树这里是一开始图画错了，然后一时间没有想起来
        root->right = buildTree(preStart + inIndex - inStart + 1, inIndex + 1, inEnd, preorder, inorder);
        return root;
    }
};
