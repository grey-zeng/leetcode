#include "../util/treeNode.h"
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        vector<int> sub;
        if (root == NULL) return res;
        pathSum(root, sum, res, sub);
        return res;
    }

    void pathSum(TreeNode* root, int sum, vector<vector<int>>& res, vector<int> sup) {
        if (!root->left && !root->right) {
            if (sum == root->val) {
                sup.push_back(root->val);
                res.push_back(sup);
            }
        } else {
            sup.push_back(root->val);
            if (root->left) pathSum(root->left, sum - root->val, res, sup);
            if (root->right) pathSum(root->right, sum - root->val, res, sup);
        }
    }
};
