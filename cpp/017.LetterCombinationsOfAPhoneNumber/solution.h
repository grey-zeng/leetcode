#include <vector>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.length() == 0) return {}; 
        map<char, string> m = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        vector<string> res = {""};
        for (char num: digits) {
            vector<string> tmp;
            for (string old: res) {
                for (char newChar: m[num]) {
                    tmp.push_back(old + newChar);
                }
            }
            res = tmp;
        }
        return res;
    }
};
