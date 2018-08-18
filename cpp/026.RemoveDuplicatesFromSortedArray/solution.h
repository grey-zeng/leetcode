#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        auto iter = nums.begin();
        while ((iter + 1) != nums.end()) {
            if (*(iter) == *(iter + 1)) nums.erase(iter + 1);
            else iter ++; 
        }
        return nums.size();
    }

    int removeDuplicates_array(vector<int>& nums) {
        if (nums.empty()) return 0;
        int j = 0;
        for (int i=0; i<nums.size(); i++) {
            if (nums[j] != nums[i]) {
                nums[++j] = nums[i];
            }
        }
        return j+1;
    }
};
