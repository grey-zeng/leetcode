#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"
#include <climits>
using namespace std;

TEST_CASE("Divide Two Integers", "divide") {
    Solution s;
    REQUIRE(s.divide(10, 3) == 3);
    REQUIRE(s.divide(7, -3) == -2);
    REQUIRE(s.divide(-7, -3) == 2);
    REQUIRE(s.divide(7, -1) == -7);
    REQUIRE(s.divide(7, 1) == 7);
    REQUIRE(s.divide(0, 1) == 0);
    REQUIRE(s.divide(INT_MIN, -1) == INT_MAX);
}
