#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        string res = "";
        for (int i = 0; i < s.size() - res.size()/2; i++) {
            string odd = this->longestPalindrome(s, i, i);
            string even = this->longestPalindrome(s, i, i+1);
            res = odd.size() > res.size()? odd: res;
            res = even.size() > res.size()? even: res;
        }
        return res;
    }

    string longestPalindrome(string s, int left , int right) {
        while (left >= 0 && right <= s.size() && s[left] == s[right] ) {
            left --;
            right ++;
        }
        // cout << left << "-" << right << endl;
        return s.substr(left + 1, right - left - 1);
    }
};
