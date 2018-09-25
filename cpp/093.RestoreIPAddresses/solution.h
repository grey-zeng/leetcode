#include <vector>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    /**
     * 一开始没用dfs来做，直接循环内修改字符，然后各种异常
     * 针对查找题，还是尽量不要修改对象吧，不然还需要分配内存
     */
    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        vector<int> ips;
        restoreIpAddresses(s, 0, ips, res);
        return res;
    }

    void restoreIpAddresses(string s,int begin, vector<int> ips, vector<string> &res) {
        if (ips.size() == 4) {
            if (begin != s.size()) return; 
            res.push_back(join(ips));
        } else {
            int ip = 0;
            for (int i=begin;i<begin+3; i++) {
                ip = ip * 10 + (s[i]-'0');
                if (ip > 255) break;
                ips.push_back(ip);
                restoreIpAddresses(s, i+1, ips, res); 
                ips.pop_back();
                if (ip == 0) break;
            }
        }
    }

    string join(vector<int> ips) {
        std::stringstream ss;
        for (int i=0; i<4; i++) {
            if (i!=0) ss << ".";
            ss << ips[i];
        }
        return ss.str();
    }
};
