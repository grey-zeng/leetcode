#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // 当然可以使用hash表来做
        sort(nums.begin(), nums.end());         
        int targetNum = nums.size()/2;
        for (int i=0; i<nums.size()-1; i++) {
            int num = 1;
            while (nums[i] == nums[i+1]) {
                num++;
                i++;
            }
            if (num > targetNum) return nums[i];
        }
        return nums[0];
    }
};
