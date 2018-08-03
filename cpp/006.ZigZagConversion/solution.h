#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1) return s;
        vector<string> rows(numRows);
        int currentRow = 0;
        bool goingDown = false;
        for (char c: s) {
            rows[currentRow] += c;
            if (currentRow == (numRows-1)) {
                goingDown = true;
            } else if (currentRow == 0) {
                goingDown = false;
            }
            currentRow += goingDown ? -1 : 1;
        }

        string res;
        for (string str: rows) res += str;
        return res;
    }

    // 推导失败
    string convert_error(string s, int numRows) {
        if (numRows <= 1) return s;
        string res = "";
        int i = 0, n = 0, r = 0, sSize = s.size();
        while (res.size() < sSize) {
            cout << "i:" << i << " n:" << n << endl;
            if (i > sSize) {
                n = 0;
                i = ++r;
                continue;
            }
            res = res + s[i];
            if (r == 0 || r == (numRows - 1)) {
                i += (2 * numRows - 2);
            } else if (n%2 == 0) { 
                // 暂时来说就这里失败了，然后就不想推导了
                i += 2*(numRows - 1 - i);
            } else {
                i += (2*((n+1) * numRows - 2*n - i) + 1);
            }
            n++;
        }
        return res;
    }
};

