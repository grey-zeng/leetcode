#include "../util/treeNode.h"
#include <vector>
using namespace std;

class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return buildTree(inorder, postorder, 0, inorder.size()-1, 0, postorder.size() - 1);
    }
         
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder, int inStart, int inEnd, int postStart, int postEnd) {
        if (postStart > postEnd) return NULL;
        TreeNode* root = new TreeNode(postorder[postEnd]);
        int inIndex = inStart;
        for (int i=inStart; i<=inEnd; i++) {
            if (inorder[i] == root->val) inIndex = i;
        }
        // 这里的postStart我不太明白
        root->left = buildTree(inorder, postorder, inStart, inIndex - 1, postStart, postStart + inIndex - inStart - 1);
        root->right = buildTree(inorder, postorder, inIndex + 1, inEnd, postEnd - inEnd + inIndex, postEnd - 1);
        return root;
    } 
};
