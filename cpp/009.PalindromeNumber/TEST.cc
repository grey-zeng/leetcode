#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Palindrome Number", "palindromeNumber")
{
    Solution s;
    REQUIRE(s.isPalindrome(121) == true);
    REQUIRE(s.isPalindrome(-121) == false);
    REQUIRE(s.isPalindrome(10) == false);
    REQUIRE(s.isPalindrome(0) == true);
    REQUIRE(s.isPalindrome(101) == true);
    REQUIRE(s.isPalindrome(10101) == true);
}
