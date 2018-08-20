#include <vector>
using namespace std;

class Solution {
public:
    // 这道题的关键要点就是读懂题目表达的意思，然后观察到规律进行拆解
    void nextPermutation(vector<int>& nums) {
        int index = nums.size()-1;
        while (index>0 && nums[index] <= nums[index-1]) index--;

        // 判断是否已最大
        if (index == 0) {
            reverse(nums.begin(), nums.end());
        }
        // 进行交换操作
        else {
            int prev = nums[index-1];
            for (int i=nums.size()-1; i>index-1; i--) {
                if (nums[i] > prev) {
                    nums[index-1] = nums[i];
                    nums[i] = prev;
                    break;
                }
            }
            reverse(nums.begin() + index, nums.end());
        }
    }
};
