#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Permutation Sequence", "getPermutation") {
    Solution s;
    REQUIRE(s.getPermutation(3, 1) == "123");
    REQUIRE(s.getPermutation(3, 3) == "213");
    REQUIRE(s.getPermutation(1, 3) == "1");
    REQUIRE(s.getPermutation(3, 7) == "123");
}
