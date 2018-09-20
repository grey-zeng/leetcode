#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subs;
        vector<int> sub;
        subsets(nums, 0, sub, subs);
        return subs;
    }
    
    // 还是常规的回溯法
    void subsets(vector<int>& nums, int start, vector<int>& sub, vector<vector<int>>& subs) {
        subs.push_back(sub);
        // 这里将保证每次塞入sub的都是递增数
        for (int i = start; i < nums.size(); i++) {
            sub.push_back(nums[i]);
            subsets(nums, i + 1, sub, subs);
            sub.pop_back();
        }
    }
};
