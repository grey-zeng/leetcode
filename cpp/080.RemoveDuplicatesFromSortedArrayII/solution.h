#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int len = 0;
        for (int i=1; i<nums.size(); i++) {
            if (nums[i] != nums[len] || len == 0 || nums[len] != nums[len-1]) 
                swap(nums[i], nums[++len]);
        }
        return len + 1;
    }
};
