class Solution {
public:
    // 貌似是斐波那契数列
    int climbStairs(int n) {
        // 这里就是斐波那契数列转成动态规划求解
        if (n==0) return 0;
        int a = 1, b = 1;
        while (n--) a = (b+=a) - a;
        return a;

        // 超时
        if (n <= 2) return n; 
        return climbStairs(n-1) + climbStairs(n-2);
    }
};
