#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Maximum Product Subarray", "maxProduct") {
    Solution s;
    vector<int> input1 = {2,3,-2,4};
    REQUIRE(s.maxProduct(input1) == 6);

    vector<int> input2 = {-2,0,-1};
    REQUIRE(s.maxProduct(input2) == 0);

    vector<int> input3 = {-2,3,-4};
    REQUIRE(s.maxProduct(input3) == 24);

    vector<int> input4 = {0,2};
    REQUIRE(s.maxProduct(input4) == 2);

    vector<int> input5 = {3,-1,4,2};
    REQUIRE(s.maxProduct(input5) == 8);
}
