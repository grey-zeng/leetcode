#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Combinations", "combine") {
    Solution s;
    auto output1 = s.combine(4, 2);
    REQUIRE(output1.size() == 6);
}
