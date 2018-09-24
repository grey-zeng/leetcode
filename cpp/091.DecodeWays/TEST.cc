#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Decode Ways", "numDecodings") {
    Solution s;
    REQUIRE(s.numDecodings("12") == 2);
    REQUIRE(s.numDecodings("226") == 3);
    REQUIRE(s.numDecodings("") == 0);
    REQUIRE(s.numDecodings("0") == 0);
    REQUIRE(s.numDecodings("0000") == 0);
    REQUIRE(s.numDecodings("01000") == 0);
    REQUIRE(s.numDecodings("10") == 1);
    // 这里的110好像不太好判断吧
    REQUIRE(s.numDecodings("110") == 1);
}
