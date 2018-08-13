#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end()); 
        vector<vector<int>> res;
        // 找到第一层
        for (int a=0; a<nums.size(); a ++) {
            int target3 = target - nums[a];
            // 找到第二层
            for (int b=a+1; b < nums.size(); b++) {
                int target2 = target3 - nums[b];
                int c = b+1, d = nums.size() - 1;
                while (c<d) {
                    int sum = nums[c] + nums[d];
                    if (sum > target2) d--;
                    else if (sum < target2 ) c++;
                    else {
                        res.push_back({nums[a], nums[b], nums[c++], nums[d--]});
                        while (c<d && nums[c] == nums[c-1]) c++;
                        while (c<d && nums[d] == nums[d+1]) d--;
                    }
                }
                
                while(b<nums.size() && nums[b] == nums[b+1]) b++;
            }
            while (a<nums.size() && nums[a] == nums[a+1]) a++;
        }
        return res;
    }
};
