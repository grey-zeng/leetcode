#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Single Number II", "singleNumber") {
    Solution s;
    vector<int> input1 = {2,2,3,2};
    REQUIRE(s.singleNumber(input1) == 3);

    vector<int> input2 = {0,1,0,1,0,1,99};
    REQUIRE(s.singleNumber(input2) == 99);
}
