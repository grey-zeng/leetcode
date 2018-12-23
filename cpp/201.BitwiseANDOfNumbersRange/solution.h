class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        // @see https://leetcode.com/problems/bitwise-and-of-numbers-range/discuss/56721/2-line-Solution-with-detailed-explanation
        // 不断收缩右边界
        while (m < n) n &= (n-1);
        return n;

        // 这样会导致超时
        int res = m;
        while (m < n) res &= ++m;
        return res;     
    }
};
