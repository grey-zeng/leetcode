#include "../util/treeNode.h"
#include <stack>

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        dfs(root, 0, res);
        return res;
    }

    void dfs(TreeNode* root, int lv, vector<int>& res) {
        if (!root) return;
        if (lv >= res.size()) res.push_back(root->val);
        dfs(root->right, lv+1, res);
        dfs(root->left, lv+1, res);
    }

    vector<int> rightSideView_bfs(TreeNode* root) {
        vector<int> res;
        if (root == NULL) return res;
        vector<TreeNode*> nodeList;
        nodeList.push_back(root);
        // 使用层级扫描,然后拿最右的元素来入库
        while (!nodeList.empty()) {
            res.push_back(nodeList[nodeList.size()-1]->val);
            vector<TreeNode*> row;
            for (auto node: nodeList) {
                if (node->left) row.push_back(node->left);
                if (node->right) row.push_back(node->right);
            } 
            nodeList = row;
        }
        return res;
    }
};
