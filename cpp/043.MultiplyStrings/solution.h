#include <string>
using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        string sum(num1.size() + num2.size(), '0');
        for (int i=num1.size()-1; i>=0; i--) {
            int carry = 0;
            // 从尾部开始扫描字符串
            for (int j=num2.size()-1; j>=0; j--) {
                int tmp = (num1[i] - '0') * (num2[j] - '0') + carry + (sum[i+j+1] - '0');
                sum[i+j+1] = tmp%10 + '0';
                carry = tmp/10;
            }
            // 需要加回对应的字符串上
            sum[i] += carry;
        }
        // 巧妙的使用std提供的截断函数
        size_t startpos = sum.find_first_not_of("0");
        if (string::npos != startpos) {
            return sum.substr(startpos);
        }
        return "0";
    }
};
