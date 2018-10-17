#include <vector>
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if (triangle.empty() || triangle[0].empty()) return 0;
        // 使用动态规划，从底往上
        vector<int> dp(triangle.back());
        int n = triangle.size();
        for (int layer = n-2; layer >=0; layer--) {
            for (int i=0; i<=layer;i ++) {
                dp[i] = min(dp[i], dp[i+1]) + triangle[layer][i];
            }
        }
        return dp[0];
    }

};
