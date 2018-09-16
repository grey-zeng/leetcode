#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Sqrt(x)", "mySqrt") {
    Solution s;
    REQUIRE(s.mySqrt(4) == 2);
    REQUIRE(s.mySqrt(8) == 2);
}
