#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Reverse Integer", "reverseInteger")
{
    Solution s;
    REQUIRE(s.reverse(123) == 321);
    REQUIRE(s.reverse(-123) == -321);
    REQUIRE(s.reverse(120) == 21);
    // overflow
    REQUIRE(s.reverse(1534236469) == 0);
    REQUIRE(s.reverse(-2147483412) == -2143847412);
}
