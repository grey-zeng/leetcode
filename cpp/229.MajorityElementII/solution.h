#include <vector>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());         
        vector<int> res;
        int targetNum = nums.size()/3;
        for (int i=0; i<nums.size(); i++) {
            int num = 1;
            while (i<nums.size()-1 && nums[i] == nums[i+1]) {
                num++;
                i++;
            }
            if (num > targetNum) res.push_back(nums[i]); 
        }
        return res;
    }
};
