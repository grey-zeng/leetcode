#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.empty() || nums.size() == 1) return ;
        int size = nums.size();
        k = k % size;
        vector<int>tmpList(size, 0);
        for (int i=0; i<k; i++) {
            tmpList[i] = nums[size-k+i];
        }
        for (int i=0; i<size-k; i++) {
            tmpList[i+k] = nums[i];
        }
        for (int i=0; i<size; i++) {
            nums[i] = tmpList[i];
        }
    }
};
