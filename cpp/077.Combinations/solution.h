#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> tmp;
        combine(0, n, k, tmp, res);
        return res;
    }
    
    // 比较简单的回溯算法
    void combine(int begin, int end, int k, vector<int> tmp, vector<vector<int>>& res) {
        if (tmp.size() == k) {
            res.push_back(tmp);
            return;
        } 
        for (int i=begin+1; i<=end; i++) {
            tmp.push_back(i);
            combine(i, end, k, tmp, res);
            tmp.pop_back();
        }
    }
};
