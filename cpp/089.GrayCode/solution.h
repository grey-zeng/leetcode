#include <vector>
using namespace std;

class Solution {
public:
    // 这道题压根没有想出来
    // 表示这里还是需要来找规律
    vector<int> grayCode(int n) {
        vector<int> res;
        res.push_back(0);
        for (int i=0; i<n; i++) {
            int size = res.size();
            // 每次加多一位数，对折已有数列
            for (int k=size-1; k>=0; k--)  res.push_back(res[k] | 1 << i);
        }
        return res;
    }
};
