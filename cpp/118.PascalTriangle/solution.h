#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if (numRows <= 0) return res;
        res.push_back(vector<int>{1});
        while(--numRows > 0) {
            vector<int> newRow;
            int prev = 0;
            for (int val: res[res.size()-1]) {
                newRow.push_back(prev + val);
                prev = val;
            }
            newRow.push_back(prev);
            res.push_back(newRow);
        }
        return res;
    }
};
