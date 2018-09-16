#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Climbing Stairs", "climbStairs") {
    Solution s;
    REQUIRE(s.climbStairs(2) == 2);
    REQUIRE(s.climbStairs(3) == 3);
    REQUIRE(s.climbStairs(1) == 1);
    REQUIRE(s.climbStairs(0) == 0);
    REQUIRE(s.climbStairs(4) == 5);
}
