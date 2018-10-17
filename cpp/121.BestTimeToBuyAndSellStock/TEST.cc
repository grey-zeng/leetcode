#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"
#include "solution.h"

TEST_CASE("Best Time to Buy and Sell Stock", "maxProfit") {
    Solution s;
    vector<int> input1 = {7,1,5,3,6,4};
    REQUIRE(s.maxProfit(input1) == 5);
    vector<int> input2 = {7,6,4,3,1};
    REQUIRE(s.maxProfit(input2) == 0);
}
