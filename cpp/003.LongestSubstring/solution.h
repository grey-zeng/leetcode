#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        size_t res = 0, begin = 0;
        std::map<char, int > m;
        for (int i = 0; i < s.size(); ++i) {
            auto found = m.find(s[i]);
            if (found != m.end() && found->second >= begin) {
                res = max(res, i - begin);
                begin = found->second + 1;
            }
            m[s[i]] = i;
        }
        return max(res, s.size()-begin);
    }
};
