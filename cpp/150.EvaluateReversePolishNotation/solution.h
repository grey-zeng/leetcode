#include <string>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (auto token: tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int next = s.top();s.pop();
                int prev = s.top();s.pop();
                int res = 0;
                if (token == "+") res = prev + next;
                else if (token == "-") res = prev - next;
                else if (token == "*") res = prev * next;
                else res = prev / next;
                
                s.push(res);
            } else {
                s.push(stoi(token));
            }
        }
        return s.top();
    }
};
