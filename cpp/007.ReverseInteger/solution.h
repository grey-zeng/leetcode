#include<climits>

class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while (x != 0) {
            // 需要处理溢出:溢出是反转的时候导致的数据变大活变小，所以需要在中间过程中处理
            if (res > INT_MAX/10) return 0;
            if (res < INT_MIN/10) return 0;
            res = res*10 + x%10;
            x = x/10;
        }
        return res;
    }
};
