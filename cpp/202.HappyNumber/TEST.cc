#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Happy Number", "isHappy") {
    Solution s;
    REQUIRE(s.isHappy(19) == TRUE);
    REQUIRE(s.isHappy(23) == TRUE);
    REQUIRE(s.isHappy(20) == FALSE);
}
