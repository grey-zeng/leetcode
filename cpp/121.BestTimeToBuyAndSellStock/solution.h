#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1) return 0;
        int n = prices.size();
        int res = 0;
        vector<int> dp(n, prices[0]);
        for (int i=1; i<n; i++) {
            dp[i] = min(dp[i-1], prices[i]);
            res = max(res, prices[i] - dp[i]);
        }
        return res;
    }
};
