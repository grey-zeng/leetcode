#include "../util/treeNode.h"
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    // 就是树的先序遍历
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nodes;
        stack<TreeNode*> todo;
        TreeNode* cur = root;
        while (cur || !todo.empty()) {
            if (cur) {
                todo.push(cur);
                cur = cur -> left;
            }
            else {
                cur = todo.top();
                todo.pop();
                nodes.push_back(cur -> val);
                cur = cur -> right;
            }
        }
        return nodes;         
    }
};
