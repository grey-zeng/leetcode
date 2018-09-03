#include <vector>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        for (int i=0; i<strs.size(); i++) {
            string key = getSortStr(strs[i]);
            m[key].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for (auto iter: m) {
            res.push_back(iter.second);
        }
        return res;
    }

    string getSortStr(string input) {
        sort(input.begin(), input.end());
        return input;
    }
};
