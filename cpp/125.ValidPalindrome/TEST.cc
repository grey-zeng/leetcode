#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Valid Palindrome", "isPalindrome") {
    Solution s;
    REQUIRE(s.isPalindrome("cac") == TRUE);
    REQUIRE(s.isPalindrome("c ac") == TRUE);
    REQUIRE(s.isPalindrome("A man, a plan, a canal: Panama") == TRUE);
    REQUIRE(s.isPalindrome("race a car") == FALSE);
}
