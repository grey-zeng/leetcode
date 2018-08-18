#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        if (needle.size() > haystack.size()) return -1;
        // 需要匹配上第一个字符
        for (int i=0; (i + needle.size()-1) < haystack.size(); i++) {
            int j = 0;
            for (j=0; j<needle.size() && (j+i) < haystack.size(); j++) {
                if (haystack[i+j] != needle[j]) break;
            }
            if (j == needle.size()) return i;
        } 
        return -1;
    }
};
