#include <string>
#include <climits>
#include <iostream>
using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        int res = 0, symbol = 0;
        bool hasNum = false;
        for (char c: str) {
            // cout << c << "\tres:" << res << endl;
            if (hasNum && ( c < '0' || c > '9') ) break;
            if (!hasNum && symbol == 0) {
                if (c == '-' || c == '+') {
                    if (symbol != 0) break;
                    symbol = c == '+'? 1: -1;
                    continue;
                } else if (c == ' ') {
                    continue;
                }
            }
            if (c >= '0' && c <= '9') {
                hasNum = true;
                if (res > INT_MAX/10 || (res == INT_MAX/10 && c > '7')) {
                    return symbol == -1? INT_MIN: INT_MAX;
                }
                res = res * 10 + (c - '0');
            } else {
                break;
            }
        }
        return symbol == -1? -res: res;
    }

    // 另外的思路，将内容简化为找到自己想要的东西
    int myatoi_simple(string str) {
        int sign = 1, base = 0, i = 0;
        while (str[i] == ' ') { i++; }
        if (str[i] == '-' || str[i] == '+') {
            sign = 1 - 2 * (str[i++] == '-'); 
        }
        while (str[i] >= '0' && str[i] <= '9') {
            if (base >  INT_MAX / 10 || (base == INT_MAX / 10 && str[i] - '0' > 7)) {
                if (sign == 1) return INT_MAX;
                else return INT_MIN;
            }
            base  = 10 * base + (str[i++] - '0');
        }
        return base * sign;
    }
};
