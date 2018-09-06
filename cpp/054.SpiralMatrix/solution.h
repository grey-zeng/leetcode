#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if (matrix.empty()) return res;
        int top = 0, down = matrix.size()-1, left = 0, right = matrix[0].size() -1;
        while (true) {
            for (int x=left, y=top; x<=right; x++) res.push_back(matrix[y][x]);
            if (++top > down) break;
            for (int x=right, y=top ;y<=down; y++) res.push_back(matrix[y][x]);
            if (--right < left) break;
            for (int x=right, y=down ;x>=left; x--) res.push_back(matrix[y][x]);
            if (--down < top) break;
            for (int x=left, y=down;y>=top; y--) res.push_back(matrix[y][x]);
            if (++left > right) break;
        } 
        return res;
    }
};
