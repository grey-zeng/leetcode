#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Unique Paths", "uniquePaths") {
    Solution s;
    REQUIRE(s.uniquePaths(3,2) == 3);
    REQUIRE(s.uniquePaths(7,3) == 28);
    REQUIRE(s.uniquePaths(3,1) == 1);
}
