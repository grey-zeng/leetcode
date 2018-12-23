#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Bitwise AND of Numbers Range", "rangeBitwiseAnd") {
    Solution s;
    REQUIRE(s.rangeBitwiseAnd(5,7) == 4);
    REQUIRE(s.rangeBitwiseAnd(0,1) == 0);
}
