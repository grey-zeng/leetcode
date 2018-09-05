#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // 动态规划
        // 循环数组，获取每段子队列的最大值
        vector<int> dp(nums.begin(), nums.end());
        int res = dp[0];
        for (int i=1; i<nums.size(); i++) {
            dp[i] = nums[i] + (dp[i-1]>0? dp[i-1]: 0);
            res = max(res, dp[i]);
        }
        return res; 
    }
};
