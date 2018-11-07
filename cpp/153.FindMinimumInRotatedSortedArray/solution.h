#include <vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.size()==1) return nums[0];
        int lo=0, hi=nums.size()-1; 
        while (lo <= hi) {
            int mid = lo+(hi-lo)/2;
            if (nums[mid] > nums[hi]) lo = mid+1;
            // 关键一步，左大右小时需要收缩
            else if (nums[mid] < nums[lo]) hi = mid;
            else hi = mid-1;
        }
        return nums[lo];
    }
};
