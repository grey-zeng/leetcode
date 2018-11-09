#include "../util/treeNode.h"
#include <set>
#include <queue>

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        // 比较暴力的hash查询法
        set<int> hashSet;
        queue<TreeNode*> nodeList;
        nodeList.push(root);
        while (!nodeList.empty()) {
            TreeNode* node = nodeList.front();
            nodeList.pop();
            if (hashSet.find(k - node->val) != hashSet.end()) return true;
            hashSet.insert(node->val);
            if (node->left) nodeList.push(node->left);
            if (node->right) nodeList.push(node->right);
        }
        return false;
    }
};
