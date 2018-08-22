#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums.empty()) return 0;
        int lo=0, hi=nums.size()-1;
        while (lo<=hi) {
            int mid = lo + (hi-lo)/2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                hi = mid-1;
            } else {
                lo = mid+1;
            }
        }
        if (nums[lo] > target) {
            while(lo > 0 && nums[lo-1] > target) lo --;
        } else {
            while(lo < nums.size()-1 && nums[lo+1] < target) lo++;
        }
        return lo;
    }
};
