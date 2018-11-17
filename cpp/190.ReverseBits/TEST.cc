#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Reverse Bits", "reverseBits") {
    Solution s;
    REQUIRE(s.reverseBits(43261596) == 964176192);
}
