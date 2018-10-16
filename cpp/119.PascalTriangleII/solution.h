#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        vector<int> prevList;
        if (rowIndex < 0) return res;
        res.push_back(1);
        while (--rowIndex >= 0) {
            prevList = res;
            // 重新分配新行
            res = vector<int>{};
            int prev = 0;
            for (int val: prevList) {
                res.push_back(prev + val);
                prev = val;
            }
            res.push_back(prev);
        }
        
        return res;
    }

    vector<int> getRow_simple(int rowIndex) {
        vector<int> A(rowIndex+1, 0);
        A[0] = 1;
        for(int i=1; i<rowIndex+1; i++)
            for(int j=i; j>=1; j--)
                // 这里真的是很巧妙
                A[j] += A[j-1];
        return A;
    }
};
