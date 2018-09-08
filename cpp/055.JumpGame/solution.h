#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        // 贪心算法比较简单
        int i = 0, n = nums.size();
        for (int reach = 0; i < n && i <= reach; ++i)
            reach = max(i + nums[i], reach);
        return i == n;

        // dp法貌似是可以的
        vector<int> dp;
        return canJump(nums, nums.size()-1, dp);
    }

    bool canJump(vector<int> nums,int end, vector<int>& dp) {
        if (end <= 0) return true;
        for (int i=end-1; i>=0; i--) {
            if (dp[i] == 1) return true;
            if (dp[i] == 0 && nums[i] >= (end-i) && canJump(nums, i, dp)) {
                dp[i] = 1;
                return true;
            } else {
                dp[i] = -1;
            }
        }
        return false;
    }
};
