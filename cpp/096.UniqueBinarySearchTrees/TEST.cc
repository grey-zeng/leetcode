#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Unique Binary Search Trees", "numTrees") {
    Solution s;
    REQUIRE(s.numTrees(3) == 5);
}
