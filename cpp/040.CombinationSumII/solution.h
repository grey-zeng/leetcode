#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); 
        vector<vector<int>> res;
        vector<int> combination;
        doCombinationSum(candidates, target, res, combination, 0);
        return res;
    }

    void doCombinationSum(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& combination, int begin) {
        if (!target) {
            res.push_back(combination);
            return;
        }
        for (int i=begin; i<candidates.size() && target >= candidates[i]; i++) {
            combination.push_back(candidates[i]);
            doCombinationSum(candidates, target - candidates[i], res, combination, i+1);
            while (i<candidates.size() && candidates[i] == candidates[i+1]) i++;
            combination.pop_back();
        }
    }
};
