#include <vector>
#include <algorithm>
using namespace std;

#include <iostream>

class Solution {
public:
    /**
     * 这里思考了两个阶段
     * 1：直接通过遍历，然后使用set来找到值：set没有保存位置关系，而且无法判断是否有重复
     * 2：排序后，遍历前两个值，找到唯一解：前两个值的组合方式很难确认唯一，比如进行各种偏移，但是无法判断a或b进位后的处理方式
     * 正确方式
     * 排序后，针对每个唯一的target，在尾部找到unique的组合，通过3个while对已求值进行偏移，就能保证唯一
     */
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for (int a = 0; a < nums.size(); a ++) {
            int target = -nums[a], lo = a + 1, hi = nums.size() - 1;
            while (lo < hi) {
                int sum = nums[lo] + nums[hi];
                if (sum > target) hi--;
                else if (sum < target) lo ++;
                else {
                    int b = nums[lo], c = nums[hi];
                    res.push_back({nums[a], b, c});
                    // 通过这3条while解决了只要找到第一次，然后不能重复的问题
                    while (lo < hi && nums[lo] == b) lo++;
                    while (lo < hi && nums[hi] == c) hi--;
                }
            }
            while (a < nums.size() - 1 && nums[a] == nums[a+1]) a ++;
        } 
        return res;
    }
};
