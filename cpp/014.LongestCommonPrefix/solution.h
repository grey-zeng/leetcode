#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string res = "";
        int i = 0, firstStrSize = strs[0].size();
        bool equal = true;
        while (equal && i < firstStrSize) {
            char current = strs[0][i];
            for (string str: strs) {
                if (str.size() <= i || str[i] != current) {
                    equal = false;
                    break;
                }
            }
            if (equal) {
                res += current;
            }
            i ++;
        }
        return res;
    }
};
