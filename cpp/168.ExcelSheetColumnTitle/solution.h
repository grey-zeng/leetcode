#include <string>
using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        string res = "";
        char tmp;
        // 因为A相当于0位，所以这里需要--
        while (n-->0) {
            tmp = n%26 + 'A';
            res = tmp + res;
            n = n/26;
        }
        return res;
    }
};
