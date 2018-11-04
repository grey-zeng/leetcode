#include <vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.empty()) return 0;
        // 保留最大和最小值
        int maxVal = nums[0], minVal = nums[0], res = nums[0];
        for (int i=1; i<nums.size(); i++) {
            // 构建两个分支
            int maxNext = maxVal * nums[i];
            int minNext = minVal * nums[i];
            maxVal = max(max(maxNext, minNext), nums[i]);
            minVal = min(min(maxNext, minNext), nums[i]);
            // 每次都更新结果
            res = max(maxVal, res);
        }
        return res;
    }
};
