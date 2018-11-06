#include <vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.empty()) return 0;
        int size = nums.size();
        if (size == 1) return 0;
        if (size == 2) return nums[0] > nums[1]? 0: 1;
        if (nums[0] > nums[1]) return 0;
        for (int i=1; i<size-1; i++) {
            if (nums[i] > nums[i-1] && nums[i] > nums[i+1]) return i;
        } 
        return size-1;
    }
};
