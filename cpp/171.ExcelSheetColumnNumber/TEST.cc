#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Excel Sheet Column Number", "titleToNumber") {
    Solution s;
    REQUIRE(s.titleToNumber("A") == 1);
    REQUIRE(s.titleToNumber("AB") == 28);
    REQUIRE(s.titleToNumber("ZY") == 701);
    REQUIRE(s.titleToNumber("Z") == 26);
}
