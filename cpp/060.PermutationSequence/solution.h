#include <string>
using namespace std;

class Solution {
public:
    string getPermutation(int n, int k) {
        // 更优的找规律做法
        int factorial[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880}; 
        string result = "";
        string nums[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
        // 防止溢出
        // 然而题目限制了不会溢出
        k = k % factorial[n];
        k = k==0? factorial[n]: k;
        while (n > 0) {
            int index = (k-1)/factorial[n-1];
            result = result + nums[index];
            k = k - index*factorial[n-1];
            for(int i=index; i<n; i++) nums[i] = nums[i+1];
            n--;
        }
        return result;

        // 常规的迭代做法
        string res = "";
        while(n>0) res = to_string(n--) + res; 
        while(--k>0) res = getNext(res);
        return res;
    }

    string getNext(string str) {
        // 求下个全排列的值
        return str;
    }
};
