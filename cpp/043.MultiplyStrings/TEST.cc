#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Multiply Strings", "multiplyStrings") {
    Solution s;
    REQUIRE(s.multiply("2", "3") == "6");
    REQUIRE(s.multiply("123", "456") == "56088");
}
