#include "../util/treeNode.h"
#include <vector>
using namespace std;

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.empty()) return NULL;
        return sortedArrayToBST(nums, 0, nums.size()-1);
    }

    // 看到网上直接使用vector拷贝反而会更快，表示有些不解
    TreeNode* sortedArrayToBST(vector<int> nums, int begin, int end) {
        if (begin > end) return NULL;
        int mid = begin + (end-begin)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = sortedArrayToBST(nums, begin, mid-1);
        root->right = sortedArrayToBST(nums, mid+1, end);
        return root;
    }
};
