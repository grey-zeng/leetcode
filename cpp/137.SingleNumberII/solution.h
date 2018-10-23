#include <vector>
using namespace std;

class Solution {
public:
    /**
     * 表示直接就懵逼，这个是直接拿了网上的解法来做的
     * @see https://leetcode.com/problems/single-number-ii/discuss/43296/An-General-Way-to-Handle-All-this-sort-of-questions.
     */
    int singleNumber(vector<int>& nums) {
        int a=0;
        int b=0;
        for(int c:nums){
            int ta=(~a&b&c)|(a&~b&~c);
            b=(~a&~b&c)|(~a&b&~c);
            a=ta;
        }
        return a|b; 
    }
};
