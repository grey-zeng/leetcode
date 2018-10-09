#include "../util/treeNode.h"
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        vector<TreeNode*> list;
        list.push_back(root);
        while (!list.empty()) {
            vector<int> row;
            vector<TreeNode*> next;
            for (auto node: list) {
                if (node != NULL) {
                    row.push_back(node->val);
                    next.push_back(node->left);
                    next.push_back(node->right);
                }
            }
            if (!row.empty()) res.push_back(row);
            list = next;
        }
        // 直接一个逆序
        // 使用栈来处理也是可以的
        reverse(res.begin(), res.end());
        return res;
    }
};
