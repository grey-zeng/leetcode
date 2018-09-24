#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        sort(nums.begin(), nums.end());
        subsetsWithDup(nums, subset, 0, res);
        return res;
    }

    void subsetsWithDup(vector<int> nums, vector<int> subset, int end, vector<vector<int>> &res) {
        res.push_back(subset);
        for (int i=end; i < nums.size(); i++) {
            subset.push_back(nums[i]);
            // 先塞入保证有一个进入
            subsetsWithDup(nums, subset, i+1, res);
            // 去除重复项
            while (i<nums.size()-1 && nums[i] == nums[i+1]) i++;
            subset.pop_back();
        }
    }
};
