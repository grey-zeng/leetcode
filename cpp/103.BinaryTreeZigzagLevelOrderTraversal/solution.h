#include "../util/treeNode.h"
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        stack<TreeNode*> s;
        s.push(root);
        // 常规的暴力解法
        bool isRight = false;
        vector<vector<int>> res;
        while (!s.empty()) {
            vector<int> row;
            stack<TreeNode*> next;
            while (!s.empty()) {
                TreeNode* current = s.top();
                s.pop();
                if (current == NULL) continue;
                row.push_back(current->val);
                if (isRight) {
                    next.push(current->right);
                    next.push(current->left);
                } else {
                    next.push(current->left);
                    next.push(current->right);
                }
            }
            if(!row.empty()) res.push_back(row);
            s = next;
            isRight = !isRight;
        }
        return res;
    }
};
