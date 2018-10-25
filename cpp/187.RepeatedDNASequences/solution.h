#include <vector>
#include <string>
#include <map>
using namespace std;

int cmp(const pair<string,int>& x,const pair<string,int>& y)  {  
    return x.second<y.second;  
}  

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> res;
        // 使用超简单的hash大法
        // 如果要优化空间可以使用映射来处理
        if (s.size() < 10) return res;
        map<string,int> m;
        for (int i=0; i<=s.size()-10; i++) {
            string str = s.substr(i, 10);
            if (m[str] == 1) res.push_back(str);
            m[str]++;
        }
        return res;
    }

};
