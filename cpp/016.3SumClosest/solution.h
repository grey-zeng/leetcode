#include <vector>
#include <algorithm>
using namespace std;

#include <iostream>


class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        cout << "target:" << target << endl;
        std::sort(nums.begin(), nums.end());
        int resDiff = nums[0] + nums[1] + nums[2] - target;
        for (int i = 0; i < nums.size(); i++) {
            int lo = i+1, hi = nums.size() - 1;
            while (lo < hi) {
                int diff = nums[i] + nums[lo] + nums[hi] - target;
                cout << "diff:" << diff << endl;
                if (abs(diff) < abs(resDiff)) {
                    resDiff = diff;
                }
                if (diff == 0) {
                    break;
                } else if (diff > 0) {
                    hi--;
                } else {
                    lo ++;
                }
            }
        }
        return target + resDiff;
    }
};
