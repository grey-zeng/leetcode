#include <vector>
using namespace std; 

class Solution {
public:
    // 不太明白这里的回溯逻辑
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        permuteUnique(nums, res, 0);
        return res;
    }
    // 这里的nums不要加引用
    void permuteUnique(vector<int> nums, vector<vector<int>>& res, int begin) {
        if (nums.size() - 1 == begin) {
            res.push_back(nums);
            return;
        }
        for (int i=begin; i<nums.size(); i++) {
            if (i != begin && (nums[i] == nums[begin])  ) continue;
            swap(nums[i], nums[begin]);
            permuteUnique(nums, res, begin+1);
            // 这里不用还原，因为没有取引用
            //swap(nums[i], nums[begin]);
        }
    }
};
