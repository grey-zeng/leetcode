#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char symbol: s) {
            switch(symbol) {
                case '{':
                    st.push('}');
                    break;
                case '[':
                    st.push(']');
                    break;
                case '(':
                    st.push(')');
                    break;
                case '}':
                case ']':
                case ')':
                    if (st.empty()) return false; 
                    if (st.top() != symbol) {
                        return false;
                    }
                    st.pop();
                    break;
                default:
                    return false;
            }
        }
        return st.empty();
    }
};
