#include <cstdint>

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        // 更优的解法
        while (n) {
            n &= n-1;
            res ++;
        }
       // for (int i=0; i<32; i++) {
       //     if (n & 1) res ++;
       //     n = n >> 1;
       // }
        return res;
    }
};
