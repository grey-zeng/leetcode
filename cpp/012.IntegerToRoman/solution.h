#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    // I  1
    // V  5
    // X  10
    // L  50
    // C  100
    // D  500
    // M  1000
    string intToRoman(int num) {
        string res = "";
        vector<int> keys = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> values = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        while (num > 0) {
            bool match = false;
            for (int i = 0;!match && i < keys.size(); i++) {
                if (num >= keys[i]) {
                    num -= keys[i];
                    res += values[i];
                    match = true;
                }
            }
            // todo 可以将无法匹配的项删除掉
        }   
        return res;
    }
};
