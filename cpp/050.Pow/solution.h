class Solution {
public:
    double myPow(double x, int n) {
        if (n==0) {
            return 1;
        } else if (n < 0) {
           return 1/myPow(x, -n);
        } else {
            double res = 1;
            // 新版递归方式
            for (;n; x*=x, n/=2) if (n % 2) res *= x;
            return res;
            // 不够优化
            int num = 1;
            while (num*2 < n) {
                num *= 2;
                res *= res;
            }
            return res * myPow(x, n-num);
        }
    }

    double myPow_great(double x, int n) {
        if(n<0) return 1/x * myPow(1/x, -(n+1));
        if(n==0) return 1;
        if(n==2) return x*x;
        if(n%2==0) return myPow( myPow(x, n/2), 2);
        else return x*myPow( myPow(x, n/2), 2);
    }
};
