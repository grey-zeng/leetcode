#include <vector>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size()-1;
        while (lo <= hi) {
            int mid = lo + (hi-lo)/2;
            // 还是按照之前的查找办法，但是这里需要加上两个边界的判断
            if (nums[mid] == target || nums[lo] == target || nums[hi] == target) return true;
            else {
                // 常规二分查找
                if (nums[lo] < nums[hi]) {
                    if (nums[mid] > target) hi = mid-1;
                    else lo = mid+1;
                } 
                // 刚好卡住
                else {
                    if (nums[lo] > target) lo++;
                    if (nums[hi] < target) hi--;
                }  
            }
        }
        return false;
    }
};
