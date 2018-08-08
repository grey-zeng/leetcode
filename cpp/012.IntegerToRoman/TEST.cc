#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Integer to Roman", "interToRoman")
{
    Solution s;
    REQUIRE(s.intToRoman(1) == "I");
    REQUIRE(s.intToRoman(3) == "III");
    REQUIRE(s.intToRoman(4) == "IV");
    REQUIRE(s.intToRoman(9) == "IX");
    REQUIRE(s.intToRoman(10) == "X");
    REQUIRE(s.intToRoman(20) == "XX");
    REQUIRE(s.intToRoman(58) == "LVIII");
    REQUIRE(s.intToRoman(1994) == "MCMXCIV");
}
