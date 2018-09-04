#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Pow", "myPow") {
    Solution s;
    REQUIRE(s.myPow(2.00000, 10) == 1024.00000);
    REQUIRE(s.myPow(2.10000, 3) == 9.26100);
    REQUIRE(s.myPow(2.00000, -2) == 0.25000);
    REQUIRE(s.myPow(0.00001, 2147483647) == 0.25000);
}
