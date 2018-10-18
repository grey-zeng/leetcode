#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        for (int i=0, j=s.size()-1;i<j; i++, j--) {
            while (isalnum(s[i]) == false && i<j) i++;
            while (isalnum(s[j]) == false && i<j) j--;
            if (toupper(s[i]) != toupper(s[j])) return false; 
        }
        return true;

        // 自己写的比较麻烦
        int lo=0, hi=s.size()-1;
        while (lo <= hi) {
            while (!(s[lo] >= 'A' && s[lo] <= 'Z') && !(s[lo] >= 'a' && s[lo] <= 'z') && lo < hi) lo++;
            while (!(s[hi] >= 'A' && s[hi] <= 'Z') && !(s[hi] >= 'a' && s[hi] <= 'z') && lo < hi) hi--;
            int diff = s[lo++] - s[hi--];
            if (diff != 0 && abs(diff) != 32) return false;
        }
        return true; 
    }
};
