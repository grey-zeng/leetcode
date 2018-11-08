#include <vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.size()==1) return nums[0];
        int lo=0, hi=nums.size()-1; 
        while (lo <= hi) {
            int mid = lo+(hi-lo)/2;
            if (nums[lo] > nums[hi]) {
                if (nums[mid] > nums[hi]) lo = mid+1;
                else hi = mid;
            } else if (nums[lo] == nums[hi] && lo != hi) {
                // while (lo < hi && nums[lo] >= nums[lo+1]) lo++;
                // while (lo <= hi && nums[hi] <= nums[hi-1]) hi--;
                // 解决1201场景
                while (lo < hi && nums[lo] >= nums[hi]) lo++;
            } else {
                hi = mid-1;
            }
        }
        return nums[lo];
    }
};
