#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Longest Palindromic Substring", "longestPalindrome")
{
    Solution s;
    REQUIRE(s.longestPalindrome("11111") == "11111");
    REQUIRE(s.longestPalindrome("babad") == "bab");
    REQUIRE(s.longestPalindrome("11221") == "1221");
    REQUIRE(s.longestPalindrome("") == "");
}
