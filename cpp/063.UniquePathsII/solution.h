#include <vector>
using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        vector<vector<int>> matrix(m, vector<int>(n, 0));
        for (int i=0; i<m && obstacleGrid[i][0] != 1; i++) matrix[i][0] = 1;
        for (int i=0; i<n && obstacleGrid[0][i] != 1; i++) matrix[0][i] = 1;
        for (int i=1; i<m; i++)
            for (int j=1; j<n ;j++) {
                if (obstacleGrid[i][j] == 1) continue;
                if (obstacleGrid[i-1][j] == 0) matrix[i][j] += matrix[i-1][j];
                if (obstacleGrid[i][j-1] == 0) matrix[i][j] += matrix[i][j-1];
            }
        return matrix[m-1][n-1];
    }
};
