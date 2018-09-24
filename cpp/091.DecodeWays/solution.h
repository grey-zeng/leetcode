#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    // 需要用到动态规划来进行求解
    int numDecodings(string s) {
        if (!s.size() || s.front() == '0') return 0;
        // 参考网友的解法
        int r1 = 1, r2 = 1;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == '0') r1=0;
            if (s[i-1] == '1' || (s[i-1] == '2' && s[i] <= '6')) {
                r1 = r2 + r1;
                r2 = r1 - r2;
            } else {
                r2 = r1;
            }
        }
        return r1;

        // 需要用到动态规划
        vector<int> dp(s.size());
        dp[0] = 1;
        for (int i=1; i<s.size(); i++) {
            if (s[i] == '0') {
                if (s[i-1] == '1' || s[i-1] == '2') dp[i] = dp[i-1]>1? dp[i-1] - 1: dp[i-1];
                else return 0;
            } else {
                if (s[i-1] == '1' || (s[i-1] == '2' && s[i] <= '6')) dp[i] = dp[i-1] + 1;
                else dp[i] = dp[i-1];
            }
        }
        return dp[s.size()-1];

        // 递归求解 不太好用
        if (s.size() == 1) return 1;
        if (s.size() >= 2 && (s[0] == '1' || (s[0] == '2' && s[1] <= '6'))) {
            return numDecodings(s.substr(1)) + numDecodings(s.substr(2));
        } else {
            return numDecodings(s.substr(1));
        }
    }
};
