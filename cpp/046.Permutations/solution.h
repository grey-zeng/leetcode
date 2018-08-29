#include <vector>
using namespace std;

class Solution {
public:
    // 全排列
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        permute(nums, res, 0); 
        return res;
    }

    // 直接使用回溯法
    void permute(vector<int>& nums, vector<vector<int>>& res, int begin) {
        if (begin >= nums.size()) {
            res.push_back(nums);
            return;
        }
        for (int i=begin; i<nums.size(); i++) {
            // 每次都交换对应的坐标
            swap(nums[begin], nums[i]);
            permute(nums, res, begin + 1);
            swap(nums[begin], nums[i]);
        }
    }
};
