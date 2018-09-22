#include <vector>
#include <string>
using namespace std;

/**
 * 参考链接 https://leetcode.com/problems/word-search/discuss/27739/My-DFS-+-Backtracking-C++-solution-(16ms)
 * 表示一开始看错题目，因为是单行或单列
 */
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if (word.empty()) return true;
        for (int y=0; y<board.size(); y++) {
            for (int x=0; x<board[0].size(); x++) {
                if (exist(board, word, y, x , 0)) return true;
            }
        }
        return false;
    }

    // 直接递归
    bool exist(vector<vector<char>> board, string word, int y, int x, int i) {
        if (i == word.size()) return true;
        if (y<0 || x<0 || y == board.size() || x== board[y].size()) return false;
        if (board[y][x] != word[i]) return false;
        // 标记为已读
        char prev = board[y][x];
        board[y][x] = '-';
        bool res = exist(board, word, y, x+1, i+1)
            || exist(board, word, y, x-1, i+1)
            || exist(board, word, y+1, x, i+1)
            || exist(board, word, y-1, x, i+1);
        board[y][x] = prev;
        return res;
    }

    // 貌似可以用dfs，但是看不懂
    bool dfs(vector<vector<char>>& board, string &word, int col, int row, int beg) {
        bool res(false);
        
        return res;
    }
};
