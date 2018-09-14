#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        // 超简写法
        string s = "";
        int c = 0, i = a.size() - 1, j = b.size() - 1;
        while(i >= 0 || j >= 0 || c == 1) {
            c += i >= 0 ? a[i --] - '0' : 0;
            c += j >= 0 ? b[j --] - '0' : 0;
            s = char(c % 2 + '0') + s;
            c /= 2;
        }
        
        return s;


        // 转化法失败
        string longRes;
        unsigned long long aV = 0, bV = 0;
        for (int i=0; i<a.size(); i++) {
            if (a[a.size()-i-1] == '1')
                aV += pow(2, i);
        }
        for (int i=0; i<b.size(); i++) {
            if (b[b.size()-i-1] == '1')
                bV += pow(2, i);
        }
        unsigned long long sum = aV + bV;
        while (sum > 0) {
            longRes = (sum%2==1? "1": "0") + longRes;
            sum /= 2;
        }
        return longRes.empty()? "0": longRes;


        int len = a.size() + b.size();
        string res(len, '0');
        for (int i=0; i<a.size(); i++) {
            res[len-i-1] = a[a.size()-i-1]; 
        }
        bool carry = false;
        for (int i=0; i<b.size(); i++) {
            int iLen = len-i-1, iB = b.size()-i-1;

        }
        return res;
    }
};
