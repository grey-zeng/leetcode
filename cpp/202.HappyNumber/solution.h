class Solution {
public:
    bool isHappy(int n) {
        if (n < 10) return n == 1 || n == 7;
        int next = 0;
        while (n > 0) {
            next += ((n%10) * (n%10));
            n /= 10;
        }
        return isHappy(next);
    }
};
