#include "../util/treeNode.h"
#include <vector>
using namespace std;

class Solution {
public:
    vector<TreeNode*> generateTrees(int n) {
        if (n <= 0) {
            vector<TreeNode*> emptyRes;
            return emptyRes;
        }
        return generateTrees(1, n); 
    }

    vector<TreeNode*> generateTrees(int start, int end) {
        vector<TreeNode*> res;
        if (start > end) {
            res.push_back(NULL);
            return res;
        }

        if (start == end) {
            res.push_back(new TreeNode(start));
            return res;
        }

        vector<TreeNode*> left, right;
        for (int i=start; i<=end; i++) {
            left = generateTrees(start, i-1);
            right = generateTrees(i+1, end);
            for (TreeNode* lnode: left) {
                for (TreeNode* rnode: right) {
                    TreeNode* root = new TreeNode(i);
                    root->left = lnode;
                    root->right = rnode;
                    res.push_back(root);
                }
            }
        }
        return res;
    }
};
