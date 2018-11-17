#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Number of 1 Bits", "hammingWeight") {
    Solution s;
    REQUIRE(s.hammingWeight(11) == 3);
    REQUIRE(s.hammingWeight(128) == 1);
}
