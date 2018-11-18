#include <vector>
using namespace std;


class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty() || grid[0].empty()) return 0;
        int row = grid.size(), column = grid[0].size();
        int res = 0;
        for (int x=0; x<row; x++) {
            for (int y=0; y<column; y++) {
                if (grid[x][y] == '1') {
                    erase(grid, x, y, row, column);
                    res ++;
                }
            }
        }
        return res;
    }

    // 每次发现岛屿后，就把连接的内容填成陆地 
    void erase(vector<vector<char>>& grid, int x, int y, int row, int column) {
        if (x<0 || x>=row || y<0 || y>=column) return;
        if (grid[x][y] == '1') {
            grid[x][y] = 0;
            erase(grid, x-1, y, row, column);
            erase(grid, x+1, y, row, column);
            erase(grid, x, y-1, row, column);
            erase(grid, x, y+1, row, column);
        }
    }
};
