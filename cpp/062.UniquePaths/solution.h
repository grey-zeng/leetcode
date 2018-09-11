#include <vector>
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        // 标准动态规划
        vector<vector<int> > path(m, vector<int> (n, 1));
        for (int i = 1; i < m; i++)
            for (int j = 1; j < n; j++)
                path[i][j] = path[i - 1][j] + path[i][j - 1];
        return path[m - 1][n - 1];

        // 缓存结果的方式失效了
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        dp[1][1] = 1;
        return uniquePaths(m, n, dp);
    }

    int uniquePaths(int m, int n, vector<vector<int>>& dp) {
        if (dp[m][n] > 0) return dp[m][n];
        int down=0, right=0;
        if (m > 1) down += uniquePaths(m-1, n);
        if (n > 1) right += uniquePaths(m, n-1);
        dp[m][n] = down + right;
        return down + right;
    }
};
