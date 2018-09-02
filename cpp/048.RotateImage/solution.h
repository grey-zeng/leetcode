#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size()-1;
        // 中间对半交换
        for (int i=0; i<=n; i++) {
            for (int j=0; j<=n/2; j++) {
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[i][n-j];
                matrix[i][n-j] = tmp;
            }
        }
        // 斜分线交换
        for (int i=0; i<=n; i++) {
            for (int j=0; j<=n-i; j++) {
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[n-j][n-i];
                matrix[n-j][n-i] = tmp;
            }
        }
    }

    // todo 更优解法为直接取1/4块进行循环替换
    void rotateBetter(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // 防止偶数情况
        for (int i = 0; i < (n+1)/2; i++) {
            for (int j = 0; j < n/2; j++) {
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[n-j-1][i];
                matrix[n-j-1][i] = matrix[n-i-1][n-j-1];
                matrix[n-i-1][n-j-1] = matrix[j][n-i-1];
                matrix[j][n-i-1] = tmp;
            }
        }    
    }
};
