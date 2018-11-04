#include <vector>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.empty()) return 0;
        int size = nums.size();
        if (size < 2) return nums[0];
        // 直接简单的拆分为两个动态规划
        return max(rob(nums, 0, size-2), rob(nums, 1, size-1));
    }
private:
    int rob(vector<int>& nums, int l, int r) {
        int pre = 0, cur = 0;
        for (int i = l; i <= r; i++) {
            int temp = max(pre + nums[i], cur);
            pre = cur;
            cur = temp;
        }
        return cur;
    }
};
