#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if (matrix.empty()) return;
        int m=matrix.size(), n=matrix[0].size();
        // 常量空间复杂度,使用边界来进行存储
        bool left = false;
        for (int i=0; i<m; i++) {
            if (matrix[i][0] == 0) left = true;
            for (int j=1; j<n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
        // 这里需要换方向，因为前置的置0操作将影响后续的判断
        for (int i=m-1; i>=0; i--) {
            for (int j=n-1; j>=1; j--) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
            if (left) matrix[i][0] = 0; 
        }
        return;
        

        // 超常规做法 m+n空间复杂度
        vector<int> mList;
        vector<int> nList;
        // 采集
        for (int i=0; i<m; i++)
            for (int j=0;j<n; j++)
                if (matrix[i][j] == 0) {
                    mList.push_back(i);
                    nList.push_back(j);
                }
        // 转化
        for (auto i: mList) 
            for (int j=0; j<n ;j++) matrix[i][j] = 0;
        for (auto j: nList) 
            for (int i=0; i<m; i++) matrix[i][j] = 0;
    }
};
