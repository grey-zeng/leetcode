#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1;
        while (lo <= hi) {
            int mid = lo + (hi-lo)/2;
            if (nums[mid] == target) {
                return mid;
            } else {
                // 传统的二分查找
                if (nums[lo] < nums[hi]) {
                    if (nums[mid] > target) {
                        hi = mid - 1;
                    } else {
                        lo = mid + 1;
                    }
                }
                // 刚好卡住
                else {
                    // 前期使用的while改成if，可以使用二分减少步长消耗
                    if (nums[lo] > target) lo++;
                    if (nums[hi] < target) hi--;
                }
            }
        }
        return -1;
    }
};
