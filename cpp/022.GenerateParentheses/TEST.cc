#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <vector>
#include <string>
using namespace std;


TEST_CASE("Generate Parentheses", "recall") {
    Solution s;
    vector<string> res1 = {
        "()"
    };
    REQUIRE(s.generateParenthesis(1) == res1);
    vector<string> res2 = {
        "(())",
        "()()"
    };
    REQUIRE(s.generateParenthesis(2) == res2);
    vector<string> res3 = {
        "((()))",
        "(()())",
        "(())()",
        "()(())",
        "()()()"
    }; 
    REQUIRE(s.generateParenthesis(3) == res3);
}
