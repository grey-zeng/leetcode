#include <vector>
using namespace std;

class Solution {
public:
    // 参考网友的解法：https://leetcode.com/problems/surrounded-regions/discuss/41612/A-really-simple-and-readable-C++-solutiononly-cost-12ms
    // 1.从4条边往中间进行扫描，将连着边界的O转成1
    // 2.扫描矩阵，将没有联通的O转成X
    // 3.把1恢复成O
    void solve(vector<vector<char>>& board) {
        int i,j;
        int row = board.size();
        if (!row) return;
        int col = board[0].size();
        for (i=0; i<row; i++) {
            check(board, i, 0, row, col);
            if (col > 1) check(board, i, col-1, row, col);
        }
        for (j=1; j<col-1; j++) {
            check(board, 0, j, row, col);
            if (row > 1) check (board, row-1, j, row, col);
        }
        for (i=0; i<row; i++) {
            for (j=0; j<col; j++) {
                if (board[i][j] == 'O') board[i][j] = 'X';
            }
        }
        for (i=0; i<row; i++) {
            for (j=0; j<col; j++) {
                if (board[i][j] == '1') board[i][j] = 'O';
            }
        }
    }

    void check(vector<vector<char>>& vec, int i, int j, int row, int col) {
        if (vec[i][j] == 'O') {
            vec[i][j] = '1';
            if (i>1) check(vec, i-1, j,row, col);
            if (j>1) check(vec, i, j-1, row, col);
            if (i<row-1) check(vec, i+1, j, row, col);
            if (j<col-1) check(vec, i, j+1, row, col);
        } 
    }
};
