#include <vector>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.empty()) return 0;
        if (nums.size() == 1) return nums[0];
        int size = nums.size();
        vector<int> dp(size, 0);
        // 参考网友的写法，这才是真正描述了状态转换方程
        dp[0] = nums[0];
        dp[1] = max(dp[0], nums[1]);
        for (int i=2; i<size; i++) {
            dp[i] = max(dp[i-1],  dp[i-2] + nums[i]);
        }
        return dp[size-1];
        // 自己的写法，使用两分支来判断
        dp[0] = nums[0];
        dp[1] = nums[1];
        for (int i=2; i<size; i++) {
            // 针对可以跳步情况
            if (i>2) {
                dp[i] = nums[i] + max(dp[i-2], dp[i-3]); 
            } else {
                dp[i] = nums[i] + dp[i-2]; 
            }
        }
        return max(dp[size-1], dp[size-2]);
    }
};
