#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Valid Parentheses", "validParentheses") {
    Solution s;
    REQUIRE(s.isValid("()") == true);
    REQUIRE(s.isValid("()[]{}") == true);
    REQUIRE(s.isValid("(]") == false);
    REQUIRE(s.isValid("([)]") == false);
    REQUIRE(s.isValid("{[]}") == true);
    REQUIRE(s.isValid("") == true);
}
