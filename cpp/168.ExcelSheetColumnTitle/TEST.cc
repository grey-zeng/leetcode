#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Excel Sheet Column Title", "convertToTitle") {
    Solution s;
    REQUIRE(s.convertToTitle(1) == "A");
    REQUIRE(s.convertToTitle(28) == "AB");
    REQUIRE(s.convertToTitle(701) == "ZY");
}
