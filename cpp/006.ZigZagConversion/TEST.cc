#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"


TEST_CASE("Longest Palindromic Substring", "longestPalindrome")
{
    Solution s;
    REQUIRE(s.convert("PAYPALISHIRING", 3) == "PAHNAPLSIIGYIR");
    REQUIRE(s.convert("PAYPALISHIRING", 4) == "PINALSIGYAHRPI");
    REQUIRE(s.convert("12", 4) == "12");
    REQUIRE(s.convert("12", 1) == "12");
    REQUIRE(s.convert("", 4) == "");
}
