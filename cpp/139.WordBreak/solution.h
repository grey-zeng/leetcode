#include <vector>
#include <set>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    /**
     * 因为涉及到后面的值进行判断，所以需要进行动态规划求解
     * f(n) = wordDict.find(s.substr(f(n-1) | f(n-2) | f(n-3) | f(0),n))
     */
    bool wordBreak(string s, vector<string>& wordDict) {
        if (wordDict.empty()) return false;
        set<string> wordSet(wordDict.begin(), wordDict.end()); 
        vector<bool> dp(s.size()+1, false);
        dp[0] = true;
        for (int i=1; i<=s.size(); i++) {
            for(int j=i-1;j>=0;j--) {
                // 当该区间有命中时才进行判断，不然会陷入局部值中
                if (dp[j]) {
                    if (wordSet.find(s.substr(j,i-j))!= wordSet.end()) {
                        dp[i]=true;
                        break; //next i
                    }   
                }
            }
        }

        return dp[s.size()];

        return wordBreak(s, wordSet, 0);  
    }

    bool wordBreak(string s, set<string>& wordSet, int index) {
        int n = s.size();
        if (index == n) return true;
        int end = index;
        while (++end <= n) {
            if (wordSet.find(s.substr(index, end-index)) != wordSet.end()) {
                if (wordBreak(s, wordSet, end)) {
                    return true;
                }
            }
        } 
        return false;
    }
};
