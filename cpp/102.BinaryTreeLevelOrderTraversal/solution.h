#include "../util/treeNode.h"
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        vector<TreeNode*> list;
        list.push_back(root);
        // 直接两层循环即可
        while (!list.empty()) {
            vector<TreeNode*> next;
            vector<int> current;
            for (auto node: list) {
                if (node) {
                   current.push_back(node->val); 
                   next.push_back(node->left);
                   next.push_back(node->right);
                }
            }
            list = next;
            if (!current.empty()) res.push_back(current);
        }
        return res;
    }
};
