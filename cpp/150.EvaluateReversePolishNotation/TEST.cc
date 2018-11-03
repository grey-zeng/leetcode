#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Evaluate Reverse Polish Notation", "evalRPN") {
    Solution s;
    vector<string> input1 = {"2", "1", "+", "3", "*"};
    REQUIRE(s.evalRPN(input1) == 9);

    vector<string> input2 = {"4", "13", "5", "/", "+"};
    REQUIRE(s.evalRPN(input2) == 6);

    vector<string> input3 = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    REQUIRE(s.evalRPN(input3) == 22);
}
