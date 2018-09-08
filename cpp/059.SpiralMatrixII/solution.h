#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 1));
        if (n==0) return res; 
        // 开始填充数据
        int top = 0, bottom = n-1, left = 0, right = n-1, k=1;
        while (k<=n*n) {
            for (int x=left, y=top; x<=right; x++) res[y][x]=k++;
            if (top++ > bottom) break;
            for (int x=right, y=top; y<= bottom; y++) res[y][x]=k++;
            if (right-- < left) break;
            for (int x=right, y=bottom; x>=left; x--) res[y][x]=k++;
            if (bottom-- < top) break;
            for (int x=left, y=bottom; y>=top; y--) res[y][x]=k++;
            if (left++ > right) break;
        }
        return res;
    }
};
