#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res = {-1,-1};
        int lo=0, hi=nums.size()-1;
        while (lo<=hi) {
            int mid = lo + (hi-lo)/2;
            if (nums[mid] == target) {
                // 水平扩展比较简单
                int left = mid, right = mid;
                while (left > 0 && nums[left-1] == target) left--;
                while (right < nums.size()-1 && nums[right+1] == target) right ++;
                res[0] = left;
                res[1] = right;
                return res; 
            } else if (nums[mid] > target) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        // 优化方式就是左查+右查
        return res;
    }

    vector<int> searchRange_quick(vector<int>& nums, int target) {
        vector<int> res = {-1, -1};
        int lo=0, hi=nums.size()-1;
        while (lo<=hi) {
            int mid = lo + (hi-lo)/2;
            if (nums[mid] >= target) {
                hi = mid-1;
            } else {
                lo = mid+1;
            }
        }
        if (lo == nums.size() || nums[lo] != target) return res; 
        res[0] = lo;
        hi = nums.size()-1;
        while (lo<=hi) {
            int mid = lo + (hi-lo)/2;
            if (nums[mid] > target) {
                hi = mid-1;
            } else {
                lo = mid+1;
            }
        }
        res[1] = hi;
        return res;
    }
};
