#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Single Number", "singleNumber") {
    Solution s;
    vector<int> input1 = {2,2,1};
    REQUIRE(s.singleNumber(input1) == 1);

    vector<int> input2 = {4,1,2,1,2};
    REQUIRE(s.singleNumber(input2) == 4);
}
