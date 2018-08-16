#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    // 解法1 使用回溯法
    // 构造过程：递归函数(结果容器,传递链,传递参数,终点条件)
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        doGenerate(&res, "", n, 0);
        return res;
    }

    void doGenerate(vector<string> *res, string str, int ln, int rn) {
        if (ln == 0 && rn == 0) res->push_back(str);
        if (ln > 0) doGenerate(res, str + "(", ln - 1, rn + 1);
        if (rn > 0) doGenerate(res, str + ")", ln, rn -1);
    }
    

    // 解法2 也是挺巧妙的求递推
    vector<string> generateParenthesis_backTracking(int n) {
        vector<string> res;
        if (n == 0) {
            res.push_back("");
        } else {
            for (int i=0; i < n; ++i) {
                for (string left: generateParenthesis_backTracking(i))
                    for (string right: generateParenthesis_backTracking(n-i-1))
                        // 递进关系推导
                        res.push_back("(" + left + ")" + right);
            }
        }
        return res;
    }
};
