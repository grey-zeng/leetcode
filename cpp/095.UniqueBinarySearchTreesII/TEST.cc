#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Unique Binary Search Trees II", "generateTrees") {
    Solution s;
    REQUIRE(s.generateTrees(3).size() == 5);
}
