#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("String to Integer", "atoi")
{
    Solution s;
    REQUIRE(s.myAtoi("42") == 42);
    REQUIRE(s.myAtoi(" -42") == -42);
    REQUIRE(s.myAtoi("4193 with words") == 4193);
    REQUIRE(s.myAtoi("words and 987") == 0);
    REQUIRE(s.myAtoi("-91283472332") == -2147483648);
    
    REQUIRE(s.myAtoi("2147483646") == 2147483646);
    REQUIRE(s.myAtoi("2147483647") == 2147483647);
    REQUIRE(s.myAtoi("+1") == 1);
    REQUIRE(s.myAtoi( "+0  234") == 0);
}
