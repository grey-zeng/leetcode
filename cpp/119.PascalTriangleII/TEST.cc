#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Pascal's Triangle II", "getRow") {
    Solution s;
    vector<int> output1 = {1,3,3,1};
    REQUIRE(s.getRow(3) == output1);
}
