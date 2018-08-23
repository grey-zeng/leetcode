#include <string>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        int num = 1;
        string res = "1";
        while (num++ < n) {
            string newStr = "";
            // 新的方法相对简单些
            for (int i=0; i<res.size();) {
                int len = 0;
                while ((i+len)<res.size() && res[i+len] == res[i]) len++;
                newStr = newStr +to_string(len) + res[i]; 
                i += len;
            }
            res = newStr;
            continue;
            // 老方法相对来说代码太过复杂
            char prev = ' ';
            int doubleNum = 1;
            for (char str:res) {
                if (str == prev) {
                    doubleNum ++;
                } else {
                    if (prev != ' ') {
                        newStr = newStr + to_string(doubleNum) + prev;
                    }
                    prev = str;
                    doubleNum = 1;
                }
            }
            if (prev != ' ') newStr = newStr + to_string(doubleNum) + prev;
            res = newStr;
        }
        return res;
    }
};
