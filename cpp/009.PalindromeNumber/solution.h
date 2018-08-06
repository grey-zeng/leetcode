class Solution {
public:
    bool isPalindrome(int x) {
        if (x <= 0 || x%10 == 0) return x == 0;
        int y = 0;
        while (x > 0 && y <= x) {
            if (x==y) return true;
            y = y*10 + x%10;
            if (x==y) return true;
            x = x/10;
        }
        return false;
    }
};
